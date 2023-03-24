//? Write a program to find standard deviation of 10 array elements. Access array via pointers.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int SIZE = 10;
    int arr[SIZE], sum = 0;
    double mean = 0.0, stdDev = 0.0;
    cout << "Enter 10 integers" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> *(arr + i);
        sum += *(arr + i);
    }
    mean = static_cast<double>(sum) / SIZE;
    for (int i = 0; i < SIZE; i++)
        stdDev += pow(*(arr + i) - mean, 2);
    stdDev = sqrt(stdDev / SIZE);
    cout << "Standard deviation: " << stdDev;
    return 0;
}