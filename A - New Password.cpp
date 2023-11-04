

#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <array>
#include <vector>

using namespace std;


int main()
{
    int n,k;
    cin >> n >> k;
    vector <char> myVector;
    vector <char> password;


    char input=97;
    
    for (int i=0; i < k; i++)
    {
        
         myVector.push_back(input);
         input++;

    }
    for (int i = 0; i < n; i++) {
       password.push_back(myVector[i%k]);
    }
   
   
    for (int i = 0; i < password.size(); i++) {
        cout << password[i];
    }
    



    return 0;
}
