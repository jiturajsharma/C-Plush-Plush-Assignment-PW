// Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the size of array : ";
    cin>>n;
    int arr[n];
    // take input in array
    for(int i=0;i<=n-1;i++){
        cin>> arr[i];
    }
    
    int product = 1;
    
    for(int i=0;i<=n-1;i++){
        product = product * arr[i];
    }
        cout<<product;
}