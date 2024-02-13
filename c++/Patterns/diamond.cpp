#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=5){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }


        int start=i-1;
        while(start){
            cout<<"*";
            start--;
        }
      
        
        i++;
        cout<<endl;
    }
}