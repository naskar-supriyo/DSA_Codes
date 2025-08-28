void DecimaltoBinary()
{
    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;
    while(n>=0){
        if(n%2==0){
            cout<<"0";
        }
        else{
            cout<<"1";
        }
        n=n/2;
    }
}
int main()
{
    DecimaltoBinary();
    return 0;
}