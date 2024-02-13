#include<iostream>
using namespace std;

/*
   1
  212
 32123
4321234
 32123
  212
   1

*/

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=2*n-1;i++){
        int spaces=0;
        if(i<=n){
            spaces=n-i;
        }
        else{
            spaces=i-n;
        }
        for(int s=1;s<=spaces;s++){
            cout<<" ";
        }

       
        if(i<=n){
            for(int j=i;j>=1;j--){
                cout<<j;
                
            }
            for(int j=2;j<=i;j++){
                cout<<j;
            }
        }
        else{
            
        }
        
        cout<<endl;
    }

}