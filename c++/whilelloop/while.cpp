#include<iostream>
using namespace std;



// counting numbers from 1 to n

/*
int main(){

    int n;
    int i=1;
    cin>>n;

    while(i<=n){
        cout<<i<<endl;
        i++;
    }


}
*/

// sum of all numbers from 1 to n

/*
int main(){
    int n;
    cin>>n;
    int i=1;
    int sum=0;

    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"the sum is "<<sum;
}
*/


// find sum of all even numbers
/*
int main(){

    int n;
    cin>>n;

    int sum=0;
    int i=0;


    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<<"the sum of even numbers is "<<sum;
}

*/


// prime number 

int  main(){
    int n;
    cin>>n;
    int i=2;

    while(i<n){
        if(n%i==0){
            cout<<"not prime for "<<i<<endl;
        }
        else{
            cout<<"number is prime "<<i<<endl;
        }
        i=i+1;
    }
    return 0;
}
