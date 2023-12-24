#include<iostream>
using namespace std;
class doublyEndedQueue
{
    int *arr;
    int front,rear;
    int size;

    public:
     
    doublyEndedQueue(int n)
    {
        size=n;
        arr=new int[size];
        front=rear=-1;
    }
    void enqueueRear(int num)
    {
        if (front==(rear+1)%size)
        {
            cout<<"\nQueue is full ";
        }
        else if (front==-1)
        {
            front=rear=0;
            arr[rear]=num;
        }
        else
        {
        rear=(rear+1)%size;
        arr[rear]=num;
        }         
    }
    void enqueueFront(int num)
    {
          if (front==(rear+1)%size)
        {
            cout<<"\nQueue is full ";
        }
        else if (front==-1)
        {
            front=0;
            arr[front]=num;
        }
        else if (front==0)
        {
            front=size-1;
            arr[front]=num;
        }
        else
        {
            front=front-1;
            arr[front]=num;
        }

    }
    void dequeueFront()
    {
        if (front==-1)
        {
            cout<<"\nQueue is empty ";
        }
        else
        {
            front=(front+1)%size;    
        }

        
    }
    void dequeueRear()
    {
        if (front==-1)
        {
            cout<<"\nQueue is empty ";
        }
        else if (rear==0)
        {
            rear=size-1;
        }
        
        else
        {
            rear=rear-1;
        }
    
    }
    void diplay()
    {
        if (front==-1)
        {
            cout<<"\nQueue is empty";
        }
        else
        {
            int i=front;
            while (i!=rear)
            {
                cout<<arr[i]<<" ";
                i=(i+1)%size;
            }
            cout<<arr[rear];
            
        }
        
        
    }   

};


int main()
{
    doublyEndedQueue q1(5);
    q1.enqueueRear(1);
    q1.enqueueRear(2);
    q1.enqueueRear(3);
    q1.enqueueRear(4);

    q1.dequeueRear();
    q1.dequeueFront();
    q1.enqueueFront(888);
    q1.enqueueRear(555);
    q1.dequeueRear();
    q1.dequeueFront();
    q1.diplay();
    
    return 0;
}