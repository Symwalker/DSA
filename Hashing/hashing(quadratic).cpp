#include <iostream>
using namespace std;

void insertValue(int arr[], int size)
{
    int key;
    cout << "Enter the value you want to enter" << endl;
    cin >> key;
    int index = key % size;
    int hold = index;
    int i = 1;
    while (arr[hold] != -1)
    {
        int prob = i * i;
        int add = index + prob;
        hold = add % size;
        if (index == hold)
        {
            cout << "no space left.." << endl;
            break;
        }
        i++;
    }
    if (arr[hold] == -1)
    {
        arr[hold] = key;
        cout << "Value entered at index " << index << endl;
    }
}
void search(int arr[], int size)
{
    int key;
    cout << "Enter the value you want to enter" << endl;
    cin >> key;
    int index = key % size;
    int hold = index;
    int i = 1;
    while (arr[hold] != key)
    {
        int prob = i * i;
        int add = index + prob;
        hold = add % size;
        if (index == hold)
        {
            cout << "no space left.." << endl;
            break;
        }
        i++;
    }
    if (arr[hold] == key)
    {
        arr[hold] = key;
        cout << "Value entered at index " << hold << endl;
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    cout << "Enter the size of Array" << endl;
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = -1;
    }

    int a = 0;
    while (a == 0 || a == 1 || a == 2 || a == 3 || a == 4 || a == 5 || a == 6)
    {
        if (a == 1)
        {
            insertValue(arr, size);
        }
        else if (a == 2)
        {
            print(arr, size);
        }
        else if (a == 3)
        {
            search(arr, size);
        }
        else if (a == 4)
        {
            // deletee();
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
        cin >> a;
    }

    return 0;
}
