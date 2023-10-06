#include <iostream>
 
using namespace std;
 
int main()
{    int n;
     int counter=0;   int numpers[3];
 
      cin >>n;
 
 
 
        while(n!=0){
 
            for (int i = 0; i < 3; ++i) {
 
            cin >> numpers[i];
        }
 
           if((numpers[0]+numpers[1]+numpers[2])>=2)
                counter++;
            n--;
        }
 
 
 
 
 
 
      cout<<""<< counter;
    return 0;
}