#include <iostream>
using namespace std;
#include <stack>
#include <string>
void infixToPostfix(string s)
{
    stack<string> val;
    stack<char> op;

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
       if ((ch >= '0' && ch <= '9'))
{
    string str(1, ch); // Create a string from the character
    val.push(str + " "); // Push the string to the stack with appended space
}


        else if (op.size() == 0 || ch == '(' || op.top() == '(')
            op.push(ch);

        else if (ch == ')')
        {
            while (op.top() != '(')
            {
                string v2 = val.top();
                val.pop();
                string v1 = val.top();
                val.pop();
                char o = op.top();
                op.pop();

                string exp = o + v1 + v2;
                val.push(exp);
            }
            op.pop();
        }

        else
        {

            if (ch == '+' || ch == '-')
            {
                string v2 = val.top();
                val.pop();
                string v1 = val.top();
                val.pop();
                char o = op.top();
                op.pop();

                string exp = o + v1 + v2;
                val.push(exp);

                op.push(ch);
            }
            else
            {
                if (ch == '*' || ch == '/')
                {
                    if (op.top() == '*' || op.top() == '/')
                    {

                        string v2 = val.top();
                        val.pop();
                        string v1 = val.top();
                        val.pop();
                        char o = op.top();
                        op.pop();

                        string exp = o + v1 + v2;
                        val.push(exp);
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

    while (val.size() > 1)
    {
        string v2 = val.top();
        val.pop();
        string v1 = val.top();
        val.pop();
        char o = op.top();
        op.pop();

        string exp = o + v1 + v2;
        val.push(exp);
    }

    string prefix=val.top();
    cout<<prefix;
}
int main()
{
    string s = "9-(5+3)*4/6";
    infixToPostfix(s);
    return 0;
}