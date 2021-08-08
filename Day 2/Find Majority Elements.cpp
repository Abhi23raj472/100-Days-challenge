#include<iostream>
using namespace std;

/* Method 1-Brute Force Approach

void FindMajority(int arr[],int n)
{
	int maxCount=0;
	int index=-1;
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count>maxCount)
		{
			maxCount=count;
			index=i;
		}
	}
	if(maxCount>n/2)
	{
		cout<<arr[index]<<endl;
	}
	else{
		cout<<"No majority Element"<<endl;
	}
}*/
//Method 2- Moores Voting Algorithm
int FindMajority(int arr[],int n)
{
	int index=0,count=1;
	for(int i=1;i<n;i++)
	{
		if(arr[index]==arr[i])
		{
			count++;
		}
		else{
			count--;
		}
		if(count==0)
		{
			index=i;
			count=1;
		}
	}
	return arr[index];
}
bool isMajority(int arr[],int n,int element)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==element)
		{
			count++;
		}
	}
	if(count>n/2){
		return 1;
	}
	else{
		return 0;
	}
}
void printMajority(int arr[], int n)
{
    int element = FindMajority(arr, n);
    if (isMajority(arr, n, element))
        cout << " " << element << " ";
 
    else
        cout << "No Majority Element";
}
int main()
{
	int arr[]={3, 3, 4, 2, 4, 4, 2, 4, 4};
	int n=sizeof(arr)/sizeof(arr[0]);
	printMajority(arr,n);
	return 0;
}
