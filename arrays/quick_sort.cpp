#include<iostream>
using namespace std;

int partition(int *arr,int low,int high)
{
 int i=low;
 int j=high;
 int pivot=arr[low];
 while (i<j)
 {
	while (arr[i]<=pivot && i<=high)
	{
      i++;
		
	}
	while (arr[j]>pivot && j>=low)
	{
      j--;
		
	}
	if (i<j)
	{
			swap(arr[i],arr[j]);
	}
	


 }
 	swap(arr[low],arr[j]);
	return j;
}
  void quicksort(int *arr,int low,int high)
  {
	if(low<high)
	{
		int partition_index=partition(arr,low,high);
		quicksort(arr,low,partition_index-1);
		quicksort(arr,partition_index+1,high);
    }
  }
 

int main()
{
	int n=5;
	int arr[n]={5,4,3,2,1};
	int low=0;
	int high=n-1;
	
	
	
	quicksort(arr,low,high);
	cout<<"\nSorted array is: ";
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
	


	return 0;
}