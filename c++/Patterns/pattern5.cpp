#include<iostream>
using namespace std;

/*
123
456
789
*/

int main(){
    int n;
    cin>>n;
    int i=1;
    int count =1;
    while(i<=n){
        int j=1;
       
        while(j<=n){
            cout<<count;
            count=count+1;
            j++;
        }
        i++;
        cout<<endl;
    }
}