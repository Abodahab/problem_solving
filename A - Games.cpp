#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main()
{      int n,counter=0;
        cin>>n;
        int arrH[n];     int arrA[n];


        for(int i=0;i<n;++i)
        {
          cin >> arrH[i] >> arrA[i];

        }

        for(int i=0;i<n;++i)
        {
            for(int j=i;j<n;++j)
            {
                if(arrH[i]==arrA[j])
                    counter++;
            }

        }

        for(int i=0;i<n;++i)
        {
            for(int j=i;j<n;++j)
            {
                if(arrA[i]==arrH[j])
                    counter++;
            }

        }

   cout<<counter;


    return 0;
}
