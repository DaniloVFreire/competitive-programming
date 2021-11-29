#include <bits/stdc++.h>
using namespace std;

int main()
{
    double entrada1, entrada2;
    cin >> entrada1 >> entrada2;
    cout << fixed;
    cout << setprecision(6);
    cout << "3o angulo=" << ((entrada1 + entrada2) - 180.00000) * -1.0;
    return 0;
}
