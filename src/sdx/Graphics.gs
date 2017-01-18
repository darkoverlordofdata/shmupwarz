[indent=4]
/**
 * Graphics.gs
 *
 * Author: 
 *      bruce davidson
 */

namespace sdx

    class Graphics : Object

        prop readonly deltaTime: double
        prop readonly frames: int
        prop readonly fps: int
        prop readonly width: int = 320
        prop readonly height: int = 480
        prop readonly scale: double = 1.0
        prop readonly pixelFactor: double = 1.0

        lastTime: private double = (double)GLib.get_real_time()/1000000.0
        currentTime: private double = 0 
        elapsed: private double = 0

        def updateTime()
            lastTime = currentTime
            currentTime = (double)GLib.get_real_time()/1000000.0
            _deltaTime = (currentTime - lastTime)
            _frames++
            elapsed = elapsed + _deltaTime

            if elapsed > 1.0
                _fps = (int)((double)_frames / elapsed)
                elapsed = 0.0
                _frames = 0
            
