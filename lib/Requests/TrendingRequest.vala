/*
 * Copyright 2022 Nahuel Gomez https://nahuelwexd.com
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

public sealed class Iv.TrendingRequest : Request<Gee.List<TrendingVideo>> {
    private string _base_url;
    private string? _category;
    private string? _region;

    public string? category {
        get { return this._category; }
        set {
            this._category = value;

            if (value == null) {
                this.unset_query_param ("type");
                return;
            }

            this.set_query_param ("type", value);
        }
    }

    public string? region {
        get { return this._region; }
        set {
            this._region = value;

            if (value == null) {
                this.unset_query_param ("region");
                return;
            }

            this.set_query_param ("region", value);
        }
    }

    protected override string host {
        get { return this._base_url; }
    }

    protected override string base_path {
        get { return "/api/v1/trending"; }
    }

    public TrendingRequest (InvidiousApi api_client, string base_url) {
        base (api_client);
        this._base_url = base_url;
    }

    protected override Gee.List<TrendingVideo> parse_response (GJson.Node json) {
        var result = GJson.deserialize_array<TrendingVideo> (json.as_array ());
        return result.read_only_view;
    }
}
