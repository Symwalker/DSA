#include <iostream>
using namespace std;

struct sNode
{
    int value;
    sNode *next;
};

sNode *top = nullptr;

void push()
{
    sNode *current = new sNode();
    cout << "Enter the Value" << endl;
    cin >> current->value;
    current->next = top; // jo node banay gi uske next me top ko rkhde ga
    top = current;       // phir yeh top me jo last node bani he uska address rkhe ga
}

void pop()
{
    if (top == nullptr)
    {
        cout << "StackunderFlow cannot POP" << endl;
    }
    else
    {
        sNode *temp = top;
        cout << top->value << endl;
        top = top->next;
        delete temp;
    }
}

int main()
{
    int a = 0;
    while (a == 0 || a == 1 || a == 2)
    {
        if (a == 1)
        {
            push();
        }
        else if (a == 2)
        {
            pop();
        }
        else
        {
            if (a == 3)
            {
                break;
            }
        }
        cout << "if you want to push a value press 1" << endl;
        cout << "if you want to pop a value press 2" << endl;
        cout << "if you want to end the process press 3" << endl;
        cin >> a;
    }

    return 0;
}
