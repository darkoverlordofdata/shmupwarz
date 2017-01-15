[indent=4]
/**
 * Game.gs
 *
 * 
 *
 */
uses Bosco

namespace sdx

    class abstract Game : AbstractGame implements ApplicationListener
        screen : Screen

        def abstract create()

        def dispose()
            if screen != null do screen.hide()
            
        def pause()
            if screen != null do screen.pause()
            
        def resume()
            if screen != null do screen.resume()
            
        def render(delta: double)
            if screen != null do screen.render(delta)
            
        def resize(width: int, height: int)
            if screen != null do screen.resize(width, height)

        def setScreen(screen: Screen)
            if this.screen != null do this.screen.hide()
            this.screen = screen
            if this.screen != null  
                this.screen.show()
                // this.screen.resize()

        def getScreen(): Screen
            return screen