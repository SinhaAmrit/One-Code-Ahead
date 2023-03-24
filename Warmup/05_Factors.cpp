//? Write a program to find all factors of a number entered by the user.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int num;
    cout << "Enter a positive number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
        if ((num % i) == 0)
            cout << i << " ";
    return 0;
}