[indent=4]
/**
 * BuiltItemHandler.gs
 *
 * 
 *
 */
uses Gee
uses sdx
uses sdx.math
uses sdx.scenes.scene2d
uses o2d.data

namespace o2d.scene2d

    interface BuiltItemHandler : Object
        def abstract onItemBuild(item: Actor)
        class static Default : Object implements BuiltItemHandler
            // def private contains(item: string, strings: array of string): bool
            //     for s in strings
            //         if s == item do return true
            //     return false

            def onItemBuild(item: Actor)
                if item isa CompositeActor
                    var data = (CoreActorData) item.userObject
                    // if data != null && data.tags != null && contains("button", data.tags)
                    if data != null && data.tags != null && data.tags.contains("button")
                        item.addListener(new ButtonClickListener())

