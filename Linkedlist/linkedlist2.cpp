#include <iostream>
using namespace std;

struct node
{
    int RollNo;
    int GPA;
    node *next;
};



void insertAtFront(node **head_ref){
        
        node *newNode = new node;

        cout<<"Enter the RollNumber# which you want to insert at front"<<endl;
        // cout<<head_ref<<" "<<"checking";
        cin>>newNode->RollNo;
        
        cout<<"Enter the CGPA of that RollNumber"<<endl;
        cin>>newNode->GPA;

        newNode->next = *head_ref;
        *head_ref = newNode;
        
}

void print(node *n){
    while (n!=nullptr)
    {
        cout<<n->RollNo<<endl;
        n = n->next;
    }
    

}

int main()
{
node *head = nullptr;

    int a = 0;
    while (a == 0 || a == 1 || a == 2 || a == 3 || a == 4 || a == 5 || a == 6)
    {
        if (a == 1)
        {
            insertAtFront(&head);
        }
        else if (a == 2)
        {
            print(head);
        }
        else if (a == 3)
        {
        }
        else if (a == 4)
        {
        }
        else if (a == 5)
        {
        }
        else
        {
            if (a == 6)
            {
                break;
            }
        }

        cout << "If you want to insert at front type 1 " << endl;
        cout << "If you want to print data press 2 " << endl;
        cout << "If you want to search data press 3 " << endl;
        cout << "If you want to delete data press 4 " << endl;
        cout << "If you want to deleteAll data press 5 " << endl;
        cout << "If you want to end process press 6 " << endl;
        cin >> a;
    }

    return 0;
}