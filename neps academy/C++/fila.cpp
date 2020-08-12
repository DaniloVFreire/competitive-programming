#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
  vector<bool> presenca(1000001, true);
  int n, cont, m, aux;
  cin >> n;
  vector<int> fila(n);
  for(cont=0; cont < n; cont++)
  {
    cin >> fila[cont];
  }
  cin >> m;
  for(cont=0; cont < m; cont++)
  {
    cin >> aux;
    presenca[aux]=false;
  }
  for(cont=0; cont < n; cont++)
  {
    if(presenca[fila[cont]])
    cout << fila[cont] << " ";
  }
  return 0;
}