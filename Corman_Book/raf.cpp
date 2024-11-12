#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
const int N = 1e5;
vector<pair<int, int>> v[N];

vector<int> dijkstra(int source, int n)
{
    vector<int> dist(n, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[source] = 0;
    pq.push({0, source});

    while (!pq.empty())
    {
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (d > dist[node])
            continue;

        for (auto child : v[node])
        {
            int next = child.first;
            int weight = child.second;

            if (dist[node] + weight < dist[next])
            {
                dist[next] = dist[node] + weight;
                pq.push({dist[next],next});
            }
        }
    }

    return dist;
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
        v[b].push_back({a, w});
    }
    int src;
    cin >> src;

    vector<int> distance = dijkstra(src, n);

    for (int i = 0; i < n; i++)
    {
        cout << "Distance from " << src << " to " << i << " : " << (distance[i] == INF ? -1 : distance[i]) << endl;
    }
}