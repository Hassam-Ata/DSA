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
        cout<<"Enter ["<<i<<"]  ";
        cin>>arr[i];
    }
    cout<<"Array before deletion: "<<endl;
    display(arr,size);


    cout<<"\nEnter position: ";
    cin>>pos;
  
    
    for (int i = pos-1; i < size; i++)
    {
        arr[i]=arr[i+1];
    }

    size--;

   
    cout<<"Array after deletion: "<<"\n";
    display(arr,size);
    
   
    
   
    
    

    return 0;
}