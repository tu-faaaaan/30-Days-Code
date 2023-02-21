// Newton School
// Question of the Day - Alexa and Balls
// 03/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int A, B, C, D, operations = 0;
    cin >> A >> B >> C >> D;
    long int red = 0;
    if (B >= C * D)
        operations = -1;
    else
    {
        while (A > red * D)
        {
            A += B;
            red += C;
            operations++;
        }
    }
    cout << operations << endl;
    return 0;
}