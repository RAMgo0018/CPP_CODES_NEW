#include <iostream>
using namespace std;
class postFix
{
private:
    int array[20];
    int top;      

public:
    postFix(); 
    void push(int x);
    int pop();
    int answer(string &exp); 
};

postFix::postFix()
{
    top = -1;
}
void postFix::push(int x)
{
    top++;
    array[top] = x;
}
int postFix ::pop()
{
    int i = array[top]; 
    top--;             
    return i;
}
int postFix::answer(string &exp)
{
    for (int i = 0; i < exp.length(); i++) 
    {
        char c = exp[i];
        if (c >= '0' && c <= '9')
        {
            int i = c - '0';
            push(i);
        }
        else
        {
            int i1 = pop();
            int i2 = pop();
            if (c == '+')
            {
                int a=i1 + i2;
                push(a);
            }

            else if (c == '-')
            {
                int b = i2 - i1;
                push(b);
            }

            else if (c == '*')
            {
                int c=i1 * i2;
                push(c);
            }

            else if (c == '/')
            {
                int d=i2 / i1;
                push(d);
            }

            else
            cout<<"Invalid Operator!!";
        }
        
    }
    return pop();
}
int main()
{
    cout << "Enter the POSTFIX expression: ";
    string exp;
    cin >> exp;
    postFix p1;
    cout << "The result of the expression is: " << p1.answer(exp);
    return 0;
}
#include <iostream>
using namespace std;
class postFix
{
private:
    int array[20];
    int top;      

public:
    postFix();
    void push(int x);
    int pop();
    int answer(string &exp); 
};

postFix::postFix()
{
    top = -1;
}
void postFix::push(int x)
{
    top++;
    array[top] = x;
}
int postFix ::pop()
{
    int i = array[top];
    top--;         
    return i;
}
int postFix::answer(string &exp)
{
    for (int i = 0; i < exp.length(); i++)
    {
        char c = exp[i];
        if (c >= '0' && c <= '9')
        {
            int i = c - '0';
            push(i);
        }
        else
        {
            int i1 = pop();
            int i2 = pop();
            if (c == '+')
            {
                int a=i1 + i2;
                push(a);
            }

            else if (c == '-')
            {
                int b = i2 - i1;
                push(b);
            }

            else if (c == '*')
            {
                int c=i1 * i2;
                push(c);
            }

            else if (c == '/')
            {
                int d=i2 / i1;
                push(d);
            }

            else
            cout<<"Invalid Operator!!";
        }
        
    }
    return pop();
}
int main()
{
    cout << "Enter the POSTFIX expression: ";
    string exp;
    cin >> exp;
    postFix p1;
    cout << "The result of the expression is: " << p1.answer(exp);
    return 0;
}