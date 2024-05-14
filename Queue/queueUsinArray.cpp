#include <iostream>
using namespace std;

const int SIZE = 5; // Define the size of the queue
int front = -1;
int rear = -1;

void enQueue(int queue[], int size, int value)
{
    if (front == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = value;
    }
    else if ((rear == size - 1 && front == 0) || (rear + 1 == front))
    {
        cout << "Queue is full !!!" << endl;
    }
    else
    {
        if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        queue[rear] = value;
    }
}

int deQueue(int queue[], int size)
{
    if (front == -1)
    {
        cout << "Queue is empty !!!" << endl;
        return -1;
    }
    int value = queue[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == size - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
    return value;
}

int main()
{
    int queue[SIZE];
    int a = 0;

    while (true)
    {
        cout << "if you want to push a value press 1" << endl;
        cout << "if you want to pop a value press 2" << endl;
        cout << "if you want to end the process press 3" << endl;
        cin >> a;

        if (a == 1)
        {
            int value;
            cout << "Enter the value to push: ";
            cin >> value;
            enQueue(queue, SIZE, value);
        }
        else if (a == 2)
        {
            int value = deQueue(queue, SIZE);
            if (value != -1)
            {
                cout << "Popped value: " << value << endl;
            }
        }
        else if (a == 3)
        {
            break;
        }
        else
        {
            cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
        }
    }

    return 0;
}
