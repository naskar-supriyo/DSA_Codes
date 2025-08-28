#include<iostream>
using namespace std;

//Find the smallest in an array
void SmallestLargest()
{
    int size;
    int i;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<"elements: ";
    for(i=0; i<size; i++){
        cin>>arr[i];
    }
    int x=arr[0];
    int y=arr[0];
    for(i=0; i<size; i++){
        if(x>arr[i]){
            x=arr[i];
        }
        else if(y<arr[i]){
            y=arr[i];
        }
    }
    cout<<"The smallest in the array is "<<x<<"\n";
    cout<<"The largest in the array is "<<y;
}

//Function to find the sum and multiplication of all the numbers in an array 
void SumMul()
{
    int size,i;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements: ";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The array is: ";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int sum=0, mul=1;
    for(i=0;i<size;i++){
        sum=sum+arr[i];
        mul=mul*arr[i];
    }
    cout<<"\nThe sum is: "<<sum;
    cout<<"\nThe multiplication is: "<<mul;
}

//Swapping the max and min number in an array
void swap(int *x, int *y){
    int t=*x;
    *x=*y;
    *y=t;
}
void SwapMaxMin()
{
    int size,i;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements: ";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The array is: ";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int x=arr[0];
    int y=arr[0];
    int s=0,l=0;
    for(i=0;i<size;i++){
        if(x>arr[i]){
            x=arr[i];
            s=i;
        }
        else if(y<arr[i]){
            y=arr[i];
            l=i;
        }
    }
    cout<<"\n The smallest is: "<<x<<" in the index: "<<s;
    cout<<"\n The largest is: "<<y<<" in the index: "<<l;
    swap(&arr[s], &arr[l]);
    cout<<"\nThe array is: ";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
//Printing unique values in an array
void uniqueVal(){
    int size,i;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements: ";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The array is: ";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    for(i=0;i<size;i++){
        int x=arr[i];
        int j=i+1;
        while(j<size){
            if(x!=arr[j]){
                j++;
            }
            else{
                i++;
            }
        }
        cout<<"\n"<<x;
    }
}

//Maximum subarray sum problem 
void MaximumSubarraySum()
{
    int n=5;
    int arr[n]={1,2,3,4,5};
    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    MaximumSubarraySum();
    return 0;
}