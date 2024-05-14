#include <iostream>
using namespace std;

struct node
{
    node *prev;
    int data;
    node *next;
};

void insertion(node **head)
{
    node *newNode = new node();
    cout << "enter the value" << endl;
    cin >> newNode->data;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    if (*head == nullptr)
    {
        *head = newNode;
    }
    else
    {
        node *ptr = *head;
        while (ptr->next != nullptr)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
        newNode->prev = ptr;
    }
}

void deleNode(node **head)
{
    cout << "Enter the node you want to delete" << endl;
    int deleVal;
    cin >> deleVal;
    node *curr = *head;
    if (curr->data==deleVal)
    {
        *head = curr->next;
        delete curr;
    }
    else
    {
        node*temp2;
        while (curr->next != nullptr)
        {
            if (curr->data == deleVal)
            {
                temp2 = curr->prev;
                temp2->next= curr->next;
                curr->next->prev = temp2;
                delete curr;
            }
            curr = curr->next;
        }
    }
}

void print(node **head)
{
    node *ptr = *head;
    while (ptr != nullptr)
    {
        // cout << ptr->prev->data << " previous data" << endl;
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    int a = 0;
    node *head = nullptr;
    while (a == 0 || a == 1 || a == 2 || a == 3 || a == 4 || a == 5 || a == 6)
    {
        if (a == 1)
        {
            insertion(&head);
        }
        else if (a == 2)
        {
            print(&head);
        }
        else if (a == 3)
        {
            // search();
        }
        else if (a == 4)
        {
            deleNode(&head);
        }
        else if (a == 5)
        {
            // deleteAll();
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
        cin >> a;
    }

    return 0;
}