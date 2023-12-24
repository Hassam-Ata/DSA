#include<iostream>
#include <stack>
using namespace std;
class queue
{ public:
    stack <int>s1,s2;
void enqueue(int x)
{
    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
     
    s1.push(x);

    while (!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
        
    }

    
}
int dequeue()
{
    if (s1.empty())
    {
        return -1;
    }
    else
    {
      int ans=s1.top();
      s1.pop();
      return ans;
    }
    
    
}};

int main()
{
    queue Q;
    Q.enqueue(3);
    Q.enqueue(2);
    Q.enqueue(1);

    cout<<"\nThe popped element is: "<<Q.dequeue();
    cout<<"\nThe popped element is: "<<Q.dequeue();
    cout<<"\nThe popped element is: "<<Q.dequeue();

    return 0;
}