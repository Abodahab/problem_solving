#include <iostream>

using namespace std;
#include <string>



int main() {

     int x1,x2,x3,x4,sum=0;
     string arr;

     cin >> x1 >> x2 >> x3 >> x4;


    cin >> arr;

     for(int i=0;i<arr.size();++i)
   {
   		if(arr[i]=='1')
            sum=sum+x1;
        else if(arr[i]=='2')
            sum=sum+x2;
            else if(arr[i]=='3')
            sum=sum+x3;
            else
            sum=sum+x4;
   }
      cout<<sum;









    return 0;
}
