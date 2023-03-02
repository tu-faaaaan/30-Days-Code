// Newton School
// Question of the Day - Minimum Replacements
// 12/02/2023


#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S, T;
  cin >> S >> T;

  if (S.find(T) != string::npos)
  {
    cout << 0 << endl;
    return 0;
  }

  int min_diff = S.length();
  for (int i = 0; i <= S.length() - T.length(); i++)
  {
    int diff = 0;
    for (int j = 0; j < T.length(); j++)
    {
      if (S[i + j] != T[j])
        diff++;
    }
    min_diff = min(min_diff, diff);
  }

  cout << min_diff << endl;
  return 0;
}


// Python Code

// S = input()
// T = input()

// if T in S:
//   print(0)
//   exit()
  
// def diff(s, t):
//   count = 0
//   for i in range(0, len(s)):
//     if s[i] != t[i]:
//       count += 1
//   return count
  
// min = len(S)
  
// for i in range(0, len(S) - len(T) + 1):
//   d = diff(S[i:i + len(T)], T)
//   if d < min:
//     min = d

// print(min)