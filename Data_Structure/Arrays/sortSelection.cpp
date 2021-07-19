//for selection sort
//swapping the smallest number in the list from first element
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)//insertion of element in the array
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)//for treversing in the array
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i]){
				int temp = arr[i];//storing 1st element
				arr[i]=arr[j];//replacing 1st element
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}