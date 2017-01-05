[indent=4]
/**
 * load overlap2d project.dt
 */
namespace Overlap2D
    /**
     *
     */
    class SceneVO : Object
        prop sceneName: string
        prop composite : CompositeVO?
        prop lightSystemEnabled: bool
        prop ambientColor: array of double
        prop physicsPropertiesVO: PhysicsPropertiesVO?
        // prop verticalGuides : list of double
        // prop horizontalGuides : list of double

        construct(json: Json.Object)
            ambientColor = {1, 1, 1, 1}
            // verticalGuides = new list of double
            // horizontalGuides = new list of double
            load(json)

        /**
         * deserialize properites from json
         */
        def load(json: Json.Object)
            if json.has_member("sceneName")
                sceneName = json.get_string_member("sceneName")
                
            if json.has_member("composite")
                composite = new CompositeVO(json.get_object_member("composite"))


        /**
         * to_string with indentation
         */
        def to_string(z:int=0) : string
            return string.join("\n", "<Scene> {",
                string.join("", tab(z+1), "sceneName:", sceneName),
                string.join("", tab(z), "}"))
