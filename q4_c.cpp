#include <iostream>
using namespace std;

int deleteAllVowels(char str[]) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u' && str[i] != 'A' &&
            str[i] != 'E' && str[i] != 'I' && str[i] != 'O' &&
            str[i] != 'U') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0'; 
    return j; 
}