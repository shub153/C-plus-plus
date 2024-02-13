#include<iostream>
using namespace std;
/*


     1
    121
   12321
  1234321





*/


int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){

        // print space
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        // print 1st traingle
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }


        // print 2nd triangle

        int start=i-1;
        while(start){
            cout<<start;
            start--;
        }
        i++;
        cout<<endl;
    }
}