#include <iostream>
#include <string>
#include <string.h>
#include <strings.h>




#include<bits/stdc++.h>
#include <cstring>

void Count(std::string str)
{
    int upper = 0, lower = 0, special = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;

    }
    if (upper>lower)
    {
        for (char &c : str)
        {
            c = std::toupper(c);
        }
        std::cout<<""<<str<< std::endl;
    }
    else
        {
        for (char &c : str)
        {
            c = std::tolower(c);
        }
        std::cout<<""<<str<<std::endl;
    }

}







using namespace std;

int main() {

      string str;
         getline(cin, str);
         Count(str);



    return 0;
}

