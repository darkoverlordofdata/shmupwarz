[indent=4]
/**
 * MenuScene.gs
 *
 * 
 *
 */
uses sdx
uses sdx.scenes.scene2d
uses o2d
uses o2d.data
uses o2d.scene2d

def main(args: array of string)
    var game = new ShmupWarz.ShmupWarzGame(true, 1.0)
    game.run()
    
namespace ShmupWarz
    class ShmupWarzGame : Game

        prop readonly desktop: bool
        prop readonly scale: double
        prop readonly density: double
        prop menuScene: MenuScene
        prop gameScene: GameScene
        prop optionScene: MenuScene
        prop scoreScene: MenuScene
        
        prop arial: sdx.Font

        construct(desktop: bool, scale: double)
            super("resource:///darkoverlordofdata/shmupwarz")
            _density = 1
            _desktop = desktop
            _scale = scale
            initializePools()
            var path = GLib.FileUtils.read_link("/proc/self/exe")
            var proc = File.new_for_path(path)
            var rootPath = proc.resolve_relative_path("../../../").get_path()     
            defaultFont = rootPath+"/fonts/OpenDyslexic-Bold.otf"
            game = this

        def override create()
            playGame()

        def menuGame() 
            var sceneLoader = new SceneLoader()
            menuScene = new MenuScene(sceneLoader, new MenuUI(this, sceneLoader))
            optionScene = null
            scoreScene = null
            gameScene = null
            setScreen(menuScene)
        
        def optionsGame() 
            var sceneLoader = new SceneLoader()
            menuScene = null
            optionScene = new MenuScene(sceneLoader, new OptionUI(this, sceneLoader))
            setScreen(optionScene)
            scoreScene = null
            gameScene = null
        

        def scoreGame() 
            var sceneLoader = new SceneLoader()
            menuScene = null
            optionScene = null
            scoreScene = new MenuScene(sceneLoader, new ScoreUI(this, sceneLoader))
            setScreen(scoreScene)
            gameScene = null
        

        def playGame() 
            menuScene = null
            optionScene = null
            scoreScene = null
            gameScene = new GameScene(desktop, scale)
            setScreen(gameScene)
        

