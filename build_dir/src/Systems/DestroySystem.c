/* DestroySystem.c generated by valac 0.34.4, the Vala compiler
 * generated from DestroySystem.gs, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <Entitas.h>
#include <Bosco.h>
#include <stdlib.h>
#include <string.h>


#define SHMUP_WARZ_TYPE_DESTROY_SYSTEM (shmup_warz_destroy_system_get_type ())
#define SHMUP_WARZ_DESTROY_SYSTEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHMUP_WARZ_TYPE_DESTROY_SYSTEM, ShmupWarzDestroySystem))
#define SHMUP_WARZ_DESTROY_SYSTEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHMUP_WARZ_TYPE_DESTROY_SYSTEM, ShmupWarzDestroySystemClass))
#define SHMUP_WARZ_IS_DESTROY_SYSTEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHMUP_WARZ_TYPE_DESTROY_SYSTEM))
#define SHMUP_WARZ_IS_DESTROY_SYSTEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHMUP_WARZ_TYPE_DESTROY_SYSTEM))
#define SHMUP_WARZ_DESTROY_SYSTEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHMUP_WARZ_TYPE_DESTROY_SYSTEM, ShmupWarzDestroySystemClass))

typedef struct _ShmupWarzDestroySystem ShmupWarzDestroySystem;
typedef struct _ShmupWarzDestroySystemClass ShmupWarzDestroySystemClass;
typedef struct _ShmupWarzDestroySystemPrivate ShmupWarzDestroySystemPrivate;

#define SHMUP_WARZ_TYPE_GAME (shmup_warz_game_get_type ())
#define SHMUP_WARZ_GAME(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHMUP_WARZ_TYPE_GAME, ShmupWarzGame))
#define SHMUP_WARZ_GAME_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHMUP_WARZ_TYPE_GAME, ShmupWarzGameClass))
#define SHMUP_WARZ_IS_GAME(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHMUP_WARZ_TYPE_GAME))
#define SHMUP_WARZ_IS_GAME_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHMUP_WARZ_TYPE_GAME))
#define SHMUP_WARZ_GAME_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHMUP_WARZ_TYPE_GAME, ShmupWarzGameClass))

typedef struct _ShmupWarzGame ShmupWarzGame;
typedef struct _ShmupWarzGameClass ShmupWarzGameClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_ptr_array_unref0(var) ((var == NULL) ? NULL : (var = (g_ptr_array_unref (var), NULL)))

#define SHMUP_WARZ_TYPE_COMPONENT (shmup_warz_component_get_type ())

#define SHMUP_WARZ_TYPE_RESOURCE_COMPONENT (shmup_warz_resource_component_get_type ())
#define SHMUP_WARZ_RESOURCE_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHMUP_WARZ_TYPE_RESOURCE_COMPONENT, ShmupWarzResourceComponent))
#define SHMUP_WARZ_RESOURCE_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHMUP_WARZ_TYPE_RESOURCE_COMPONENT, ShmupWarzResourceComponentClass))
#define SHMUP_WARZ_IS_RESOURCE_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHMUP_WARZ_TYPE_RESOURCE_COMPONENT))
#define SHMUP_WARZ_IS_RESOURCE_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHMUP_WARZ_TYPE_RESOURCE_COMPONENT))
#define SHMUP_WARZ_RESOURCE_COMPONENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHMUP_WARZ_TYPE_RESOURCE_COMPONENT, ShmupWarzResourceComponentClass))

typedef struct _ShmupWarzResourceComponent ShmupWarzResourceComponent;
typedef struct _ShmupWarzResourceComponentClass ShmupWarzResourceComponentClass;
typedef struct _ShmupWarzResourceComponentPrivate ShmupWarzResourceComponentPrivate;

struct _ShmupWarzDestroySystem {
	GObject parent_instance;
	ShmupWarzDestroySystemPrivate * priv;
};

struct _ShmupWarzDestroySystemClass {
	GObjectClass parent_class;
};

struct _ShmupWarzDestroySystemPrivate {
	EntitasWorld* _world;
	EntitasGroup* _group;
	ShmupWarzGame* _game;
	GPtrArray* _sprites;
};

typedef enum  {
	SHMUP_WARZ_COMPONENT_Bounds,
	SHMUP_WARZ_COMPONENT_Bullet,
	SHMUP_WARZ_COMPONENT_ColorTween,
	SHMUP_WARZ_COMPONENT_Destroy,
	SHMUP_WARZ_COMPONENT_Enemy,
	SHMUP_WARZ_COMPONENT_Expires,
	SHMUP_WARZ_COMPONENT_Firing,
	SHMUP_WARZ_COMPONENT_Health,
	SHMUP_WARZ_COMPONENT_Layer,
	SHMUP_WARZ_COMPONENT_Life,
	SHMUP_WARZ_COMPONENT_Mine,
	SHMUP_WARZ_COMPONENT_Mouse,
	SHMUP_WARZ_COMPONENT_Player,
	SHMUP_WARZ_COMPONENT_Position,
	SHMUP_WARZ_COMPONENT_Resource,
	SHMUP_WARZ_COMPONENT_ScaleTween,
	SHMUP_WARZ_COMPONENT_Scale,
	SHMUP_WARZ_COMPONENT_Score,
	SHMUP_WARZ_COMPONENT_SoundEffect,
	SHMUP_WARZ_COMPONENT_Text,
	SHMUP_WARZ_COMPONENT_Tint,
	SHMUP_WARZ_COMPONENT_Velocity,
	SHMUP_WARZ_COMPONENT_ComponentsCount
} ShmupWarzComponent;

struct _ShmupWarzResourceComponent {
	GObject parent_instance;
	ShmupWarzResourceComponentPrivate * priv;
	gchar* path;
	GObject* sprite;
	gboolean bgd;
};

struct _ShmupWarzResourceComponentClass {
	GObjectClass parent_class;
};


static gpointer shmup_warz_destroy_system_parent_class = NULL;
static EntitasISystemIface* shmup_warz_destroy_system_entitas_isystem_parent_iface = NULL;
static EntitasISetWorldIface* shmup_warz_destroy_system_entitas_iset_world_parent_iface = NULL;
static EntitasIInitializeSystemIface* shmup_warz_destroy_system_entitas_iinitialize_system_parent_iface = NULL;
static EntitasIExecuteSystemIface* shmup_warz_destroy_system_entitas_iexecute_system_parent_iface = NULL;

GType shmup_warz_destroy_system_get_type (void) G_GNUC_CONST;
GType shmup_warz_game_get_type (void) G_GNUC_CONST;
#define SHMUP_WARZ_DESTROY_SYSTEM_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SHMUP_WARZ_TYPE_DESTROY_SYSTEM, ShmupWarzDestroySystemPrivate))
enum  {
	SHMUP_WARZ_DESTROY_SYSTEM_DUMMY_PROPERTY
};
ShmupWarzDestroySystem* shmup_warz_destroy_system_new (ShmupWarzGame* game);
ShmupWarzDestroySystem* shmup_warz_destroy_system_construct (GType object_type, ShmupWarzGame* game);
static void shmup_warz_destroy_system_real_setWorld (EntitasISetWorld* base, EntitasWorld* world);
static void shmup_warz_destroy_system_real_initialize (EntitasIInitializeSystem* base);
GType shmup_warz_component_get_type (void) G_GNUC_CONST;
static void shmup_warz_destroy_system_real_execute (EntitasIExecuteSystem* base);
GType shmup_warz_resource_component_get_type (void) G_GNUC_CONST;
gboolean shmup_warz_hasResource (EntitasEntity* e);
ShmupWarzResourceComponent* shmup_warz_getResource (EntitasEntity* e);
static void shmup_warz_destroy_system_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


ShmupWarzDestroySystem* shmup_warz_destroy_system_construct (GType object_type, ShmupWarzGame* game) {
	ShmupWarzDestroySystem * self = NULL;
	ShmupWarzGame* _tmp0_ = NULL;
	ShmupWarzGame* _tmp1_ = NULL;
	g_return_val_if_fail (game != NULL, NULL);
	self = (ShmupWarzDestroySystem*) g_object_new (object_type, NULL);
	_tmp0_ = game;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_game);
	self->priv->_game = _tmp1_;
	return self;
}


ShmupWarzDestroySystem* shmup_warz_destroy_system_new (ShmupWarzGame* game) {
	return shmup_warz_destroy_system_construct (SHMUP_WARZ_TYPE_DESTROY_SYSTEM, game);
}


static void shmup_warz_destroy_system_real_setWorld (EntitasISetWorld* base, EntitasWorld* world) {
	ShmupWarzDestroySystem * self;
	EntitasWorld* _tmp0_ = NULL;
	EntitasWorld* _tmp1_ = NULL;
	self = (ShmupWarzDestroySystem*) base;
	g_return_if_fail (world != NULL);
	_tmp0_ = world;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_world);
	self->priv->_world = _tmp1_;
}


static gpointer _g_ptr_array_ref0 (gpointer self) {
	return self ? g_ptr_array_ref (self) : NULL;
}


static void shmup_warz_destroy_system_real_initialize (EntitasIInitializeSystem* base) {
	ShmupWarzDestroySystem * self;
	EntitasWorld* _tmp0_ = NULL;
	gint* _tmp1_ = NULL;
	gint* _tmp2_ = NULL;
	gint _tmp2__length1 = 0;
	EntitasIMatcher* _tmp3_ = NULL;
	EntitasIMatcher* _tmp4_ = NULL;
	EntitasGroup* _tmp5_ = NULL;
	ShmupWarzGame* _tmp6_ = NULL;
	GPtrArray* _tmp7_ = NULL;
	GPtrArray* _tmp8_ = NULL;
	self = (ShmupWarzDestroySystem*) base;
	_tmp0_ = self->priv->_world;
	_tmp1_ = g_new0 (gint, 1);
	_tmp1_[0] = (gint) SHMUP_WARZ_COMPONENT_Destroy;
	_tmp2_ = _tmp1_;
	_tmp2__length1 = 1;
	_tmp3_ = entitas_matcher_AllOf (_tmp2_, 1);
	_tmp4_ = _tmp3_;
	_tmp5_ = entitas_world_getGroup (_tmp0_, _tmp4_);
	_g_object_unref0 (self->priv->_group);
	self->priv->_group = _tmp5_;
	_g_object_unref0 (_tmp4_);
	_tmp2_ = (g_free (_tmp2_), NULL);
	_tmp6_ = self->priv->_game;
	_tmp7_ = ((BoscoAbstractGame*) _tmp6_)->sprites;
	_tmp8_ = _g_ptr_array_ref0 (_tmp7_);
	_g_ptr_array_unref0 (self->priv->_sprites);
	self->priv->_sprites = _tmp8_;
}


static gint g_ptr_array_get_length (GPtrArray* self) {
	gint result;
	guint _tmp0_ = 0U;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->len;
	result = (gint) _tmp0_;
	return result;
}


static void g_ptr_array_set_length (GPtrArray* self, gint value) {
	gint _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	g_ptr_array_set_size (self, _tmp0_);
}


static void shmup_warz_destroy_system_real_execute (EntitasIExecuteSystem* base) {
	ShmupWarzDestroySystem * self;
	ShmupWarzResourceComponent* res = NULL;
	EntitasGroup* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	EntitasEntity** _tmp2_ = NULL;
	GError * _inner_error_ = NULL;
	self = (ShmupWarzDestroySystem*) base;
	_tmp0_ = self->priv->_group;
	_tmp2_ = entitas_group_getEntities (_tmp0_, &_tmp1_);
	{
		EntitasEntity** entity_collection = NULL;
		gint entity_collection_length1 = 0;
		gint _entity_collection_size_ = 0;
		gint entity_it = 0;
		entity_collection = _tmp2_;
		entity_collection_length1 = _tmp1_;
		for (entity_it = 0; entity_it < _tmp1_; entity_it = entity_it + 1) {
			EntitasEntity* _tmp3_ = NULL;
			EntitasEntity* entity = NULL;
			_tmp3_ = _g_object_ref0 (entity_collection[entity_it]);
			entity = _tmp3_;
			{
				EntitasEntity* _tmp4_ = NULL;
				gboolean _tmp5_ = FALSE;
				EntitasWorld* _tmp24_ = NULL;
				EntitasEntity* _tmp25_ = NULL;
				_tmp4_ = entity;
				_tmp5_ = shmup_warz_hasResource (_tmp4_);
				if (_tmp5_) {
					EntitasEntity* _tmp6_ = NULL;
					ShmupWarzResourceComponent* _tmp7_ = NULL;
					_tmp6_ = entity;
					_tmp7_ = shmup_warz_getResource (_tmp6_);
					_g_object_unref0 (res);
					res = _tmp7_;
					{
						gint i = 0;
						i = 0;
						{
							gboolean _tmp8_ = FALSE;
							_tmp8_ = TRUE;
							while (TRUE) {
								GPtrArray* _tmp10_ = NULL;
								gint _tmp11_ = 0;
								gint _tmp12_ = 0;
								BoscoSprite* sprite = NULL;
								ShmupWarzResourceComponent* _tmp13_ = NULL;
								GObject* _tmp14_ = NULL;
								BoscoSprite* _tmp15_ = NULL;
								GPtrArray* _tmp16_ = NULL;
								gint _tmp17_ = 0;
								gconstpointer _tmp18_ = NULL;
								gint _tmp19_ = 0;
								BoscoSprite* _tmp20_ = NULL;
								gint _tmp21_ = 0;
								if (!_tmp8_) {
									gint _tmp9_ = 0;
									_tmp9_ = i;
									i = _tmp9_ + 1;
								}
								_tmp8_ = FALSE;
								_tmp10_ = self->priv->_sprites;
								_tmp11_ = g_ptr_array_get_length (_tmp10_);
								_tmp12_ = _tmp11_;
								if (!(i <= (_tmp12_ - 1))) {
									break;
								}
								_tmp13_ = res;
								_tmp14_ = _tmp13_->sprite;
								_tmp15_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp14_, BOSCO_TYPE_SPRITE, BoscoSprite));
								sprite = _tmp15_;
								_tmp16_ = self->priv->_sprites;
								_tmp17_ = i;
								_tmp18_ = g_ptr_array_index (_tmp16_, (guint) _tmp17_);
								_tmp19_ = ((BoscoSprite*) _tmp18_)->id;
								_tmp20_ = sprite;
								_tmp21_ = _tmp20_->id;
								if (_tmp19_ == _tmp21_) {
									GPtrArray* _tmp22_ = NULL;
									gint _tmp23_ = 0;
									_tmp22_ = self->priv->_sprites;
									_tmp23_ = i;
									g_ptr_array_remove_index (_tmp22_, (guint) _tmp23_);
									_g_object_unref0 (sprite);
									break;
								}
								_g_object_unref0 (sprite);
							}
						}
					}
				}
				_tmp24_ = self->priv->_world;
				_tmp25_ = entity;
				entitas_world_destroyEntity (_tmp24_, _tmp25_, &_inner_error_);
				if (G_UNLIKELY (_inner_error_ != NULL)) {
					_g_object_unref0 (entity);
					entity_collection = (_vala_array_free (entity_collection, entity_collection_length1, (GDestroyNotify) g_object_unref), NULL);
					_g_object_unref0 (res);
					g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
					g_clear_error (&_inner_error_);
					return;
				}
				_g_object_unref0 (entity);
			}
		}
		entity_collection = (_vala_array_free (entity_collection, entity_collection_length1, (GDestroyNotify) g_object_unref), NULL);
	}
	_g_object_unref0 (res);
}


static void shmup_warz_destroy_system_class_init (ShmupWarzDestroySystemClass * klass) {
	shmup_warz_destroy_system_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (ShmupWarzDestroySystemPrivate));
	G_OBJECT_CLASS (klass)->finalize = shmup_warz_destroy_system_finalize;
}


static void shmup_warz_destroy_system_entitas_isystem_interface_init (EntitasISystemIface * iface) {
	shmup_warz_destroy_system_entitas_isystem_parent_iface = g_type_interface_peek_parent (iface);
}


static void shmup_warz_destroy_system_entitas_iset_world_interface_init (EntitasISetWorldIface * iface) {
	shmup_warz_destroy_system_entitas_iset_world_parent_iface = g_type_interface_peek_parent (iface);
	iface->setWorld = (void (*)(EntitasISetWorld*, EntitasWorld*)) shmup_warz_destroy_system_real_setWorld;
}


static void shmup_warz_destroy_system_entitas_iinitialize_system_interface_init (EntitasIInitializeSystemIface * iface) {
	shmup_warz_destroy_system_entitas_iinitialize_system_parent_iface = g_type_interface_peek_parent (iface);
	iface->initialize = (void (*)(EntitasIInitializeSystem*)) shmup_warz_destroy_system_real_initialize;
}


static void shmup_warz_destroy_system_entitas_iexecute_system_interface_init (EntitasIExecuteSystemIface * iface) {
	shmup_warz_destroy_system_entitas_iexecute_system_parent_iface = g_type_interface_peek_parent (iface);
	iface->execute = (void (*)(EntitasIExecuteSystem*)) shmup_warz_destroy_system_real_execute;
}


static void shmup_warz_destroy_system_instance_init (ShmupWarzDestroySystem * self) {
	self->priv = SHMUP_WARZ_DESTROY_SYSTEM_GET_PRIVATE (self);
}


static void shmup_warz_destroy_system_finalize (GObject* obj) {
	ShmupWarzDestroySystem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SHMUP_WARZ_TYPE_DESTROY_SYSTEM, ShmupWarzDestroySystem);
	_g_object_unref0 (self->priv->_world);
	_g_object_unref0 (self->priv->_group);
	_g_object_unref0 (self->priv->_game);
	_g_ptr_array_unref0 (self->priv->_sprites);
	G_OBJECT_CLASS (shmup_warz_destroy_system_parent_class)->finalize (obj);
}


GType shmup_warz_destroy_system_get_type (void) {
	static volatile gsize shmup_warz_destroy_system_type_id__volatile = 0;
	if (g_once_init_enter (&shmup_warz_destroy_system_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ShmupWarzDestroySystemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) shmup_warz_destroy_system_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ShmupWarzDestroySystem), 0, (GInstanceInitFunc) shmup_warz_destroy_system_instance_init, NULL };
		static const GInterfaceInfo entitas_isystem_info = { (GInterfaceInitFunc) shmup_warz_destroy_system_entitas_isystem_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo entitas_iset_world_info = { (GInterfaceInitFunc) shmup_warz_destroy_system_entitas_iset_world_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo entitas_iinitialize_system_info = { (GInterfaceInitFunc) shmup_warz_destroy_system_entitas_iinitialize_system_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo entitas_iexecute_system_info = { (GInterfaceInitFunc) shmup_warz_destroy_system_entitas_iexecute_system_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType shmup_warz_destroy_system_type_id;
		shmup_warz_destroy_system_type_id = g_type_register_static (G_TYPE_OBJECT, "ShmupWarzDestroySystem", &g_define_type_info, 0);
		g_type_add_interface_static (shmup_warz_destroy_system_type_id, ENTITAS_TYPE_ISYSTEM, &entitas_isystem_info);
		g_type_add_interface_static (shmup_warz_destroy_system_type_id, ENTITAS_TYPE_ISET_WORLD, &entitas_iset_world_info);
		g_type_add_interface_static (shmup_warz_destroy_system_type_id, ENTITAS_TYPE_IINITIALIZE_SYSTEM, &entitas_iinitialize_system_info);
		g_type_add_interface_static (shmup_warz_destroy_system_type_id, ENTITAS_TYPE_IEXECUTE_SYSTEM, &entitas_iexecute_system_info);
		g_once_init_leave (&shmup_warz_destroy_system_type_id__volatile, shmup_warz_destroy_system_type_id);
	}
	return shmup_warz_destroy_system_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



