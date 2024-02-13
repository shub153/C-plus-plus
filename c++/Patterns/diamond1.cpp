#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=2*n-1;i++){


        int totalColumn=0;
        if(i<=n){
            totalColumn=i;
        }
        else{
            totalColumn=2*n-i;
        }

        int space=n-totalColumn;
        for(int s=1;s<=space;s++){
            cout<<" ";
        }

        for(int j=1;j<=totalColumn;j++){
            cout<<"* ";
        }

      
        cout<<endl;

    }
}