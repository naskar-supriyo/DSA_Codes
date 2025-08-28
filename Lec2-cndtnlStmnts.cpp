#include<iostream>
using namespace std;
int main()
{
    int n, i;
    bool isPrime = true;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=2; i<n; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<"The Number is Prime.";
    }
    else{
        cout<<"The Number is Not Prime.";
    }
    return 0;
}