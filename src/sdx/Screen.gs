[indent=4]
/**
 * Screen.gs
 *
 * 
 *
 */
namespace sdx

    interface Screen : Object

        def abstract show()
        def abstract render(delta: double)
        def abstract resize(width: int, height: int)
        def abstract pause()
        def abstract resume()
        def abstract hide()
        def abstract dispose()
        