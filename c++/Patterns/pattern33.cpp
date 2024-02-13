#include<iostream>
using namespace std;
/*


  
  DIAMOND
*/

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=2*n-1;i++){

        int totalColumninrow=0;
        if(i<=n){
            totalColumninrow=i;
        }
        else{
            totalColumninrow=2*n-i;
        }




        int space=n-totalColumninrow;
       
        for(int s=0;s<=space;s++){
            cout<<" ";

        }
        for(int j=1;j<=totalColumninrow;j++){
            cout<<"* ";
        }
        i++;
        cout<<endl;
    }
}