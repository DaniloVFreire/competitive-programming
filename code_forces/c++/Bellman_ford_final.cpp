#include <bits/stdc++.h>

#define MAX 100000

using namespace std;

int n, m;
int d[MAX];
vector<pair<int, int>> g[MAX];

bool bellmanFord(int source)
{
    for (int i = 0; i < n; i++)
        d[i] = MAX;
    d[source] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int u = 0; u < n; u++)
            {
                for (auto const &v : g[u])
                {
                    if (d[u] + v.second < d[v.first])
                    d[v.first] = d[u] + v.second;
                }
            }
        }

    for (int u = 0; u < n; u++)
    {
        for (auto const &v : g[u])
        {
            if (d[u] + v.second < d[v.first])
                return true;
        }
    }       
    return false;
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
    }

    cin >> inicial;
    bool existe = bellmanFord(inicial);

    if (existe)
    {
        cout << "Existe ciclo negativo" << endl;
    }
    else
    {
        cout << "Não existe ciclo negativo" << endl;
        for (int cont = 0; cont < n; ++cont)
        {
            cout << cont << " : " << d[cont] << endl;
        }
    }

    return 0;
}