//? Write a program to check whether a given number can be expressed as sum of two prime numbers.
#include <bits/stdc++.h>
using namespace std;

bool checkPrime(unsigned int num);

int main()
{
    unsigned int num;
    bool flag = false, temp;
    cout << "Enter a positive integer: ";
    cin >> num;
    for (int i = 2; i <= num / 2; ++i)
    {
        if (checkPrime(i))
        {
            if (checkPrime(num - i))
            {
                cout << num << " = " << i << " + " << num - i << endl;
                flag = true;
            }
        }
    }
    if (!flag)
        cout << num << " can\'t be expressed as sum of two prime numbers.";
    return 0;
}

bool checkPrime(unsigned int num)
{
    bool isPrime = true;
    if (num == 0 || num == 1)
        return false;
    else
    {
        for (int i = 2; i <= num / 2; ++i)
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
    }
    return isPrime;
}