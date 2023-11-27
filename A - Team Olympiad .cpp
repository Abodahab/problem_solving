#include <iostream>
#include <string>
#include <string.h>
#include <array>
#include <vector>
void swapp(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}



using namespace std;

int main()
{
    int n,teams,one=0,two=0,three=0,input,sum;
    cin >> n;
    
    vector<int> myVector;
    vector<int> onev;
    vector<int> twov;
    vector<int> threev;



    teams = n / 3;

    for (int i = 0; i < n; i++)
    {
        
        cin >> input;
        myVector.push_back(input);
        if (myVector[i] == 1)
        {
            one++;
            onev.push_back(i);
        }
        else if (myVector[i] == 2)
        {
            two++;
            twov.push_back(i);

        }
        else
        {
            three++;
            threev.push_back(i);

        }
        
    }
    
    if(one != 0 || two != 0 || three != 0)
    {
        if (one <= two && one <= three)
        {
            sum = one;
            for (int i = 0; i < sum; i++)
            {
                cout << onev[i] << twov[i] << threev[i];
            }

        }
        else if (two <= one && two <= three)
        {
            sum = two;
            for (int i = 0; i < sum; i++)
            {
                cout << onev[i] << twov[i] << threev[i];

            }

        }
        else
        {
            sum = three;
            for (int i = 0; i < sum; i++)
            {
                cout << onev[i] << twov[i] << threev[i];

            }


        }  
    }
    else
        cout << 0;

 

    

    return 0;
}
