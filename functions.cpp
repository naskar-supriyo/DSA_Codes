#include<iostream>
using namespace std;

//Function to calculate factorial
int factorial()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int fact=1;
    for(int i=n; i>0; i--){
        fact=fact*i;
    }
    cout<< fact;
}

//Function to calculate sum of the digits of a number
void SumOfDigits(){
    int a,r,sum=0;
    cout<<"Enter the number: ";
    cin>>a;
    int x=a;
    while(x>0){
        r=x%10;
        sum=sum+r;
        x=x/10;
    }
    cout<<"the sum of all the digits "<<a<<" is " <<sum;
}

//Function to calculate the binomial coefficient for n and r
int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}
void BinomialCoefficient(){
    int n, r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    int fn=factorial(n);
    int fr=factorial(r);
    int d=n-r;
    int fd=factorial(d);
    float c=fn/(fr*fd);
    cout<<"The Binomial Coefficient is: "<<c;
}
//Function to print the Fibonacci series
void fibonacci()
{
    int n;
    cout<<"Enter the number you want to print the fibonacci series: ";
    cin>>n;
    int a=0;
    int b=1;
    while(a<=n){
        cout<<a<<",";
        int next=a+b;
        b=a;
        a=next;
    }
}
//Function to convert Decimal to Binary
void DecimalToBinary(){
    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;
    int ans=0;
    int pow=1;
    while(n>0){
        int rem=n%2;
        n=n/2;
        ans=ans+(pow*rem);
        pow=pow*10;
    }
    cout<<ans;
}
//Function to convert Binary to Decimal
void BinaryToDecimal(){
    int n;
    cout<<"Enter the Binary number: ";
    cin>>n;
    int ans=0;
    int pow=1;
    while(n>0){
        int rem=n%10;
        n=n/10;
        ans=ans+(pow*rem);
        pow=pow*2;
    }
    cout<<ans;
}
void Reversenumber()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int rev=0;
    while(n>0){
        int rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    cout<<"The reversed number is: "<<rev;
}
int main()
{
    Reversenumber();
    return 0;
}