#include<iostream>
using namespace std;

/*
D
CD
BCD
ABCD
*/

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
          char start='A'+n-i;
         
        
       
        while(j<=i){
          
         
            cout<<start;
            start++;
            j++;
        }
        i++;
        cout<<endl;
    }
}