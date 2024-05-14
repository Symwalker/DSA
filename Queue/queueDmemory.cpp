#include <iostream>
using namespace std;

struct qNode
{
    int value;
    qNode *next;
};
qNode *front;
qNode *rear;

void enQueue()
{

    qNode *current = new qNode();
    cout << "Enter the Value to enQueue" << endl;
    cin >> current->value;
    if (front == nullptr && rear == nullptr){
            front = current;
            rear = current; 
    }
    else{
        rear->next = current;
        rear = current;
    }
    

}

void deQueue()
{
    if (front != nullptr && rear!= nullptr){
        qNode* temp = front;
        front =front->next;
        delete temp;
    }
    else{
        cout<<"There are no elements in the queue left"<<endl;
    }
}

int main()
{
    int a = 0;
    while (a == 0 || a == 1 || a == 2)
    {
        if (a == 1)
        {
            enQueue();
        }
        else if (a == 2)
        {
            deQueue();
        }
        else
        {
            if (a == 3)
            {
                break;
            }
        }
        cout << "if you want to enQueue a value press 1" << endl;
        cout << "if you want to deQueue a value press 2" << endl;
        cout << "if you want to end the process press 3" << endl;
        cin >> a;
    }

    return 0;
}
