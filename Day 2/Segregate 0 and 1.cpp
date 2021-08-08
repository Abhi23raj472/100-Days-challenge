

#include<bits/stdc++.h>
using namespace std;

/*Methor 1;
Time Complexity-O(N)
Note-Traverse array 2 times
void Segregate0and1(int arr[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			count++;
		}
	}
	for(int i=0;i<count;i++){
		arr[i]=0;
	}
	for(int i=count;i<n;i++){
		arr[i]=1;
	}*/

/* Method 2-Using two Index
Time Complexity-O(N)
Note- Traverse the array 1 time.*/
void Segregate0and1(int arr[],int n){
	int left=0;
	int right=n-1;
	while(left<right){
		while(arr[left]==0 && left<right){
			left++;
		}
		while(arr[right]==1 && left<right){
			right--;
		}
		if(left<right){
			arr[left++]=0;
			arr[right--]=1;
		}
	}


int main(){
	int arr[]={0,1,0,1,0,0,1,1,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	Segregate0and1(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
