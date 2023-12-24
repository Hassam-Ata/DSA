#include<iostream>
#include<stack>
using namespace std;
int precedence(char c)
{
    if (c=='^')
    {
        return 3;
    }
    else if (c=='*'||c=='/')
    {
        return 2;
    }
    else if (c=='+'||c=='-')
    {
        /* code */
        return 1;
    }
    else
    {
        return -1;
    }

    
}
void intopost(string s)
{
    string result;
    stack <char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch=s[i];
        if ((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')||(ch>='A'&&ch<='Z'))
        {
            result=result+ch;
         
        }
        else if (ch=='(')
        {
            st.push(ch);
        }
        else if (ch==')')
        {
            while (st.top()!='(')
            {
                result=result+st.top();
                st.pop();
            }
            st.pop();
            
        }
        else
        {
            while (!st.empty()&& precedence(ch)<=precedence(st.top()))
            {
                result=result+st.top();
                st.pop();
            }
            st.push(ch);
            
        }
     
        
        
    }
       while (!st.empty())
        {
         result=result+st.top();
         st.pop();
        }
    
  cout<<result<<endl;


}
int main()
{
    string s="a+b*(c/d)";
    
    intopost(s);
    
    return 0;
}