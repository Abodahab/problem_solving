#include <iostream>
 
using namespace std;
 
int main()
{    int a,b;
     int counter=0;
 
      cin >>a;
      cin >>b;
 
      while(a<=b){
 
        a=a*3;
        b=b*2;
        counter++;
 
 
      }
      cout<<""<< counter;
 
 
       /* for (int i = 0; i < n; ++i) {
            cin >> numpers[i];
        }*/
 
    return 0;
}