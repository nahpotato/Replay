/* ObjectFactory.c generated by valac 0.50.1.76-412f3, the Vala compiler
 * generated from ObjectFactory.vala, do not modify */

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
#include <vadi.h>
#include <glib.h>
#include <handy.h>

#define REPLAY_TYPE_APPLICATION (replay_application_get_type ())
#define REPLAY_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), REPLAY_TYPE_APPLICATION, ReplayApplication))
#define REPLAY_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), REPLAY_TYPE_APPLICATION, ReplayApplicationClass))
#define REPLAY_IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), REPLAY_TYPE_APPLICATION))
#define REPLAY_IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), REPLAY_TYPE_APPLICATION))
#define REPLAY_APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), REPLAY_TYPE_APPLICATION, ReplayApplicationClass))

typedef struct _ReplayApplication ReplayApplication;
typedef struct _ReplayApplicationClass ReplayApplicationClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block1Data Block1Data;

#define REPLAY_TYPE_APPLICATION_WINDOW (replay_application_window_get_type ())
#define REPLAY_APPLICATION_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), REPLAY_TYPE_APPLICATION_WINDOW, ReplayApplicationWindow))
#define REPLAY_APPLICATION_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), REPLAY_TYPE_APPLICATION_WINDOW, ReplayApplicationWindowClass))
#define REPLAY_IS_APPLICATION_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), REPLAY_TYPE_APPLICATION_WINDOW))
#define REPLAY_IS_APPLICATION_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), REPLAY_TYPE_APPLICATION_WINDOW))
#define REPLAY_APPLICATION_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), REPLAY_TYPE_APPLICATION_WINDOW, ReplayApplicationWindowClass))

typedef struct _ReplayApplicationWindow ReplayApplicationWindow;
typedef struct _ReplayApplicationWindowClass ReplayApplicationWindowClass;

struct _Block1Data {
	int _ref_count_;
	ReplayApplication* app;
};

GType replay_application_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ReplayApplication, g_object_unref)
VdiObjectFactory* replay_helpers_get_factory (ReplayApplication* app);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static GObject* __lambda7_ (Block1Data* _data1_,
                     VdiObjectFactory* factory);
static GObject* ___lambda7__vdi_recipe_func (VdiObjectFactory* object_factory,
                                      gpointer self);
GType replay_application_window_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ReplayApplicationWindow, g_object_unref)

static gpointer
_g_object_ref0 (gpointer self)
{
#line 20 "../src/Helpers/ObjectFactory.vala"
	return self ? g_object_ref (self) : NULL;
#line 72 "ObjectFactory.c"
}

static Block1Data*
block1_data_ref (Block1Data* _data1_)
{
#line 20 "../src/Helpers/ObjectFactory.vala"
	g_atomic_int_inc (&_data1_->_ref_count_);
#line 20 "../src/Helpers/ObjectFactory.vala"
	return _data1_;
#line 82 "ObjectFactory.c"
}

static void
block1_data_unref (void * _userdata_)
{
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
#line 20 "../src/Helpers/ObjectFactory.vala"
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
#line 20 "../src/Helpers/ObjectFactory.vala"
		_g_object_unref0 (_data1_->app);
#line 20 "../src/Helpers/ObjectFactory.vala"
		g_slice_free (Block1Data, _data1_);
#line 96 "ObjectFactory.c"
	}
}

static GObject*
__lambda7_ (Block1Data* _data1_,
            VdiObjectFactory* factory)
{
	GObject* _tmp0_;
	GObject* result = NULL;
#line 24 "../src/Helpers/ObjectFactory.vala"
	g_return_val_if_fail (factory != NULL, NULL);
#line 25 "../src/Helpers/ObjectFactory.vala"
	_tmp0_ = _g_object_ref0 ((GObject*) _data1_->app);
#line 25 "../src/Helpers/ObjectFactory.vala"
	result = _tmp0_;
#line 25 "../src/Helpers/ObjectFactory.vala"
	return result;
#line 114 "ObjectFactory.c"
}

static GObject*
___lambda7__vdi_recipe_func (VdiObjectFactory* object_factory,
                             gpointer self)
{
	GObject* result;
	result = __lambda7_ (self, object_factory);
#line 24 "../src/Helpers/ObjectFactory.vala"
	return result;
#line 125 "ObjectFactory.c"
}

VdiObjectFactory*
replay_helpers_get_factory (ReplayApplication* app)
{
	Block1Data* _data1_;
	ReplayApplication* _tmp0_;
	VdiObjectFactory* factory = NULL;
	VdiObjectFactory* _tmp1_;
	VdiObjectFactory* result = NULL;
#line 20 "../src/Helpers/ObjectFactory.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 20 "../src/Helpers/ObjectFactory.vala"
	_data1_ = g_slice_new0 (Block1Data);
#line 20 "../src/Helpers/ObjectFactory.vala"
	_data1_->_ref_count_ = 1;
#line 20 "../src/Helpers/ObjectFactory.vala"
	_tmp0_ = _g_object_ref0 (app);
#line 20 "../src/Helpers/ObjectFactory.vala"
	_g_object_unref0 (_data1_->app);
#line 20 "../src/Helpers/ObjectFactory.vala"
	_data1_->app = _tmp0_;
#line 22 "../src/Helpers/ObjectFactory.vala"
	_tmp1_ = vdi_object_factory_new ();
#line 22 "../src/Helpers/ObjectFactory.vala"
	factory = _tmp1_;
#line 24 "../src/Helpers/ObjectFactory.vala"
	vdi_object_factory_order_with_recipe (factory, gtk_application_get_type (), ___lambda7__vdi_recipe_func, block1_data_ref (_data1_), block1_data_unref);
#line 27 "../src/Helpers/ObjectFactory.vala"
	vdi_object_factory_order (factory, REPLAY_TYPE_APPLICATION_WINDOW);
#line 29 "../src/Helpers/ObjectFactory.vala"
	result = factory;
#line 29 "../src/Helpers/ObjectFactory.vala"
	block1_data_unref (_data1_);
#line 29 "../src/Helpers/ObjectFactory.vala"
	_data1_ = NULL;
#line 29 "../src/Helpers/ObjectFactory.vala"
	return result;
#line 164 "ObjectFactory.c"
}

