#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main(){
       int k ,r;
       std::cin >> k >> r;

       int counter=0,num=0, totlaPrice=0;
       while(num!=r){
          totlaPrice=totlaPrice+k;
         num=totlaPrice%10;
         if(num==0){
            counter++;
            break;
         }

         counter++;

}






   cout<<counter;


    return 0;
}
