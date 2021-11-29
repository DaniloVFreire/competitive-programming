#include <bits/stdc++.h>
using namespace std;

int main()
{
  int childs, steps, position = 0, counter = 1;
  cin >> childs;
  int childs_position[childs];
  childs_position[childs - 1] = 0;

  for (int i = 0; i < childs - 1; i++)
  {
    cin >> steps;
    while (true)
    {
      if (counter >= steps && childs_position[position % childs] != -1)
      {
        childs_position[position % childs] = -1; //child eliminated
        break;
      }
      else if (childs_position[position % childs] != -1)
      {
        counter++;
      }
      position++;
    }
    counter = 1;
    position = (position % childs) + 1;
  }
  for (int i = 0; i < childs; i++)
  {
    if (childs_position[i] != -1)
    {
      cout << i;
    }
  }

  return 0;
}