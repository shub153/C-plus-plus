#include<iostream>
using namespace std;

/*
*
**
***
****
*****
****
***
**
*
*/

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=2*n-1;i++){
        int c=0;
        if(i<=n){
            c=i;
        }
        else{
            c=2*n-i;
            //c=i-n+1;
        }
        for(int j=1;j<=c;j++){
            cout<<"*";

        }
        cout<<endl;

    }
}