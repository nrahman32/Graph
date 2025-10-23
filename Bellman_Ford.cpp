const ll INF = 1e18;
vector<tuple<ll, ll, ll>> edge;
vector<ll> dis;

void bellman_ford(ll x, ll n)
{
    dis.assign(n + 1, INF);
    dis[x] = 0;

    for (ll i = 1; i < n; i++)
    {
        for (auto e : edge)
        {
            ll u, v, w;
            tie(u, v, w) = e;
            dis[v] = min(dis[v], dis[u] + w);
        }
    }
}

// Add Negative Cycle ditection Part in main function
