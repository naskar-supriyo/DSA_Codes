#include<iostream>
using namespace std;
void pattern1()
{
    int i,j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern2()
{
    int n;
    cout<< "Enter the number: ";
    cin>> n;
    int i,j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void pattern3()
{
    int n;
    cout<< "Enter the number: ";
    cin>> n;
    int i,j;
    for(i=0; i<n; i++){
        char ch='A';
        for(j=0; j<n; j++){
            cout<< ch <<" ";
            ch = ch+1;
        }
        cout<<"\n";
    }
}
void pattern4()
{
    int n;
    cout<< "Enter the number: ";
    cin>> n;
    int i,j;
    int num=1;
    for(i=0; i<n; i++){
        
        for(j=0; j<n; j++){
            cout<< num <<" ";
            num = num+1;
        }
        cout<<"\n";
    }
}
void pattern5()
{
    int n;
    cout<< "Enter the number: ";
    cin>> n;
    int i,j;
    char ch='A';
    for(i=0; i<n; i++){
        
        for(j=0; j<n; j++){
            cout<< ch <<" ";
            ch = ch+1;
        }
        cout<<"\n";
    }
}
void pattern6()
{
    int n;
    cout<< "Enter the number: ";
    cin>> n;
    int i,j;
    for(i=0; i<=n; i++){
        for(j=0; j<i; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
void pattern7()
{
    int n;
    cout<< "Enter the number: ";
    cin>> n;
    int i,j;
    for(i=0; i<=n; i++){
        for(j=0; j<i; j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
void pattern8()
{
    int n;
    cout<< "Enter the number: ";
    cin>> n;
    int i,j;
    char ch='A';
    for(i=0; i<=n; i++){
        for(j=0; j<=i; j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<"\n";
    }
}
void pattern9()
{
    int n;
    cout<< "Enter the number: ";
    cin>> n;
    int i,j;
    for(i=0; i<=n; i++){
        int num=1;
        for(j=0; j<i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }
}
void pattern10()
{
    int n;
    cout<< "Enter the number: ";
    cin>> n;
    int i,j;
    for(i=0; i<n; i++){
        for(j=1; j<=i+1; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void pattern11()
{
    int n;
    cout<< "Enter the number: ";
    cin>> n;
    int i,j;
    for(i=1; i<=n; i++){
        for(j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void pattern12()
{
    int n;
    cout<<"Enter the number: ";
    cin>> n;
    int i, j;
    int num=1;
    for(i=0; i<=n; i++){
        for(j=0; j<i; j++){
            cout<< num <<" ";
            num++;
        }
        cout<<"\n";
    }
}
void pattern13()
{
    int n;
    cout<<"Enter the number: ";
    cin>> n;
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            cout<<" ";
        }
        for(j=0; j<n-i; j++){
            cout<<i+1;
        }
            cout<<"\n";
    }
}
void pattern14()
{
    int n;
    cout<<"Enter the number: ";
    cin>> n;
    int i, j;
    char ch='A';
    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            cout<<" ";
        }
        for(j=0; j<n-i; j++){
            cout<<char(ch+i);
        }
            cout<<"\n";
    }
}
void pattern15()
{
    int n;
    cout<<"Enter the number: ";
    cin>> n;
    int i, j;
    for(i=0; i<n; i++){
        for(j=1; j<n-i; j++){
            cout<<" ";
        }
        for(j=1; j<=i+1; j++){
            cout<<j;
        }
        for(j=i; j>0; j--){
            cout<<j;
        }
    cout<<"\n";
    }
}
int main(){
    pattern15();
    return 0;
}