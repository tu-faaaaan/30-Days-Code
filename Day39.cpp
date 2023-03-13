// Newton School
// Question of the Day - Card Games
// 24/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    // Sort the cards in ascending order
    int cards[] = {a, b, c, d, e};
    sort(cards, cards + 5);

    // Check if the cards form a full house
    if ((cards[0] == cards[1] && cards[1] == cards[2] && cards[3] == cards[4]) || (cards[0] == cards[1] && cards[2] == cards[3] && cards[3] == cards[4]))
        cout << "Yes" << std::endl;
    else
        cout << "No" << std::endl;
    return 0;
}