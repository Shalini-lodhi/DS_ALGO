//Searching an element using binary search
#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key){
	int s=0,e=n;
	while(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0; i<n;i++){
		while(arr[i]<arr[i+1]){
			int temp = arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	int key;
	cin>>key;
	cout<<BinarySearch(arr, n, key)<<endl;
	return 0;
}