//using GLib.Math

/**

### AutoVala Project ###
autovala_version: 24
project_name: shmupwarz
*vala_version: 0.34

custom: data/local/fonts share/fonts

gresource: resources_gresource_xml data/resources.gresource.xml

vapidir: src/vapis

vala_binary: src/shmupwarz
compile_c_options: -w
use_gresource: resources_gresource_xml
vala_check_package: Bosco
vala_check_package: Entitas
vala_check_package: SDL2_gfx
vala_check_package: SDL2_image
vala_check_package: SDL2_mixer
vala_check_package: SDL2_ttf
vala_check_package: gee-0.8
vala_check_package: sdl2
*vala_check_package: gio-2.0
*vala_check_package: glib-2.0
*vala_check_package: gobject-2.0
c_library: m
*vala_source: Components.gs
*vala_source: Entities.gs
*vala_source: Game.gs
*vala_source: Systems/CollisionSystem.gs
*vala_source: Systems/ColorTweenSystem.gs
*vala_source: Systems/DestroySystem.gs
*vala_source: Systems/EntitySpawningTimerSystem.gs
*vala_source: Systems/ExpiringSystem.gs
*vala_source: Systems/HealthRenderSystem.gs
*vala_source: Systems/HudRenderSystem.gs
*vala_source: Systems/MovementSystem.gs
*vala_source: Systems/PlayerInputSystem.gs
*vala_source: Systems/RemoveOffscreenShipsSystem.gs
*vala_source: Systems/RenderPositionSystem.gs
*vala_source: Systems/ScaleTweenSystem.gs
*vala_source: Systems/SoundEffectSystem.gs
*vala_source: Systems/ViewManagerSystem.gs
*vala_source: shmupwarz.vala


*po: po

*translate: genie src/Components.gs
*translate: genie src/Entities.gs
*translate: genie src/Game.gs
*translate: genie src/Systems/CollisionSystem.gs
*translate: genie src/Systems/ColorTweenSystem.gs
*translate: genie src/Systems/DestroySystem.gs
*translate: genie src/Systems/EntitySpawningTimerSystem.gs
*translate: genie src/Systems/ExpiringSystem.gs
*translate: genie src/Systems/HealthRenderSystem.gs
*translate: genie src/Systems/HudRenderSystem.gs
*translate: genie src/Systems/MovementSystem.gs
*translate: genie src/Systems/PlayerInputSystem.gs
*translate: genie src/Systems/RemoveOffscreenShipsSystem.gs
*translate: genie src/Systems/RenderPositionSystem.gs
*translate: genie src/Systems/ScaleTweenSystem.gs
*translate: genie src/Systems/SoundEffectSystem.gs
*translate: genie src/Systems/ViewManagerSystem.gs
*translate: vala src/shmupwarz.vala

*data: data/local

*doc: doc

*desktop: data/shmupwarz.desktop


 */
namespace ShmupWarz {
    
}