// Newton School
// Question of the Day - Contest Time
// 25/02/2023

#include <bits/stdc++.h>
using namespace std;

// function to obtain the new time
void findTime(string T, int K)
{

    // convert the given time in minutes
    int minutes = ((T[0] - '0') * 10 + T[1] - '0') * 60 + ((T[3] - '0') * 10 + T[4] - '0');

    // Add K to current minutes
    minutes += K;

    // Obtain the new hour
    // and new minutes from minutes
    int hour = (minutes / 60) % 24;

    int min = minutes % 60;

    // Print the hour in appropriate format
    if (hour < 10)
        cout << 0 << hour << ":";
    else
        cout << hour << ":";

    // Print the minute in appropriate format
    if (min < 10)
        cout << 0 << min;
    else
        cout << min;
}

// Driver code
int main()
{
    string T = "21:00";
    int K;
    cin>>K;
    findTime(T, K);
    return 0;
}