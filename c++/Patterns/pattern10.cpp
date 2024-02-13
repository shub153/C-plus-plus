#include<iostream>
using namespace std;

/*
1
21
321
4321
*/

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i-j+1;
            j++;
        }
        i++;
        cout<<endl;
    }
}