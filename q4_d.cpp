#include <iostream>
using namespace std;

int SortStringAlphabetically()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    sort(str.begin(), str.end());

    cout << "Sorted string: " << str << endl;
    return 0;
}
