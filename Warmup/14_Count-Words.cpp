//? write a program to count all the words in a given string.

#include <bits/stdc++.h>
using namespace std;
int countWords(string str)
{
    int count = 1;
    for (int i = 0; i < str.length(); i++)
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            count++;
    return count;
}

int main()
{
    string str;
    cout << "Enter an string: ";
    getline(cin, str);
    cout << "Number of words in the given string: " << countWords(str) << endl;
    return 0;
}
