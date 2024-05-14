#include <iostream>
using namespace std;

struct Bsnode
{
    int data;
    Bsnode *left;
    Bsnode *right;
};

Bsnode *insertion(Bsnode *node, int value)
{
    // Handle the case where the current node is NULL
    if (node == NULL)
    {
        // Correctly allocate a new node and initialize it
        Bsnode *current = new Bsnode();
        current->data = value;
        current->left = current->right = NULL;
        return current; // Return the newly created node
    }
    // Insert the value in the left or right subtree based on its comparison with current node's data
    if (value < node->data)
    {
        node->left = insertion(node->left, value);
    }
    else
    {
        node->right = insertion(node->right, value);
    }
    // Return the node pointer (unchanged for this call)
    return node;
}

void search(Bsnode *node, int tosearch)
{
    if (node == NULL)
    {
        cout << "number not found";
        return;
    }
    if (tosearch == node->data)
    {
        cout << "number found ";
        return;
    }
    if (tosearch < node->data)
    {
        search(node->left, tosearch);
    }
    else
    {
        search(node->right, tosearch);
    }
}

void inOrderTraversal(Bsnode *node)
{
    if (node != NULL)
    {
        inOrderTraversal(node->left);
        cout << node->data << endl;
        inOrderTraversal(node->right);
    }
}

void preOrderTraversal(Bsnode *node)
{
    if (node != NULL)
    {
        cout << node->data << endl;
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }
}

void postOrderTraversal(Bsnode *node)
{
    if (node != NULL)
    {
        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        cout << node->data << endl;
    }
}

Bsnode *min(Bsnode *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL)
    {
        return root;
    }
    min(root->left);
}

Bsnode *max(Bsnode *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->right == NULL)
    {
        return root;
    }
    max(root->right);
}
int main()
{
    int b;
    Bsnode *root = nullptr;
    int a = 0;
    while (a == 0 || a == 1 || a == 2 || a == 3 || a == 4 || a == 5 || a == 6)
    {
        if (a == 1)
        {
            int val;
            cout << "Enter the value" << endl;
            cin >> val;
            root = insertion(root, val);
        }
        else if (a == 2)
        {
            // print();
        }
        else if (a == 3)
        {
            int val;
            cout << "Enter the value you want to search" << endl;
            cin >> val;
            root = insertion(root, val);
            search(root, val);
        }
        else if (a == 4)
        {
            inOrderTraversal(root);
        }
        else if (a == 5)
        {
            preOrderTraversal(root);
        }
        else if (a == 6)
        {
            postOrderTraversal(root);
        }
        else if (a == 7)
        {
            Bsnode *minNode = min(root);
            if (minNode == NULL)
            {
                cout << "Tree is Empty" << endl;
            }
            else
            {
                cout << minNode->data << endl;
            }
        }
        else if (a == 8)
        {
            Bsnode *minNode = max(root);
            if (minNode == NULL)
            {
                cout << "Tree is Empty" << endl;
            }
            else
            {
                cout << minNode->data << endl;
            }
        }
        else
        {
            if (a == 9)
            {
                break;
            }
        }
        cout << "If you want to enter data press 1 " << endl;
        cout << "If you want to print data press 2 " << endl;
        cout << "If you want to search data press 3 " << endl;
        cout << "If you want to tarverse in Order Traversal press 4" << endl;
        cout << "If you want to tarverse in Pre Traversal press 5" << endl;
        cout << "If you want to tarverse in Post Traversal press 6" << endl;
        cout << "Find min press 7" << endl;
        cout << "Find max press 8" << endl;
        // cout << "If you want to deleteAll data press 5" << endl;
        cout << "If you want to end process press 9" << endl;
        cin >> a;
    }
    return 0;
}