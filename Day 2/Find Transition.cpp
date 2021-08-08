#include<bits/stdc++.h>
using namespace std;
int FindTransition(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==1)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[]={0,0,0,0,1,1,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int point=FindTransition(arr,n);
	if(point>=0){
		cout<<"Transition Point="<<point<<endl;
	}
	else{
		cout<<"There is no transition point"<<endl;
	}
	return 0;
}
