[indent=4]
uses sdx
uses sdx.files
uses sdx.graphics.s2d
uses Entitas

namespace ShmupWarz

    class ViewManagerSystem : Object implements ISystem, IInitializeSystem, ISetWorld

        _sprites : list of Sprite
        _group : Group
        _world : World
        _game : GameScene
        _atlas: TextureAtlas

        construct(game : GameScene)
            _game = game

        def setWorld(world : World)
            _world = world

        /**
        * Listen for resources to be added
        * and then load them in from the file
        */
        def initialize()
            _group = _world.getGroup(Matcher.AllOf({Component.Resource}))
            _group.onEntityAdded.add(onEntityAdded)
            // Sdx.app.sprites = new GenericArray of Sprite
            _sprites = Sdx.app.sprites
            // load the overlap2d atlas
            _atlas = new TextureAtlas()
            var imageFile = new FileHandle("orig/pack.atlas", sdx.FileType.Resource)
            var imageDir = new FileHandle("orig", sdx.FileType.Resource)
            _atlas.load(new TextureAtlas.TextureAtlasData(imageFile, imageDir, false))

        /**
        *  OnEntityAdded event:
        */
        def onEntityAdded(g : Group, e : Entity, ix : int, c : IComponent)
            scale : ScaleComponent
            layer : LayerComponent
            ordinal : int = 0

            var res = (ResourceComponent)c

            if res.path.index_of("/") == 0 || res.path.index_of("resource://") == 0
                res.sprite = Sprite.fromFile(Sdx.app.renderer, res.path)
            else
                res.sprite = Sprite.fromAtlas(Sdx.app.renderer, _atlas, res.path)

            var sprite = (Sprite)res.sprite
            if sprite == null
                print "Failed to load %s", res.path
                return

            if hasScale(e)
                sprite.scale.x = getScale(e).x
                sprite.scale.y = getScale(e).y

            if hasLayer(e)
                sprite.layer = getLayer(e).ordinal
                ordinal = getLayer(e).ordinal

            if hasTint(e)
                sprite.color.r = (uint8)getTint(e).r
                sprite.color.g = (uint8)getTint(e).g
                sprite.color.b = (uint8)getTint(e).b

            if res.bgd
                sprite.centered = false

            /**
            * Insert sprite in layer order
            */
            if _sprites.size == 0
                _sprites.add(sprite)
            else
                var i = 0
                for s in _sprites
                    if ordinal <= s.layer
                        _sprites.insert(i, sprite)
                        return
                    else
                        i++
                _sprites.add(sprite)



