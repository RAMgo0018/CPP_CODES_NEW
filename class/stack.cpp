#include <iostream>
using namespace std;
class PostfixEvaluator
{
private:
    int array[20];
    int top; 

public:
    PostfixEvaluator();        
    void push(int value);      
    int pop();                 
    int evaluate(string exp);  
};
PostfixEvaluator::PostfixEvaluator()
{
    top = -1; 
}
void PostfixEvaluator::push(int value)
{
    top++;           
    array[top] = value;
}
int PostfixEvaluator::pop()
{
    int value = array[top]; 
    top--;                  
    return value;           
}
int PostfixEvaluator::evaluate(string exp)
{
    for (int i = 0; i < exp.length(); i++)
    {
        char current = exp[i];
        if (current >= '0' && current <= '9')
        {
            int number = current - '0'; 
            push(number);              
        }
        else
        {
            int operand1 = pop();
            int operand2 = pop();

            if (current == '+')
            {
                push(operand2 + operand1); 
            }
            else if (current == '-')
            {
                push(operand2 - operand1);
            }
            else if (current == '*')
            {
                push(operand2 * operand1); 
            }
            else if (current == '/')
            {
                push(operand2 / operand1); 
            }
            else
            {
                cout << "Invalid operator" << endl;
                return -1;
            }
        }
    }
    return pop();
}
int main()
{
    
    cout << "Enter a POSTFIX expression ";
    string expression;
    cin >> expression; 
    PostfixEvaluator evaluator;
    cout << "The result of the expression is: " << evaluator.evaluate(expression) << endl;

    return 0;
}