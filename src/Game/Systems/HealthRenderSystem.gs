[indent=4]
uses sdx
uses sdx.graphics.s2d
uses Entitas
uses GLib

namespace ShmupWarz 


    class HealthRenderSystem : Object implements  ISetWorld,  IExecuteSystem,  IInitializeSystem, ISystem

        _game : GameScene
        _world : World
        _group : Group

        construct(game : GameScene)
            _game = game

        def setWorld(world: World)
            _world = world

        def initialize()
            _group = _world.getGroup(Matcher.AllOf({Component.Position, Component.Health, Component.Text}))

        def execute()
            sprite:Sprite = null

            for var e in _group.getEntities()
                var entity = e as ShmupWarz.Entity
                var position = entity.position
                var health = entity.health
                var text = entity.text
                var pct = "%d%%".printf((int)Math.fmin(100, health.health/health.maximumHealth*100.0))


                if pct == text.text
                    // print "HealthRenderSystem::execute0 %s - %s", entity.name, pct
                    sprite = (Sprite)text.sprite
                    if sprite == null
                        sprite = Sprite.fromRenderedText(Sdx.app.renderer, Sdx.app.font, text.text, sdx.graphics.Color.Lime)
                        sprite.centered = false
                        text.sprite = sprite
                else
                    // print "HealthRenderSystem::execute1 %s - %s", entity.name, pct
                    text.text = pct
                    text.sprite = null
                    sprite = Sprite.fromRenderedText(Sdx.app.renderer, Sdx.app.font, text.text, sdx.graphics.Color.LimeGreen)
                    sprite.centered = false
                    text.sprite = sprite

                sprite.x = (int)position.x
                sprite.y = (int)position.y
                Sdx.app.onetime.add(sprite)


