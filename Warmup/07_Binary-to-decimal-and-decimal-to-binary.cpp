//? Write a program to convert Binary number to Decimal number to Binary number.
#include <bits/stdc++.h>
using namespace std;

void convertBinaryToDecimal(int);
void convertDecimalToBinary(int);

int main()
{
    int num, choice;
    cout << "1. Find Binary representation " << endl;
    cout << "2. Find Decimal representation " << endl;
    cin >> choice;
    cout << "Enter an integer: ";
    cin >> num;
        switch (choice)
        {
        case 1:
            convertDecimalToBinary(num);
            break;
        case 2:
            convertBinaryToDecimal(num);
            break;
        default:
            cout << "Please choose valid option!";
            break;
        }
    return 0;
}

void convertBinaryToDecimal(int num)
{
    int decimalNum = 0, i = 0, temp;
    while (num != 0)
    {
        temp = num % 10;
        num /= 10;
        decimalNum += temp * pow(2, i);
        ++i;
    }
    cout << decimalNum;
}

void convertDecimalToBinary(int num)
{
    long long binaryNum = 0;
    int temp, i = 1, step = 1;
    while (num != 0)
    {
        temp = num % 2;
        step++;
        num /= 2;
        binaryNum += temp * i;
        i *= 10;
    }
    cout << binaryNum;
}