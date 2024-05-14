#include <iostream>
using namespace std;

// void insert(int arr[], int size)
// {
//     int key;
//     cout << "enter the value you want to enter" << endl;
//     cin >> key;
//     int ind = key % size;
//     int hold = ind;
//     int filled = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] != -1)
//             filled++;
//     }

//     // If the array is full, notify and return
//     if (filled == size)
//     {
//         cout << "Hash array is full." << endl;
//         return;
//     }
//     while (arr[ind] != -1)
//     {
//         if (ind == size)
//         {
//             ind = 0;
//         }
//         else
//         {
//             ind++;
//         }
//     }
//     arr[ind] = key;

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }

void insertValue(int arr[], int size)
{
    int key;
    cout << "Enter the value you want to enter" << endl;
    cin >> key;
    int index = key % size;
    int hold = index;
    while (arr[index] != -1)
    {
        index += 1;
        if (index == hold)
        {
            cout << "no space left.." << endl;
            break;
        }
        if (index == size)
        {
            index = 0;
        }
    }
    if (arr[index] == -1)
    {
        arr[index] = key;
    }
}

void search(int arr[], int size)
{
    int key;
    cout << "Enter te value you want to search " << endl;
    cin >> key;
    int index = key % size;
    int hold = index;
    while (arr[index] != key)
    {
        int i = 1;
        index = index + i;
        if (index == hold)
        {
            cout << "not found";
            break;
        }
        if (index == size)
        {
            index = 0;
        }
    }
    if (arr[index] == key)
    {
        cout << "value entered is " << key << endl
             << "it is found at index number :  " << index << endl;
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
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i];
    // }
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
        // cout << "If you want to delete data press 4 " << endl;
        // cout << "If you want to deleteAll data press 5 " << endl;
        // cout << "If you want to end process press 6 " << endl;
        cin >> a;
    }

    return 0;
}

// int main()
// {
//     cout << "Enter the size of Array" << endl;
//     int size;
//     cin >> size;
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = -1;
//     }

//     // for (int i = 0; i < size; i++)
//     // {
//     //     cout << arr[i];
//     // }

//     int a = 0;
//     while (a == 0 || a == 1 || a == 2 || a == 3 || a == 4 || a == 5 || a == 6)
//     {
//         if (a == 1)
//         {
//             insert(arr, size);
//         }
//         else if (a == 2)
//         {
//             search(arr, size);
//         }
//         else if (a == 3)
//         {
//             // search();
//         }
//         else if (a == 4)
//         {
//             // deletee();
//         }
//         else if (a == 5)
//         {
//             // deleteAll();
//         }
//         else
//         {
//             if (a == 6)
//             {
//                 break;
//             }
//         }

//         cout << "If you want to enter data press 1 " << endl;
//         cout << "If you want to print data press 2 " << endl;
//         // cout << "If you want to search data press 3 " << endl;
//         // cout << "If you want to delete data press 4 " << endl;
//         // cout << "If you want to deleteAll data press 5 " << endl;
//         // cout << "If you want to end process press 6 " << endl;
//         cin >> a;
//     }

//     return 0;
// }