#include<iostream>
using namespace std;


/*
AAA
BBB
CCC
*/

/*

int main(){
    int n;
    cin>>n;

    int i=1;
    char ch='A';
    
    while(i<=n){
        int j=1;
    
     
        while(j<=n){
            cout<<ch;
            j++;

        }
        i++;
        ch++;
        cout<<endl;
    }
}
*/


int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
          char ch='A'+i-1;
          cout<<ch;
            j++;
        }
        i++;
        cout<<endl;
    }
}