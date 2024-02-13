#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int row = 1;
    while (row< 2*n)
    {
        int col;
        if (row <=n)
        {
            col = row;
        }else{
            col = 2*n-row;
        }
        int space = n - col;
        for (int i = 0; i < space; i++)
        {
            cout<<" ";
        }
        for (int i = 0; i < col; i++)
        {
            cout<<"* ";
        }
        
        
        row++;
        cout<<endl;
    }
    
}