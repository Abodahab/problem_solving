#include <iostream>
#include <string>
#include <string.h>
#include <strings.h>




#include<bits/stdc++.h>
#include <cstring>


using namespace std;

int main()
{
     std::string str1;
	 std::string str2;

            std::cin >> str1;
             std::cin >> str2;
    for (char &c : str1) {
        c = std::tolower(c);
    }
    for (char &c : str2) {
        c = std::tolower(c);
    }


       int res = str1.compare(str2);

	if (res == 0)
		std::cout << "0" << std::endl;
	else if (res < 0)
		std::cout << "-1" << std::endl;
	else
		std::cout << "1" << std::endl;


    return 0;
}
