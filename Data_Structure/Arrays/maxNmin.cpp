#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Size of Array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    	cout<<"Enter "<<i<<" element of array ";
        cin>>arr[i];
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0;i<n;i++){
        maxNo=max(maxNo, arr[i]);
        minNo=min(minNo, arr[i]);
    }
    cout<<"Max Element: "<<maxNo<<" \n"<<"Min element "<<minNo;
    return 0;
}