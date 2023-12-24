#include<iostream>
#include <stack>
#include <algorithm>
using namespace std;
void intoprefix(string s)
{
    reverse(s.begin(),s.end());
    
    
    string prefix;
    stack <char>st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch=s[i];
        if (s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z'||s[i]>=0 &&s[i]<='9')
        {
            st.push(ch);
        }
        else
        {
             if (s[i]=='')
             {
                /* code */
             }
             
        }
        
    }
    
}

int main()
{
    string s="a+b*c-(d^e)/w";

    return 0;
}