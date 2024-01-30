#include <bits/stdc++.h>

#define MAX 100000

using namespace std;

int n, m;
int p[MAX];
vector<tuple<int, int, int>> edg;

void Initialize(int vertices)
{
    int i;
    for (i = 0; i < vertices; i++)
    {
        p[i] = i;
    }
}

int Find(int i)
{
    return p[i] == i ? i : p[i] = Find(p[i]);
}

void Union(int x, int y)
{
    int xp = Find(x);
    int yp = Find(y);

    p[xp] = yp;
}

pair<int, vector<tuple<int, int, int>>> kruskal()
{
    Initialize(n);
    sort(edg.begin(), edg.end());

    int cost = 0;
    vector<tuple<int, int, int>> mst;
    for (auto const &e : edg)
    {
        int w = get<0>(e), x = get<1>(e), y = get<2>(e);
        if (Find(x) != Find(y))
        {
            mst.push_back({w, x, y});
            cost += w;
            Union(x, y);
        }
    }
    return {cost, mst};
}

int main()
{
    cin >> n >> m;
    for (int cont = 0; cont < m; ++cont)
    {
        int a, b, c;
        cin >> a >> b >> c; // indexado apartir do 0
        edg.push_back({c, a, b});
    }

    pair<int, vector<tuple<int, int, int>>> resposta = kruskal();

    cout << endl
         << resposta.first << endl;
    for (int i = 0; i < n - 1; ++i)
    {
        cout << get<0>(resposta.second[i]) << " "
             << get<1>(resposta.second[i]) << " "
             << get<0>(resposta.second[i]) << endl;
    }

    return 0;
}
