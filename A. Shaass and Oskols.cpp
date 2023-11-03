#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,KildedB;
    cin>>n;
    int birdNo[n];
     for(int i=0;i<n;++i)
     {
         cin>>birdNo[i];
     }
     cin>>KildedB;
      int arr1[KildedB];
      int arr2[KildedB];
           for(int i=0;i<KildedB;++i)
           {
            cin>>arr1[i];
            cin>>arr2[i];

           }


        for(int i=0;i<KildedB;++i)
        {
          birdNo[arr1[i]-1]=birdNo[arr1[i]-1]+(arr2[i]-1);
          birdNo[arr1[i]+1]=birdNo[arr1[i]+1]+(arr1[i]-(arr2[i]));
          birdNo[arr1[i]]=0;
        }


     for(int i=0;i<n;++i)
     {
         cout<<birdNo[i];
     }




    return 0;
}


/*int fun (int arr[],int siz,int x)
{
    for(int i=0;i<siz;++i)
    {
        arr[x]==
    }

}*/
