#include <iostream>
#include <string>
#include <string.h>
#include <strings.h>





#include<bits/stdc++.h>
#include <cstring>


 /*g1.front() = 10
 g1.back() = 100
 push_back() – It push the elements into a vector from the back
pop_back()
erase() – It is used to remove elements from a container from the specified position or range.


    v.erase(v.begin());
 g1.begin();
 g1.end()


    if (g1.empty() == false)*/

using namespace std;

int main() {
vector<int> g1;  int Sereja=0,Dima=0,n;


    for(int i=0 ; i<n ; i++)
    {
        cin>>n;
        g1.push_back(n);
    }

    while(g1.empty() == false)
    {
        {if(g1.begin()> g1.end())
        {
            Sereja=Sereja+*g1.begin();
            g1.erase(g1.begin());
        }
        else if (g1.begin()< g1.end())
        {
            Sereja=Sereja+*g1.end();
            g1.erase(g1.end());
        }}

        {if(g1.begin()> g1.end())
        {
            Dima=Dima+*g1.begin();
            g1.erase(g1.begin());
        }
        else if (g1.begin()< g1.end())
        {
            Dima=Dima+*g1.end();
            g1.erase(g1.end());
        }}

    }

    cout << Sereja << " " << Dima << endl;





    return 0;
}

