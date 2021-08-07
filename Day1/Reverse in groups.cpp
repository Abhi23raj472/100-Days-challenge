//Time complexity -O(n)
//space-O(1)


#include<iostream>
using namespace std;
int ReverseInGroups(int arr[],int n,int k)
{
    for(int i=0;i<n;i+=k){
 		int left=i;
 		int right=min(i+k-1,n-1);
 		while(left<right){
 			swap(arr[left],arr[right]);
 			left++;
 			right--;
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
	 int k;
	 cin>>k;
	ReverseInGroups(arr,n,k);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
 }
