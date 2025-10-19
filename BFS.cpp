void bfs(ll x) {
  vis[x] = 1;
  dis[x] = 0;
  q.push(x);
  while (!q.empty()) {
    ll s = q.front();
    q.pop();
    cout << s << dis[s] << '\n';
    for (auto i : adj[s]) {
      if (!vis[i]) {
        vis[i] = true;
        dis[i] = dis[s] + 1;
        q.push(i);
      }
    }
  }
}
