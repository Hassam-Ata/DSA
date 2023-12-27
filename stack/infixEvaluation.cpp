#include<iostream>
using namespace std;
#include<stack>
#include<string>
void infixEvaluation(string s)
{
    stack<int>val;
stack<char>op;

    for (int i = 0; i <s.size(); i++)
    {
        char ch=s[i];
        if (isdigit(ch))
        {
            val.push(ch - '0');
            
        }
        else if(op.size()==0 ||ch=='('||op.top()=='(')op.push(ch);

        else if (ch==')')
        {
            while (op.top()!='(')
            {
                   int v2=val.top();
                val.pop();
                int v1=val.top();
                val.pop();
                if (op.top()=='+')val.push(v1+v2); 
                if (op.top()=='-')val.push(v1-v2); 
                if (op.top()=='*')val.push(v1*v2); 
                if (op.top()=='/')val.push(v1/v2);
             
             op.pop();
            }
            op.pop();
            
        }
        
        else
        {
           
            if (ch=='+'||ch=='-')
            {
                int v2=val.top();
                val.pop();
                int v1=val.top();
                val.pop();
             if (op.top()=='+')val.push(v1+v2); 
             if (op.top()=='-')val.push(v1-v2); 
             if (op.top()=='*')val.push(v1*v2); 
             if (op.top()=='/')val.push(v1/v2);
             
             op.pop();

             op.push(ch);
                
            }
            else
            {
                if (ch=='*'||ch=='/')
                {
                    if (op.top()=='*'||op.top()=='/')
                    {
                        
                       int v2=val.top();
                       val.pop();
                       int v1=val.top();
                       val.pop();
                       if (op.top()=='*')val.push(v1*v2); 
                       if (op.top()=='/')val.push(v1/v2);
                       op.pop();
                       op.push(ch);
                    
                    }
                    else
                    {
                        op.push(ch);
                    }
                 
                }
               
                
                
            }
       
            
        }
        
    }
  
    while (val.size()>1)
    {
            int v2=val.top();
            val.pop();
            int v1=val.top();
            val.pop();
             if (op.top()=='+')val.push(v1+v2); 
             if (op.top()=='-')val.push(v1-v2); 
             if (op.top()=='*')val.push(v1*v2); 
             if (op.top()=='/')val.push(v1/v2);
             op.pop();
        
    }

    cout<<val.top();
}
int main()
{
    string s="9-(5+3)*4/6";
    infixEvaluation(s);
    return 0;
}