#include<iostream>
using namespace std;

/*

    1
   212
  32123
 4321234
543212345


*/

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){

        int space=n-i;
        for(int s=1;s<=space;s++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        for(int j=2;j<=i;j++){
            cout<<j;
        }
    
        cout<<endl;
    }

}