#include <bits/stdc++.h>

#define MAX 100000

using namespace std;

int n, m;
int d[MAX];
vector<pair<int, int>> g[MAX];

void dijkstra(int x)
{
    for (int i = 0; i < n; i++)
        d[i] = MAX;
    d[x] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({0, x});

    while (pq.size())
    {
        int ndist = pq.top().first, u = pq.top().second;
        pq.pop();
        if (-ndist > d[u])
            continue;

        for (auto const &e : g[u])
        {
            int idx = e.first, w = e.second;
            if (d[idx] > d[u] + w)
            {
                d[idx] = d[u] + w;
                pq.push({-d[idx], idx});
            }
        }
    }
}

int main()
{
    int inicial;
    cin >> n >> m;
    for (int cont = 0; cont < m; ++cont)
    {
        int a, b, c;
        cin >> a >> b >> c; // indexado apartir do 0
        g[a].push_back({b, c});
        g[b].push_back({a, c});
    }
    cin >> inicial;

    dijkstra(inicial);

    for (int cont = 0; cont < n; ++cont)
    {
        cout << cont << " : " << d[cont] << endl;
    }

    return 0;
}
