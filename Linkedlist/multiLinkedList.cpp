#include <iostream>
using namespace std;

struct Student {
    int studentID;
    Student *next;
};

struct Course {
    int courseID;
    Course *next;
    Student *start;
};

void addCourse(Course **head, int courseID) {
    Course *ptr = (Course*)malloc(sizeof(Course));
    ptr->courseID = courseID;
    ptr->next = nullptr;
    ptr->start = nullptr;
    if (*head == nullptr) {
        *head = ptr;
    } else {
        Course *curr = *head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = ptr;
    }
}

void addStudent(Course **head, int studentID) {
    Student *ptr = (Student*)malloc(sizeof(Student));
    ptr->studentID = studentID;
    ptr->next = nullptr;

    int tempID;
    cout << "Enter the ID of the course that student wants to take: ";
    cin >> tempID;

    Course *curr = *head;
    while (curr != nullptr) {
        if (curr->courseID == tempID) {
            if (curr->start == nullptr) {
                curr->start = ptr;
                cout << "The student with the id " << ptr->studentID << " took the course " << curr->courseID << endl;
                break;
            } else {
                Student *temp = curr->start;
                while (temp != nullptr) {
                    temp->next = ptr;
                    cout << "The student with the id " << ptr->studentID << " took the course " << curr->courseID << endl;
                    break;
                }
            }
        } else {
            curr = curr->next;
        }
    }
    Student *temp = curr->start;
    while (temp != nullptr) {
        if (temp->studentID) {
            cout << temp->studentID << endl;
        }
        temp = temp->next;
    }
}

int main() {
    Course *head = nullptr;
    bool result = true;
    while (result) {
        int answer;
        cout << "Press \n[1] to insert a course \n[2] to add a student to a course \n[3] to stop the program" << endl;
        cin >> answer;
        if (answer == 1) {
            int courseID;
            cout << "Enter course id: ";
            cin >> courseID;
            addCourse(&head, courseID);
        } else if (answer == 2) {
            int studentID;
            cout << "Enter student id: ";
            cin >> studentID;
            addStudent(&head, studentID);
        } else {
            break;
        }
    }

    return 0;
}