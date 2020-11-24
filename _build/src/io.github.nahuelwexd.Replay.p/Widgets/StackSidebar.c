/* StackSidebar.c generated by valac 0.50.1.78-abc6b, the Vala compiler
 * generated from StackSidebar.vala, do not modify */

/* Replay - An open source YouTube client for GNOME
 * Copyright 2019 - 2020 Nahuel Gomez Castro <nahuel.gomezcastro@outlook.com.ar>
 *
 * Replay is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * Replay is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * Replay.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <glib.h>
#include <gio/gio.h>

#define REPLAY_TYPE_STACK_SIDEBAR (replay_stack_sidebar_get_type ())
#define REPLAY_STACK_SIDEBAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), REPLAY_TYPE_STACK_SIDEBAR, ReplayStackSidebar))
#define REPLAY_STACK_SIDEBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), REPLAY_TYPE_STACK_SIDEBAR, ReplayStackSidebarClass))
#define REPLAY_IS_STACK_SIDEBAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), REPLAY_TYPE_STACK_SIDEBAR))
#define REPLAY_IS_STACK_SIDEBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), REPLAY_TYPE_STACK_SIDEBAR))
#define REPLAY_STACK_SIDEBAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), REPLAY_TYPE_STACK_SIDEBAR, ReplayStackSidebarClass))

typedef struct _ReplayStackSidebar ReplayStackSidebar;
typedef struct _ReplayStackSidebarClass ReplayStackSidebarClass;
typedef struct _ReplayStackSidebarPrivate ReplayStackSidebarPrivate;
enum  {
	REPLAY_STACK_SIDEBAR_0_PROPERTY,
	REPLAY_STACK_SIDEBAR_STACK_PROPERTY,
	REPLAY_STACK_SIDEBAR_NUM_PROPERTIES
};
static GParamSpec* replay_stack_sidebar_properties[REPLAY_STACK_SIDEBAR_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _gtk_bitset_unref0(var) ((var == NULL) ? NULL : (var = (gtk_bitset_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _ReplayStackSidebar {
	GtkWidget parent_instance;
	ReplayStackSidebarPrivate * priv;
};

struct _ReplayStackSidebarClass {
	GtkWidgetClass parent_class;
};

struct _ReplayStackSidebarPrivate {
	GtkListBox* _list_box;
	GtkStack* _stack;
};

static gint ReplayStackSidebar_private_offset;
static gpointer replay_stack_sidebar_parent_class = NULL;

GType replay_stack_sidebar_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ReplayStackSidebar, g_object_unref)
static GtkWidget* replay_stack_sidebar_get_row_from_page (ReplayStackSidebar* self,
                                                   GObject* item);
static void replay_stack_sidebar_on_list_box_row_activated (ReplayStackSidebar* self,
                                                     GtkListBoxRow* row);
static void _replay_stack_sidebar_on_list_box_row_activated_gtk_list_box_row_activated (GtkListBox* _sender,
                                                                                 GtkListBoxRow* row,
                                                                                 gpointer self);
static void replay_stack_sidebar_on_stack_pages_selection_changed (ReplayStackSidebar* self,
                                                            guint position,
                                                            guint n_items);
static void replay_stack_sidebar_real_dispose (GObject* base);
ReplayStackSidebar* replay_stack_sidebar_new (void);
ReplayStackSidebar* replay_stack_sidebar_construct (GType object_type);
GtkStack* replay_stack_sidebar_get_stack (ReplayStackSidebar* self);
void replay_stack_sidebar_set_stack (ReplayStackSidebar* self,
                                     GtkStack* value);
static void _replay_stack_sidebar_on_stack_pages_selection_changed_gtk_selection_model_selection_changed (GtkSelectionModel* _sender,
                                                                                                   guint position,
                                                                                                   guint n_items,
                                                                                                   gpointer self);
static GtkWidget* _replay_stack_sidebar_get_row_from_page_gtk_list_box_create_widget_func (GObject* item,
                                                                                    gpointer self);
static void replay_stack_sidebar_finalize (GObject * obj);
static GType replay_stack_sidebar_get_type_once (void);
static void _vala_replay_stack_sidebar_get_property (GObject * object,
                                              guint property_id,
                                              GValue * value,
                                              GParamSpec * pspec);
static void _vala_replay_stack_sidebar_set_property (GObject * object,
                                              guint property_id,
                                              const GValue * value,
                                              GParamSpec * pspec);

static inline gpointer
replay_stack_sidebar_get_instance_private (ReplayStackSidebar* self)
{
	return G_STRUCT_MEMBER_P (self, ReplayStackSidebar_private_offset);
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 54 "../src/Widgets/StackSidebar.vala"
	return self ? g_object_ref (self) : NULL;
#line 113 "StackSidebar.c"
}

static GtkWidget*
replay_stack_sidebar_get_row_from_page (ReplayStackSidebar* self,
                                        GObject* item)
{
	GtkStackPage* stack_page = NULL;
	GtkStackPage* _tmp0_;
	GtkImage* icon = NULL;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	GtkImage* _tmp3_;
	GtkLabel* label = NULL;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	GtkLabel* _tmp6_;
	GtkBox* hbox = NULL;
	GtkBox* _tmp7_;
	GtkWidget* result = NULL;
#line 51 "../src/Widgets/StackSidebar.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 51 "../src/Widgets/StackSidebar.vala"
	g_return_val_if_fail (item != NULL, NULL);
#line 51 "../src/Widgets/StackSidebar.vala"
	_vala_return_val_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (item, gtk_stack_page_get_type ()), "item is Gtk.StackPage", NULL);
#line 54 "../src/Widgets/StackSidebar.vala"
	_tmp0_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (item, gtk_stack_page_get_type (), GtkStackPage));
#line 54 "../src/Widgets/StackSidebar.vala"
	stack_page = _tmp0_;
#line 56 "../src/Widgets/StackSidebar.vala"
	_tmp1_ = gtk_stack_page_get_icon_name (stack_page);
#line 56 "../src/Widgets/StackSidebar.vala"
	_tmp2_ = _tmp1_;
#line 56 "../src/Widgets/StackSidebar.vala"
	_tmp3_ = (GtkImage*) gtk_image_new_from_icon_name (_tmp2_);
#line 56 "../src/Widgets/StackSidebar.vala"
	g_object_ref_sink (_tmp3_);
#line 56 "../src/Widgets/StackSidebar.vala"
	icon = _tmp3_;
#line 57 "../src/Widgets/StackSidebar.vala"
	_tmp4_ = gtk_stack_page_get_title (stack_page);
#line 57 "../src/Widgets/StackSidebar.vala"
	_tmp5_ = _tmp4_;
#line 57 "../src/Widgets/StackSidebar.vala"
	_tmp6_ = (GtkLabel*) gtk_label_new (_tmp5_);
#line 57 "../src/Widgets/StackSidebar.vala"
	g_object_ref_sink (_tmp6_);
#line 57 "../src/Widgets/StackSidebar.vala"
	label = _tmp6_;
#line 59 "../src/Widgets/StackSidebar.vala"
	_tmp7_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 12);
#line 59 "../src/Widgets/StackSidebar.vala"
	g_object_ref_sink (_tmp7_);
#line 59 "../src/Widgets/StackSidebar.vala"
	hbox = _tmp7_;
#line 60 "../src/Widgets/StackSidebar.vala"
	gtk_box_append (hbox, (GtkWidget*) icon);
#line 61 "../src/Widgets/StackSidebar.vala"
	gtk_box_append (hbox, (GtkWidget*) label);
#line 63 "../src/Widgets/StackSidebar.vala"
	result = (GtkWidget*) hbox;
#line 63 "../src/Widgets/StackSidebar.vala"
	_g_object_unref0 (label);
#line 63 "../src/Widgets/StackSidebar.vala"
	_g_object_unref0 (icon);
#line 63 "../src/Widgets/StackSidebar.vala"
	_g_object_unref0 (stack_page);
#line 63 "../src/Widgets/StackSidebar.vala"
	return result;
#line 183 "StackSidebar.c"
}

static void
replay_stack_sidebar_on_list_box_row_activated (ReplayStackSidebar* self,
                                                GtkListBoxRow* row)
{
	GtkStack* _tmp0_;
	GtkSelectionModel* _tmp1_;
	GtkSelectionModel* _tmp2_;
	GtkSelectionModel* _tmp3_;
	GtkListBox* _tmp4_;
#line 67 "../src/Widgets/StackSidebar.vala"
	g_return_if_fail (self != NULL);
#line 67 "../src/Widgets/StackSidebar.vala"
	g_return_if_fail (row != NULL);
#line 71 "../src/Widgets/StackSidebar.vala"
	_tmp0_ = self->priv->_stack;
#line 71 "../src/Widgets/StackSidebar.vala"
	_tmp1_ = gtk_stack_get_pages (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, gtk_stack_get_type (), GtkStack));
#line 71 "../src/Widgets/StackSidebar.vala"
	_tmp2_ = _tmp1_;
#line 71 "../src/Widgets/StackSidebar.vala"
	_tmp3_ = _tmp2_;
#line 71 "../src/Widgets/StackSidebar.vala"
	gtk_selection_model_select_item (_tmp3_, (guint) gtk_list_box_row_get_index (row), TRUE);
#line 71 "../src/Widgets/StackSidebar.vala"
	_g_object_unref0 (_tmp3_);
#line 72 "../src/Widgets/StackSidebar.vala"
	_tmp4_ = self->priv->_list_box;
#line 72 "../src/Widgets/StackSidebar.vala"
	gtk_list_box_select_row (_tmp4_, row);
#line 215 "StackSidebar.c"
}

static void
_replay_stack_sidebar_on_list_box_row_activated_gtk_list_box_row_activated (GtkListBox* _sender,
                                                                            GtkListBoxRow* row,
                                                                            gpointer self)
{
#line 19 "../src/Widgets/StackSidebar.vala"
	replay_stack_sidebar_on_list_box_row_activated ((ReplayStackSidebar*) self, row);
#line 225 "StackSidebar.c"
}

static void
replay_stack_sidebar_on_stack_pages_selection_changed (ReplayStackSidebar* self,
                                                       guint position,
                                                       guint n_items)
{
	GtkListBoxRow* row_selected = NULL;
	GtkListBox* _tmp0_;
	GtkListBoxRow* _tmp1_;
	GtkListBoxRow* _tmp2_;
	GtkListBox* _tmp3_;
#line 75 "../src/Widgets/StackSidebar.vala"
	g_return_if_fail (self != NULL);
#line 77 "../src/Widgets/StackSidebar.vala"
	_tmp0_ = self->priv->_list_box;
#line 77 "../src/Widgets/StackSidebar.vala"
	_tmp1_ = gtk_list_box_get_row_at_index (_tmp0_, (gint) position);
#line 77 "../src/Widgets/StackSidebar.vala"
	_tmp2_ = _g_object_ref0 (_tmp1_);
#line 77 "../src/Widgets/StackSidebar.vala"
	row_selected = _tmp2_;
#line 78 "../src/Widgets/StackSidebar.vala"
	_tmp3_ = self->priv->_list_box;
#line 78 "../src/Widgets/StackSidebar.vala"
	gtk_list_box_select_row (_tmp3_, row_selected);
#line 75 "../src/Widgets/StackSidebar.vala"
	_g_object_unref0 (row_selected);
#line 254 "StackSidebar.c"
}

static void
replay_stack_sidebar_real_dispose (GObject* base)
{
	ReplayStackSidebar * self;
	GtkListBox* _tmp0_;
#line 82 "../src/Widgets/StackSidebar.vala"
	self = (ReplayStackSidebar*) base;
#line 84 "../src/Widgets/StackSidebar.vala"
	_tmp0_ = self->priv->_list_box;
#line 84 "../src/Widgets/StackSidebar.vala"
	gtk_widget_unparent ((GtkWidget*) _tmp0_);
#line 85 "../src/Widgets/StackSidebar.vala"
	G_OBJECT_CLASS (replay_stack_sidebar_parent_class)->dispose ((GObject*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_widget_get_type (), GtkWidget));
#line 270 "StackSidebar.c"
}

ReplayStackSidebar*
replay_stack_sidebar_construct (GType object_type)
{
	ReplayStackSidebar * self = NULL;
#line 19 "../src/Widgets/StackSidebar.vala"
	self = (ReplayStackSidebar*) g_object_new (object_type, NULL);
#line 19 "../src/Widgets/StackSidebar.vala"
	return self;
#line 281 "StackSidebar.c"
}

ReplayStackSidebar*
replay_stack_sidebar_new (void)
{
#line 19 "../src/Widgets/StackSidebar.vala"
	return replay_stack_sidebar_construct (REPLAY_TYPE_STACK_SIDEBAR);
#line 289 "StackSidebar.c"
}

GtkStack*
replay_stack_sidebar_get_stack (ReplayStackSidebar* self)
{
	GtkStack* result;
	GtkStack* _tmp0_;
#line 28 "../src/Widgets/StackSidebar.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 28 "../src/Widgets/StackSidebar.vala"
	_tmp0_ = self->priv->_stack;
#line 28 "../src/Widgets/StackSidebar.vala"
	result = _tmp0_;
#line 28 "../src/Widgets/StackSidebar.vala"
	return result;
#line 305 "StackSidebar.c"
}

static void
_replay_stack_sidebar_on_stack_pages_selection_changed_gtk_selection_model_selection_changed (GtkSelectionModel* _sender,
                                                                                              guint position,
                                                                                              guint n_items,
                                                                                              gpointer self)
{
#line 34 "../src/Widgets/StackSidebar.vala"
	replay_stack_sidebar_on_stack_pages_selection_changed ((ReplayStackSidebar*) self, position, n_items);
#line 316 "StackSidebar.c"
}

static GtkWidget*
_replay_stack_sidebar_get_row_from_page_gtk_list_box_create_widget_func (GObject* item,
                                                                         gpointer self)
{
	GtkWidget* result;
	result = replay_stack_sidebar_get_row_from_page ((ReplayStackSidebar*) self, item);
#line 40 "../src/Widgets/StackSidebar.vala"
	return result;
#line 327 "StackSidebar.c"
}

void
replay_stack_sidebar_set_stack (ReplayStackSidebar* self,
                                GtkStack* value)
{
	GtkStack* _tmp0_;
	GtkStack* _tmp1_;
	GtkStack* _tmp7_;
	GtkStack* _tmp8_;
#line 29 "../src/Widgets/StackSidebar.vala"
	g_return_if_fail (self != NULL);
#line 31 "../src/Widgets/StackSidebar.vala"
	_tmp0_ = self->priv->_stack;
#line 31 "../src/Widgets/StackSidebar.vala"
	if (_tmp0_ == value) {
#line 31 "../src/Widgets/StackSidebar.vala"
		return;
#line 346 "StackSidebar.c"
	}
#line 33 "../src/Widgets/StackSidebar.vala"
	_tmp1_ = self->priv->_stack;
#line 33 "../src/Widgets/StackSidebar.vala"
	if (_tmp1_ != NULL) {
#line 352 "StackSidebar.c"
		GtkStack* _tmp2_;
		GtkSelectionModel* _tmp3_;
		GtkSelectionModel* _tmp4_;
		GtkSelectionModel* _tmp5_;
		guint _tmp6_;
#line 34 "../src/Widgets/StackSidebar.vala"
		_tmp2_ = self->priv->_stack;
#line 34 "../src/Widgets/StackSidebar.vala"
		_tmp3_ = gtk_stack_get_pages (G_TYPE_CHECK_INSTANCE_CAST (_tmp2_, gtk_stack_get_type (), GtkStack));
#line 34 "../src/Widgets/StackSidebar.vala"
		_tmp4_ = _tmp3_;
#line 34 "../src/Widgets/StackSidebar.vala"
		_tmp5_ = _tmp4_;
#line 34 "../src/Widgets/StackSidebar.vala"
		g_signal_parse_name ("selection-changed", gtk_selection_model_get_type (), &_tmp6_, NULL, FALSE);
#line 34 "../src/Widgets/StackSidebar.vala"
		g_signal_handlers_disconnect_matched (_tmp5_, G_SIGNAL_MATCH_ID | G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA, _tmp6_, 0, NULL, (GCallback) _replay_stack_sidebar_on_stack_pages_selection_changed_gtk_selection_model_selection_changed, self);
#line 34 "../src/Widgets/StackSidebar.vala"
		_g_object_unref0 (_tmp5_);
#line 372 "StackSidebar.c"
	}
#line 36 "../src/Widgets/StackSidebar.vala"
	_tmp7_ = _g_object_ref0 (value);
#line 36 "../src/Widgets/StackSidebar.vala"
	_g_object_unref0 (self->priv->_stack);
#line 36 "../src/Widgets/StackSidebar.vala"
	self->priv->_stack = _tmp7_;
#line 38 "../src/Widgets/StackSidebar.vala"
	_tmp8_ = self->priv->_stack;
#line 38 "../src/Widgets/StackSidebar.vala"
	if (_tmp8_ != NULL) {
#line 384 "StackSidebar.c"
		GtkListBox* _tmp9_;
		GtkStack* _tmp10_;
		GtkSelectionModel* _tmp11_;
		GtkSelectionModel* _tmp12_;
		GtkSelectionModel* _tmp13_;
		GtkStack* _tmp14_;
		GtkSelectionModel* _tmp15_;
		GtkSelectionModel* _tmp16_;
		GtkSelectionModel* _tmp17_;
		GtkBitset* selection = NULL;
		GtkStack* _tmp18_;
		GtkSelectionModel* _tmp19_;
		GtkSelectionModel* _tmp20_;
		GtkSelectionModel* _tmp21_;
		GtkBitset* _tmp22_;
		GtkBitset* _tmp23_;
		GtkBitset* _tmp24_;
#line 40 "../src/Widgets/StackSidebar.vala"
		_tmp9_ = self->priv->_list_box;
#line 40 "../src/Widgets/StackSidebar.vala"
		_tmp10_ = self->priv->_stack;
#line 40 "../src/Widgets/StackSidebar.vala"
		_tmp11_ = gtk_stack_get_pages (G_TYPE_CHECK_INSTANCE_CAST (_tmp10_, gtk_stack_get_type (), GtkStack));
#line 40 "../src/Widgets/StackSidebar.vala"
		_tmp12_ = _tmp11_;
#line 40 "../src/Widgets/StackSidebar.vala"
		_tmp13_ = _tmp12_;
#line 40 "../src/Widgets/StackSidebar.vala"
		gtk_list_box_bind_model (_tmp9_, (GListModel*) _tmp13_, _replay_stack_sidebar_get_row_from_page_gtk_list_box_create_widget_func, g_object_ref (self), g_object_unref);
#line 40 "../src/Widgets/StackSidebar.vala"
		_g_object_unref0 (_tmp13_);
#line 41 "../src/Widgets/StackSidebar.vala"
		_tmp14_ = self->priv->_stack;
#line 41 "../src/Widgets/StackSidebar.vala"
		_tmp15_ = gtk_stack_get_pages (G_TYPE_CHECK_INSTANCE_CAST (_tmp14_, gtk_stack_get_type (), GtkStack));
#line 41 "../src/Widgets/StackSidebar.vala"
		_tmp16_ = _tmp15_;
#line 41 "../src/Widgets/StackSidebar.vala"
		_tmp17_ = _tmp16_;
#line 41 "../src/Widgets/StackSidebar.vala"
		g_signal_connect_object (_tmp17_, "selection-changed", (GCallback) _replay_stack_sidebar_on_stack_pages_selection_changed_gtk_selection_model_selection_changed, self, 0);
#line 41 "../src/Widgets/StackSidebar.vala"
		_g_object_unref0 (_tmp17_);
#line 44 "../src/Widgets/StackSidebar.vala"
		_tmp18_ = self->priv->_stack;
#line 44 "../src/Widgets/StackSidebar.vala"
		_tmp19_ = gtk_stack_get_pages (G_TYPE_CHECK_INSTANCE_CAST (_tmp18_, gtk_stack_get_type (), GtkStack));
#line 44 "../src/Widgets/StackSidebar.vala"
		_tmp20_ = _tmp19_;
#line 44 "../src/Widgets/StackSidebar.vala"
		_tmp21_ = _tmp20_;
#line 44 "../src/Widgets/StackSidebar.vala"
		_tmp22_ = gtk_selection_model_get_selection (_tmp21_);
#line 44 "../src/Widgets/StackSidebar.vala"
		_tmp23_ = _tmp22_;
#line 44 "../src/Widgets/StackSidebar.vala"
		_g_object_unref0 (_tmp21_);
#line 44 "../src/Widgets/StackSidebar.vala"
		selection = _tmp23_;
#line 45 "../src/Widgets/StackSidebar.vala"
		_tmp24_ = selection;
#line 45 "../src/Widgets/StackSidebar.vala"
		replay_stack_sidebar_on_stack_pages_selection_changed (self, gtk_bitset_get_nth (_tmp24_, (guint) 0), (guint) 0);
#line 38 "../src/Widgets/StackSidebar.vala"
		_gtk_bitset_unref0 (selection);
#line 450 "StackSidebar.c"
	}
#line 29 "../src/Widgets/StackSidebar.vala"
	g_object_notify_by_pspec ((GObject *) self, replay_stack_sidebar_properties[REPLAY_STACK_SIDEBAR_STACK_PROPERTY]);
#line 454 "StackSidebar.c"
}

static void
replay_stack_sidebar_class_init (ReplayStackSidebarClass * klass,
                                 gpointer klass_data)
{
#line 19 "../src/Widgets/StackSidebar.vala"
	replay_stack_sidebar_parent_class = g_type_class_peek_parent (klass);
#line 19 "../src/Widgets/StackSidebar.vala"
	g_type_class_adjust_private_offset (klass, &ReplayStackSidebar_private_offset);
#line 19 "../src/Widgets/StackSidebar.vala"
	((GObjectClass *) klass)->dispose = (void (*) (GObject*)) replay_stack_sidebar_real_dispose;
#line 19 "../src/Widgets/StackSidebar.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_replay_stack_sidebar_get_property;
#line 19 "../src/Widgets/StackSidebar.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_replay_stack_sidebar_set_property;
#line 19 "../src/Widgets/StackSidebar.vala"
	G_OBJECT_CLASS (klass)->finalize = replay_stack_sidebar_finalize;
#line 19 "../src/Widgets/StackSidebar.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), REPLAY_STACK_SIDEBAR_STACK_PROPERTY, replay_stack_sidebar_properties[REPLAY_STACK_SIDEBAR_STACK_PROPERTY] = g_param_spec_object ("stack", "stack", "stack", gtk_stack_get_type (), G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 19 "../src/Widgets/StackSidebar.vala"
	gtk_widget_class_set_template_from_resource (GTK_WIDGET_CLASS (klass), "/io/github/nahuelwexd/Replay/StackSidebar.ui");
#line 19 "../src/Widgets/StackSidebar.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "_list_box", FALSE, ReplayStackSidebar_private_offset + G_STRUCT_OFFSET (ReplayStackSidebarPrivate, _list_box));
#line 19 "../src/Widgets/StackSidebar.vala"
	gtk_widget_class_bind_template_callback_full (GTK_WIDGET_CLASS (klass), "on_list_box_row_activated", G_CALLBACK(_replay_stack_sidebar_on_list_box_row_activated_gtk_list_box_row_activated));
#line 91 "../src/Widgets/StackSidebar.vala"
	gtk_widget_class_set_css_name (GTK_WIDGET_CLASS (klass), "stacksidebar");
#line 483 "StackSidebar.c"
}

static void
replay_stack_sidebar_instance_init (ReplayStackSidebar * self,
                                    gpointer klass)
{
#line 19 "../src/Widgets/StackSidebar.vala"
	self->priv = replay_stack_sidebar_get_instance_private (self);
#line 19 "../src/Widgets/StackSidebar.vala"
	gtk_widget_init_template (GTK_WIDGET (self));
#line 494 "StackSidebar.c"
}

static void
replay_stack_sidebar_finalize (GObject * obj)
{
	ReplayStackSidebar * self;
#line 19 "../src/Widgets/StackSidebar.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, REPLAY_TYPE_STACK_SIDEBAR, ReplayStackSidebar);
#line 21 "../src/Widgets/StackSidebar.vala"
	_g_object_unref0 (self->priv->_list_box);
#line 23 "../src/Widgets/StackSidebar.vala"
	_g_object_unref0 (self->priv->_stack);
#line 19 "../src/Widgets/StackSidebar.vala"
	G_OBJECT_CLASS (replay_stack_sidebar_parent_class)->finalize (obj);
#line 509 "StackSidebar.c"
}

static GType
replay_stack_sidebar_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ReplayStackSidebarClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) replay_stack_sidebar_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ReplayStackSidebar), 0, (GInstanceInitFunc) replay_stack_sidebar_instance_init, NULL };
	GType replay_stack_sidebar_type_id;
	replay_stack_sidebar_type_id = g_type_register_static (gtk_widget_get_type (), "ReplayStackSidebar", &g_define_type_info, 0);
	ReplayStackSidebar_private_offset = g_type_add_instance_private (replay_stack_sidebar_type_id, sizeof (ReplayStackSidebarPrivate));
	return replay_stack_sidebar_type_id;
}

GType
replay_stack_sidebar_get_type (void)
{
	static volatile gsize replay_stack_sidebar_type_id__volatile = 0;
	if (g_once_init_enter (&replay_stack_sidebar_type_id__volatile)) {
		GType replay_stack_sidebar_type_id;
		replay_stack_sidebar_type_id = replay_stack_sidebar_get_type_once ();
		g_once_init_leave (&replay_stack_sidebar_type_id__volatile, replay_stack_sidebar_type_id);
	}
	return replay_stack_sidebar_type_id__volatile;
}

static void
_vala_replay_stack_sidebar_get_property (GObject * object,
                                         guint property_id,
                                         GValue * value,
                                         GParamSpec * pspec)
{
	ReplayStackSidebar * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, REPLAY_TYPE_STACK_SIDEBAR, ReplayStackSidebar);
#line 19 "../src/Widgets/StackSidebar.vala"
	switch (property_id) {
#line 19 "../src/Widgets/StackSidebar.vala"
		case REPLAY_STACK_SIDEBAR_STACK_PROPERTY:
#line 19 "../src/Widgets/StackSidebar.vala"
		g_value_set_object (value, replay_stack_sidebar_get_stack (self));
#line 19 "../src/Widgets/StackSidebar.vala"
		break;
#line 550 "StackSidebar.c"
		default:
#line 19 "../src/Widgets/StackSidebar.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 19 "../src/Widgets/StackSidebar.vala"
		break;
#line 556 "StackSidebar.c"
	}
}

static void
_vala_replay_stack_sidebar_set_property (GObject * object,
                                         guint property_id,
                                         const GValue * value,
                                         GParamSpec * pspec)
{
	ReplayStackSidebar * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, REPLAY_TYPE_STACK_SIDEBAR, ReplayStackSidebar);
#line 19 "../src/Widgets/StackSidebar.vala"
	switch (property_id) {
#line 19 "../src/Widgets/StackSidebar.vala"
		case REPLAY_STACK_SIDEBAR_STACK_PROPERTY:
#line 19 "../src/Widgets/StackSidebar.vala"
		replay_stack_sidebar_set_stack (self, g_value_get_object (value));
#line 19 "../src/Widgets/StackSidebar.vala"
		break;
#line 576 "StackSidebar.c"
		default:
#line 19 "../src/Widgets/StackSidebar.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 19 "../src/Widgets/StackSidebar.vala"
		break;
#line 582 "StackSidebar.c"
	}
}

