//? Write a program to check whether a year entered by the user is leap year or not.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int year;
    cout << "Enter a year:";
    cin >> year;
    if (year % 4 == 0)
        if (year % 100 == 0)
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        else
            cout << year << " is a leap year.";
    else
        cout << year << " is not a leap year.";
    return 0;
}