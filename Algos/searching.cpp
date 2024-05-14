#include <iostream>
using namespace std;

void linearSearch(int size, int array[])
{
    cout << "Enter the value you want to search" << endl;
    int toSearch;
    cin >> toSearch;
    bool isFound = false;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == toSearch)
        {
            cout << "Element found at " << i << endl;
            isFound = true;
            break;
        }
    }
    if (!isFound)
    {
        cout << "Element not found!" << endl;
    }
}

void binarySearch(int size, int array[])
{
    cout << "Enter the value you want to search" << endl;
    int toSearch;
    cin >> toSearch;
    int start = 1;
    int end = size;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (toSearch == array[mid]){
            cout<<"Element found at "<<mid<<endl;
            break;
        }
        else if(toSearch>array[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    if (start>end)
    {
       cout << "Element not found!" << endl;
    }
    
}

int main()
{
    int size;
    cout << "Enter the size of an array" << endl;
    cin >> size;
    int values[size];
    cout << "enter the values of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        values[i] = value;
    }

    int a;
    while (true)
    {
        cout << "If you want to search through Linear Search Press 1." << endl;
        cout << "If you want to search Binary Search Press 2." << endl;
        cin >> a;
        if (a == 1)
        {
            linearSearch(size, values);
        }
        else if (a == 2)
        {
            binarySearch(size, values);
        }
        else
        {
            if (a == 6)
            {
                break;
            }
        }

    }
    return 0;
}