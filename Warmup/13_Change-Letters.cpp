//? Write a program to change every letter in a given string with the letter following it
//? in the alphabet
#include <bits/stdc++.h>
using namespace std;

string change_letter(string str);
int main()
{
    cout << "Original string: Python";
    cout << "\nNew string: " << change_letter("Python");
    return 0;
}
string change_letter(string str)
{
    int char_code;
    for (int x = 0; x < str.length(); x++)
    {
        char_code = int(str[x]);
        if (char_code == 122)
            str[x] = char(97);
        else if (char_code == 90)
            str[x] = char(65);
        else if (char_code >= 65 && char_code <= 90 || char_code >= 97 && char_code <= 122)
            str[x] = char(char_code + 1);
    }
    return str;
}