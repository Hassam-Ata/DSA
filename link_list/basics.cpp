#include<iostream>
using namespace std;

class node {
public:
    int data ;
    node* next ;
    node()
    {
        data = 0;
     next = nullptr;
    }
};

void insertAtHead(node*& head, int value) {
    node* temp = new node;
    temp->data = value;
    temp->next = head;
    head = temp;
}

void print(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
node* mid1(node* head) {
   node*slow=head;    
    node*fast=head->next;

    while(fast!=nullptr &&fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

node* Mid2(node* head) {
   node*slow=head;    
    node*fast=head;

    while(fast!=nullptr &&fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}




int main() {
    node* head=nullptr; // Initialize head to nullptr

    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);

    node*result1=mid1(head);
    node*result2=Mid2(head);
    print(head);

    cout<<result1->data<<" ";
    cout<<result2->data;

    

    return 0;
}
