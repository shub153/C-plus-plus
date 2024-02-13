#include<iostream>
using namespace std;

/*


1234554321
1234**4321
123****321
12******21
1********1

*/

int main(){
    int n;
    cin>>n;
    // first traingle

    int i=1;
    while(i<=n){
        int number=n-i+1;
         int count=1;
        while(number){
           
            cout<<count;
            count++;
            number--;

        }
        // Print  1st star


        int star_start=i-1;
        while(star_start){
            cout<<"*";
            star_start--;
        }


        //Print 2nd star

        int star=i-1;
        while(star){
            cout<<"*";
            star--;
        }

        //Print last triangle
        int num=n-i+1;
        int j=1;
        while(num){
            cout<<n-i-j+2;
            j++;
            num--;

        }

        i++;
        cout<<endl;
    }
}