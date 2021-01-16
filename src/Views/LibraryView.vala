/* Replay - Explore and watch YouTube videos
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

[GtkTemplate (ui = "/com/github/nahuelwexd/Replay/LibraryView.ui")]
public class Rpy.LibraryView : Rpy.View
{
	[GtkChild] private unowned Rpy.ViewList _view_list;

	private GLib.ListModel? _views;


	public GLib.ListModel? views
	{
		get { return this._views; }
		construct
		{
			if (value == null)
			{
				return;
			}

			this._views = value;

			this._view_list.model = this._views;
		}
	}


	public LibraryView (GLib.ListModel views)
	{
		GLib.Object (
			views: views
		);
	}
}