[indent=4]
uses sdx
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

            for var entity in _group.getEntities()
                var position = getPosition(entity)
                var health = getHealth(entity)
                var text = getText(entity)
                var pct = "%d%%".printf((int)Math.fmin(100, health.health/health.maximumHealth*100.0))

                if pct == text.text
                    sprite = (Sprite)text.sprite
                    if sprite == null
                        sprite = Sprite.fromRenderedText(Sdx.app.renderer, Sdx.app.font, text.text, sdx.graphics.Color.Lime)
                        sprite.centered = false
                        text.sprite = sprite
                else
                    text.text = pct
                    text.sprite = null
                    sprite = Sprite.fromRenderedText(Sdx.app.renderer, Sdx.app.font, text.text, sdx.graphics.Color.LimeGreen)
                    sprite.centered = false
                    text.sprite = sprite

                sprite.x = (int)position.x
                sprite.y = (int)position.y
                Sdx.app.onetime.add(sprite)


