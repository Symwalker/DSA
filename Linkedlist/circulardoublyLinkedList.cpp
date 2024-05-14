#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};
node *tail = nullptr;
void insertion()
{
    node *newNode = new node();
    cout << "enter the data" << endl;
    cin >> newNode->data;
    if (tail == nullptr)
    {
        tail = newNode;
        newNode->next = tail; // points to itself circular nature;
        newNode->prev = tail; // points to itself circular nature;
    }

    newNode->next = tail->next; // newNode next point to head of the list
    tail->next->prev = newNode; // newNode prev point old tail
    newNode->prev = tail;       // newNode prev point old tail
    tail->next = newNode;
    tail = newNode;
}

void deletee()
{
    node *curr = tail->next;
    int val;
    bool found = false;
    cout << "Enter the value node you want to delete";
    cin >> val;
    do
    {
        if (curr->data == val)
        {
            found =true;
            break;
        }
        curr = curr->next;
    } while (curr != tail->next);
    if (!found)
    {
        cout<<"no values were found with this "<<val<<endl;
        return;
    }
    
    if (curr == curr->next){ // Only one node in the list
        tail = nullptr;
    }
    else
    {
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        if (curr == tail)
        {
        tail = curr->prev;
        }
    }
    delete curr;
    cout<<"node value";
}

void print()
{
    node *ptr = tail->next;
    do
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != tail->next);
}
int main()
{
    int a = 0;
    while (a == 0 || a == 1 || a == 2 || a == 3 || a == 4 || a == 5 || a == 6 || a == 7)
    {
        if (a == 1)
        {
            insertion();
        }
        else if (a == 2)
        {
            print();
        }
        else if (a == 3)
        {
        }
        else if (a == 4)
        {
            deletee();
        }
        else if (a == 5)
        {
        }
        else if (a == 7)
        {
            // insertAfterPos();
        }
        else
        {
            if (a == 6)
            {
                break;
            }
        }

        cout << "If you want to enter data press 1 " << endl;
        cout << "If you want to print data press 2 " << endl;
        cout << "If you want to search data press 3 " << endl;
        cout << "If you want to delete data press 4 " << endl;
        cout << "If you want to deleteAll data press 5 " << endl;
        cout << "If you want to end process press 6 " << endl;
        cout << "If you want to enter data at position you want press 7 " << endl;
        cin >> a;
    }

    return 0;
}