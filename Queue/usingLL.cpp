#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    
    Node(int data)
    {
        this->data=data;
        next=nullptr;
    }
};
class Queue
{
    Node*front=nullptr;
    Node*rear=nullptr;
    public:
    void enqueue(int value)
    {
        Node*newNode=new Node(value);

        if (front==nullptr)
        {
            front=rear=newNode;

        }
        else
        {
            rear->next=newNode;
            rear=newNode;
        }
        

    }
    void dequeue()
    {
        if (front==rear)
        {
            cout<<"Queue is already empty";
            return;
        }
        if (front==rear)
        {
            front=rear=nullptr;
        }

        Node*temp=front;
        front=front->next;

        delete temp;
        
    }
    void display()
    {
         if (front==rear)
        {
            cout<<"Queue is already empty\n";
            return;
        }
        else
        {
            while (front!=rear)
            {
                cout<<front->data<<"->";
                front=front->next;
            }
            cout<<rear->data;
            
        }
        
    }
};
int main()
{
    Queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
   
    q1.display();
    

  
    return 0;
}