#include <iostream>
#include <string>
#include <string.h>
void swapp(char& x, char& y)
{
    char temp = x;
    x = y;
    y = temp;
}


using namespace std;

int main()
{
    string str;
    cin >> str;
    char str2[100];
    int counter=0,n=0;
    for (int i = 0; i < str.size(); ++i)
    {
        
        if (str[i] != '+')
        {
            str2[n] = str[i];
            counter++;
            n++;
        }
        
    }
    for (int i = 1; i < counter; ++i)
    {
        for (int j = 0; j < counter - 1; ++j)
        {
            if (str2[j] > str2[i])
                swapp(str2[j], str2[i]);
        }

    }
    for (int i = 0; i < counter; ++i)
    {
        cout << str2[i];
        if (i < counter-1)
            cout << "+";
        
    }
    






    return 0;
}
