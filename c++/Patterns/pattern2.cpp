#include<iostream>
using namespace std;

/*
111
222
333
*/


int main(){

    int n;
    cin>>n;

    int i =1;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        i=i+1;
        cout<<endl;

    }
}