//? Write a program to find GCD of two numbers by Recursion.
#include <bits/stdc++.h>
using namespace std;
int GCD(int, int);
int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2);
    return 0;
}
int GCD(int num1, int num2)
{
    if (num2 != 0)
        return gcd(num2, num1 % num2);
    else
        return num1;
}