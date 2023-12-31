#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
    int data;
    node*left;
    node*right;
node(int data)
{
    this->data=data;
    left=nullptr;
    right=nullptr;
}
};
node * buildTree(node*root)
{
  int data;
  cout<<"\nEnter the data: ";
  cin>>data;
  root=new node(data);

  if (data==-1)
  {
    return nullptr;
  }
  cout<<"\nEnter left child "<<data;
  root->left=buildTree(root->left);
  cout<<"\nEnter right child "<<data;
  root->right=buildTree(root->right);
  return root;

}

void levelOrderTraversal(node*root)
{
    queue<node*>q;
    q.push(root);

    while (!q.empty())
    {
        node*temp=q.front();
        cout<<" "<<temp->data;
     

        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
           q.pop();
        
    }
    
}
void preOrder(node*root)
{
    if (root==nullptr)
    {
        return;
    }
    cout<<" "<<root->data;
    preOrder(root->left);
    preOrder(root->right);
    
}
void inOrder(node*root)
{
    if (root==nullptr)
    {
        return;
    }
    inOrder(root->left);
    cout<<" "<<root->data;
    inOrder(root->right);
    
}
void postOrder(node*root)
{
    if (root==nullptr)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
     cout<<" "<<root->data;
    
}
int main()
{
    //  input: 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    node*root=nullptr;
    root=buildTree(root);
    cout<<"\n\n";
    cout<<"Level Order\n";
    levelOrderTraversal(root);  // output-> 1 2 3 4 5 6 7
    cout<<"\nPre Order\n";
    preOrder(root); // output-> 1 2 4 5 3 6 7
    cout<<"\nInorder\n";
    inOrder(root); //output-> 4 2 5 1 6 3 7
    cout<<"\nPost Order\n";
    postOrder(root); // output-> 4 5 2 6 7 3 1 
    return 0;
}