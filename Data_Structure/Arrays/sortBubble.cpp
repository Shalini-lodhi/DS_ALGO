//reapetedly swap two adjacent elements if they are in wrong order
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i =0; i<n;i++){
		cin>>arr[i];
	}
	//for bubble sort
	int counter=1;
	while(counter<n-1)
	{
		for(int i=0; i<n;i++)
		{
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter ++;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}