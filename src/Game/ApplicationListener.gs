[indent=4]
/**
 * ApplicationListener.gs
 *  port of libgdx.
 * 
 *
 */
namespace Bosco.UI
    /** <p>
     * An <code>ApplicationListener</code> is called when the {@link Application} is created, resumed, rendering, paused or destroyed.
     * All methods are called in a thread that has the OpenGL context current. You can thus safely create and manipulate graphics
     * resources.
     * </p>
     * 
     * <p>
     * The <code>ApplicationListener</code> interface follows the standard Android activity life-cycle and is emulated on the desktop
     * accordingly.
     * </p>
     * 
     * @author mzechner */
    interface ApplicationListener

	    /** Called when the {@link Application} is first created. */
        def abstract create()

        /** Called when the {@link Application} is resized. This can happen at any point during a non-paused state but will never happen
         * before a call to {@link #create()}.
         * 
         * @param width the new width in pixels
         * @param height the new height in pixels */
        def abstract resize(width: int, height: int)

    	/** Called when the {@link Application} should render itself. */
        def abstract render(delta: double)

        /** Called when the {@link Application} is paused, usually when it's not active or visible on screen. An Application is also
         * paused before it is destroyed. */
        def abstract pause()

	    /** Called when the {@link Application} is resumed from a paused state, usually when it regains focus. */
        def abstract resume()
        
    	/** Called when the {@link Application} is destroyed. Preceded by a call to {@link #pause()}. */
        def abstract dispose()
        