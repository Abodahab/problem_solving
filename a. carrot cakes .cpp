#include <iostream>
#include <string>

using namespace std;

int main()
{
    float n,t,k,d,PerTime,PerTime2,Without,with;

    cin>>n>>t>>k>>d;
     PerTime=(n/k);
     Without =PerTime*t;

     with=d+t;
     if(with<Without)
        cout<<"yes";
     else
        cout<<"no";



    return 0;
}

