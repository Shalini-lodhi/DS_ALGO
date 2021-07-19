/*searching an element in an array and returning its index
if not found then return -1*/
#include <iostream>
using namespace std;
//function for linear seach
int LinearSearch(int arr[], int n, int key)
{
	for(int i=0;i<n;i++){
		if(arr[i]==key)
			//cout<<"index: ";
			return i;
	}
	//cout<<"404 Not found";
	return -1;
}
int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];//array declearation
	for(int i=0;i<n;i++){
		cout<<i<<" element of the array : ";
		cin>>arr[i];//array element insertion
	}
	int key;
	cout<<"required element: ";
	cin>>key;
	cout<<LinearSearch(arr, n, key)<<endl;
	return 0;
}