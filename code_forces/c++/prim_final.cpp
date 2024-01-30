#include <bits/stdc++.h>

#define MAX 100000

using namespace std;

int n, m;
int d[MAX];
bool visitado[MAX];

vector<pair<int, int>> g[MAX];

int prim()
{
    for (int i = 0; i < n; i++)
        d[i] = MAX;
    d[0] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({d[0], 0});
    while (true)
    {
        int at = -1;
        while (!q.empty())
        {
            int va = q.top().second;
            q.pop();
            if (!visitado[va])
            {
                at = va;
                break;
            }
        }
        if (at == -1)
            break;
        visitado[at] = true;
        for (int i = 0; i < g[at].size(); i++)
        {
            int dt = g[at][i].first;
            int va = g[at][i].second;
            if (d[va] > dt && !visitado[va])
            {
                d[va] = dt;
                q.push({d[va], va});
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += d[i];
    return ans;
}

int main()
{
    cin >> n >> m;
    for (int cont = 0; cont < m; ++cont)
    {
        int a, b, c;
        cin >> a >> b >> c; // indexado apartir do 0
        g[a].push_back({c, b});
        g[b].push_back({c, a});
    }
    int resposta = prim();
    cout << resposta << endl;
    return 0;
}
