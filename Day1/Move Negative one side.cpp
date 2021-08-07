//Time Complexity-O(N)
//Space Complexity-O(1)

#include<bits/stdc++.h>
using namespace std;

int moveNegativeoneEnd(int arr[],int n){
	int i=-1;
	int pivot=0;
	for(int j=0;j<n;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
} 

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	moveNegativeoneEnd(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
