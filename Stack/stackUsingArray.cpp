#include <iostream>
using namespace std;

void push(int arr[], int &top, int size)
{
    cout << "enter the value to be stored" << "\n";
    int input;
    cin >> input;
    if (top == size-1)
    {
        cout << "stack overflow" << "\n";
        return;
    }
    else
    {
        arr[++top] = input;
        // top++;
    }
}
void pop(int arr[], int &top, int size)
{
    
    if (top<0)
    {
        cout << "stack under flow" << "\n";
    }
    else
    {
       int poppedValue = arr[top];  
        arr[top--] = -1;
        // top--;
        cout << "Popped value: " << poppedValue << endl;
    }
}

int main()
{
    int size;
    cout << "enter length of stack " << "\n";
    cin >> size;
    int arr[size];
    int top = -1;
    int a = 0;
    while (a == 0 || a == 1 || a == 2)
    {
        if (a == 1)
        {

            push(arr, top, size);
        }
        else if (a == 2)
        {
            pop(arr, top, size);
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
