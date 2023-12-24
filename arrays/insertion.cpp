#include<iostream>
using namespace std;
void display(int arr[],int size)
{
   
    cout<<"[";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]";

}

int main()
{
    int arr[50],size,value,pos;
    cout<<"Enter size of array: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter ["<<i<<"]";
        cin>>arr[i];
    }
    cout<<"Array before insertion: "<<endl;
    display(arr,size);

    cout<<"\nEnter position: ";
    cin>>pos;
    cout<<"\nEnter value: ";
    cin>>value;
    //Can be used when order is not problem
    arr[size]=arr[pos-1];
    arr[pos-1]=value;
    // for (int i = size-1; i >= pos-1; i--)
    // {
    //     arr[i+1]=arr[i];
    // }
    // arr[pos-1]=value;
     size++;

   
    cout<<"Array after inserton: "<<"\n";
    display(arr,size);
    
   
    
   
    
    

    return 0;
}