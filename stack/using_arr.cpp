#include <iostream>
using namespace std;

class stack

{
    int n;
    int *arr=new int[n];
    int top = -1;
  

public:
   void set()
   {
    cout<<"\nEnter size of array: ";
    cin>>n;
   }
    void push()
    {
        if (top == 4)
        {
            cout << "\nStack is full ";
        }
        else
        {
            int val;
            cout << "\n Enter value to be pushed: ";
            cin >> val;
            top++;
            arr[top] = val;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            /* code */
            cout << "\nStack is empty ";
        }
        else
        {
            int item = arr[top];
            cout << "\nThe pop item is: " << item;
            top--;
        }
    }
    void peek()
    {
        if (top == -1)
        {
            /* code */
            cout << "\nStack is empty ";
        }
        else
        {
            cout << "\nThe top element is: " << arr[top];
        }
    }
    void display()
    {
           if (top == -1)
        {
            /* code */
            cout << "\nStack is empty ";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
             cout<<arr[i]<<" ";
            }
            
        }    

    }
};
int main()
{
    stack obj;
    int choice;
    obj.set();
    
    
    do
    {
        
     cout<<"\nPress:\n1.To perform push\n2.To perform pop\n3.To perform top\n4.To display\n5.To exit\n";
    cin>>choice;
     switch (choice)
    {
    case 1:
        obj.push();
        break;
    case 2:
        obj.pop();
        break;
    case 3:
        obj.peek();
        break;
    case 4:
    obj.display();
        break;    
    
    default:
        break;
    }
    } 
    while (choice!=5);
    
    return 0;
}