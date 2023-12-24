#include<iostream>
using namespace std;
class heap
{
    public:
    int arr[1001];
    int n=0;
    void insert(int value)
    {
        n++;
        arr[n]=value;
        int currentIndex=n;
        while (currentIndex>1)
        {
            int parent=currentIndex/2;
            
            if (arr[parent]<arr[currentIndex])
            {
              swap(arr[parent],arr[currentIndex]);
             currentIndex=parent;  
            }
            else
            {
                return;
            }
            
            
        }  
    }
    void deleteFromHeap()
    {
      int i=1;
      swap(arr[i],arr[n]);
      n--;

      while (i<n)
      {
        int leftChild=2*i;
        int rightChild=(2*i)+1;

        if (leftChild<n&&arr[i]<arr[leftChild])
        {
           swap(arr[leftChild],arr[i]);
           i=leftChild;
        }
        else if(rightChild<n&&arr[i]<arr[rightChild])
        {
            i=rightChild;
        }
        else
        {
            return;
        }
        
        
      }
      
     


    }
    void print()
    {
        for (int i = 1; i <=n; i++)
        {
           cout<<arr[i]<<" ";
        }
        
    }

};
int main()
{
    heap h1;
    h1.insert(31);
    h1.insert(30);
    h1.insert(29);
    h1.insert(28);
    h1.print();
    cout<<"\n\n\n";
    h1.deleteFromHeap();
    h1.print();
    return 0;
}