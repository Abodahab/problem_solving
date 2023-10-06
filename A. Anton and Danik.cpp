#include <iostream>

using namespace std;

int main()
{    int n;
       int anton=0;
       int Danik=0;

      cin >>n;

       char numpers[n];

      for (int i = 0; i < n; ++i) {
            cin >> numpers[i];
        }
      for (int i = 0; i < n; ++i)
        {
            if((numpers[i])==('A'))
              anton=anton+1;
            else
               Danik=Danik+1;

        }
        if(anton>Danik)
            cout << "Anton"  ;
        else if(anton<Danik)
            cout << "Danik"  ;
         else
            cout << "Friendship"  ;

    return 0;
}
