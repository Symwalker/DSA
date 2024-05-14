#include <iostream>
using namespace std;

struct node
{
    int RollNo;
    int GPA;
    node *next;
};

void printRollNo(node *n)
{
    while (n != NULL)
    {
        cout << n->RollNo << endl;
        n = n->next;
    }
}

node *head = nullptr;
void insertion()
{
    node *current = new node();
    cout << "enter roll#" << endl;
    cin >> current->RollNo;
    cout << "enter cGpa" << endl;
    cin >> current->GPA;
    current->next = NULL;

    if (head == NULL)
    {
        head = current;
    }
    else
    {
        node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = current;
    }
}
void search()
{
    cout << "Enter roll no to Search" << endl;
    int rollNumber;
    cin >> rollNumber;
    node *curr = head;

    while (curr != NULL)
    {
        if (curr->RollNo == rollNumber)
        {
            cout << "GPA is :" << curr->GPA << endl
                 << "Roll No is :" << curr->RollNo << endl;
            break;
        }
        else
        {
            curr = curr->next;
        }
    }
    cout << "Not Found";
}

void print()
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << "\n"
             << "roll no: " << curr->RollNo << "\n"
             << "Gpa is " << curr->GPA << endl;
        curr = curr->next;
    }
}

void deletee()
{

    cout << "Enter roll number to delete" << endl;
    int deleteNode;
    cin >> deleteNode;
    node *curr = head, *prev = nullptr;
    bool found = false;
    while (curr != nullptr)
    {
        if (deleteNode == curr->RollNo)
        {
            found = true;
            if (prev == nullptr)
            {
                head = curr->next;
            }
            else
            {
                prev->next = curr->next;
            }
            delete curr;
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    if (!found)
        cout << "Not Found" << endl;
}

void deleteAll()
{
    node *curr = head;
    while (curr != nullptr)
    {
        delete curr;
        curr = curr->next;
    }
    head = nullptr;
    cout << "All Data delete"<<endl<<endl;
}

int main()
{
    int a = 0;
    while (a == 0 || a == 1 || a == 2 || a == 3 || a == 4 || a == 5 || a == 6)
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
            search();
        }
        else if (a == 4)
        {
            deletee();
        }
        else if (a == 5)
        {
            deleteAll();
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