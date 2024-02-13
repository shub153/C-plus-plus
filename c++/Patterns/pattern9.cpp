#include<iostream>
using namespace std;

/*
1
23
345
4567
*/



/*
int main(){
    int n;
    cin>>n;

    int i=1;
   
    while(i<=n){
        int j=1;
        int value=i;
        while(j<=i){
            cout<<value;
            value++;
            j++;

        }
        i++;
        cout<<endl;

    }

}*/



int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i+j-1;
            j++;

        }
        i++;
        cout<<endl;
    }
}