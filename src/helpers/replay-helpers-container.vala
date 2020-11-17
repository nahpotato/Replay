/* Replay - An open source YouTube client for GNOME
 * Copyright 2019 - 2020 Nahuel Gomez Castro <nahual_gomca@outlook.com.ar>
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

namespace Replay.Helpers
{
    public Vdi.ObjectFactory get_factory (App app)
    {
        var factory = new Vdi.ObjectFactory ();

        var result = factory.order_with_recipe (typeof (Gtk.Application), factory => {
            return app;
        });
        result = factory.order (typeof (AdaptivenessManager));
        result = factory.order (typeof (AppWindow));

        return factory;
    }
}