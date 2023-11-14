#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

string find(char s[], string result)
{
    char* ptr;
    ptr = strtok(s, " ");
    while (ptr != NULL)
    {
        if (*(ptr + 0) == 'a')
        {
            result = ptr;
        }
        ptr = strtok(NULL, " ");
    }
    return result;
}

int main() {
    char str[100];
    string result;
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    cout << "Result: " << find(str, result) << endl;
    return 0;
}