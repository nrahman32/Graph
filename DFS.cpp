void dfs(ll x, ll d){
    if(!vis[x]){
        vis[x] = 1;
        dis[x] = d;
        cout << x << ' ' << dis[x] << '\n';
        for(auto i:adj[x])
            dfs(i, d + 1);
    }
