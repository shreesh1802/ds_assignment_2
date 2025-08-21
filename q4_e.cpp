#include <iostream>
using namespace std;

int charUppertoLower(char ch)
{
    if(isupper(ch))
    {
        return char(tolower(ch));
    }
    else
    {
        return ch;
    }
}