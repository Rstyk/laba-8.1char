#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int Count(char* s)
{
    int pos = 0;
    char* t;
    int k = 0;
    while (((t = strchr(s + pos, s[pos])) && (pos < strlen(s))))
    {
        if (s[pos] == s[pos + 1] && s[pos] == s[pos + 2] && s[pos] == s[pos + 3])
            k++;
        pos = t - s + 1;
    }
    return k;
}

char* Change(char* s)
{
    char* t = new char[strlen(s) * 2 + 1];
    int pos1 = 0, pos2 = 0;
    *t = 0;
    while (s[pos1] != '\0')
    {
        if (s[pos1] == s[pos1 + 1] && s[pos1] == s[pos1 + 2] && s[pos1] == s[pos1 + 3])
        {
            pos2 = pos1 + 4;
            strncat(t, s + pos1, pos2 - pos1 - 4);
            strcat(t, "**");
            pos1 = pos2;
        }
        else
        {
            strncat(t, s + pos1, 1);
            pos1++;
        }
    }
    strcat(t, s + pos1);
    strcpy(s, t);
    return t;
}

int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    cout << "String contained " << Count(str) << " groups of 4 elements" << endl;
    char* dest = Change(str);

    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    delete[] dest;
    return 0;
}


