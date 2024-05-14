#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    float cgpa;

    void studentDetails()
    {
        cout << rollNo << endl;
        cout << cgpa << endl;
    }
};

int main()
{
    Student prince;
    Student shayan = {2, 2.5};
    shayan.studentDetails();
    
    // prince.rollNo = 10;
    // prince.cgpa = 2.3;

    // prince.studentDetails();
    // cout<<prince.cgpa<<prince.rollNo<<endl;
}