#include <iostream>
#include <string>
#include <string.h>



using namespace std;

int main()
{     int n;
      cin>>n;
     string arr[n];
          for(int i=0;i<n;++i)
          {
              cin>>arr[i];


          }




            for(int i=0;i<n;++i)
            {
                 if(arr[i].size()<=10)
                    {
                     cout<<arr[i];
                     cout<<"\n";

                    }
                 else
                 {

                     cout<<arr[i][0]<<arr[i].size()-2<<arr[i][arr[i].size()-1];
                      cout<<"\n";

                 }

            }


    return 0;
}
