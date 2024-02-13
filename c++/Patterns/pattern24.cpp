#include<iostream>
using namespace std;


/*
1234
 234
  34
   4
*/

int main(){


    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
         int j=1;
         int num=n-i+1;
         while(num){
            cout<<i+j-1;
            j++;
            num--;
         }
          i++;
        cout<<endl;


         }
       
    }
