const ll N = 1e5;
vector<pair<ll, ll>> adj[N];
ll dis[N];
ll vis[N] = {0};

void dijkstra(ll x, ll n)
{
    dis[1] = 0;
    for (ll i = 2; i <= n; i++)
        dis[i] = 1e18;

    priority_queue<pair<ll, ll>> q;
    q.push({0, 1});

    while (!q.empty())
    {
        ll a = q.top().second;
        q.pop();
        if (!vis[a])
        {
            vis[a] = 1;
            for (auto [v, w] : adj[a])
            {
                if (dis[a] + w < dis[v])
                {
                    dis[v] = dis[a] + w;
                    q.push({-dis[v], v});
                }
            }
        }
    }
}
