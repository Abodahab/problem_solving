#include <iostream>

using namespace std;
#include <string>
int searchh(char x);




int main() {


     string arr;
    cin >> arr;


      int sizee=0;
      for(int i=0;i<arr.size();++i)
      {
          sizee=sizee+searchh(arr[i]);
      }


     cout<<sizee;






    return 0;
}
int searchh(char x){
    int index1=0, index2=0,counter=0;

    for (char letter = 'a' ; letter <= 'z'; letter++) {
             if ('x'==letter)
                index1=counter;

             counter++;
    }
    counter=0;

    for (char letter = x; letter <= 'z'; letter--) {
             if ('x'==letter)
                index2=counter;

             counter++;
    }

    if(index1<index2)
        return index1;
    else
        return index1;


}


