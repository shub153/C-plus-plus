#include<iostream>
using namespace std;

/*

1111
 222
  33
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
        int num=n-i+1;
        while(num){
            cout<<i;
            num--;
        }
        i++;
        cout<<endl;
      
     }
}
