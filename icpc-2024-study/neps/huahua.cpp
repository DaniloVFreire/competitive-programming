#include <bits/stdc++.h>
using namespace std;

int main()
{
  string laugh, vowel_laugh;
  char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

  cin.clear();
  getline(cin, laugh);

  for (const auto i : laugh)
  {
    for (const auto j : vowels)
    {
      if (i == j)
      {
        vowel_laugh += i;
      }
    }
  }

  for (int i = 0, j = vowel_laugh.size() - 1; i <= vowel_laugh.size() / 2 && j >= vowel_laugh.size() / 2; ++i, --j)
  {
    if (vowel_laugh[i] != vowel_laugh[j])
    {
      cout << "N" << "\n";
      return 0;
    }
  }

  cout << "S" << "\n";
  return 0;
}