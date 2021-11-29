#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> output;
    int quantity, value, input;

    cin >> quantity >> value;

    for (int i = 0; i < quantity; i++)
    {
        cin >> input;
        if ((input - value) % 10 == 0)
        {
            output.push_back(input);
        }
    }
    sort(output.begin(), output.end(), greater<int>());
    int a = output.size();
    for (int i = 4; i >= 0; --i)
    {
        if (i < a)
        {
            cout << output[i] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}