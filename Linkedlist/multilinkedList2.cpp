#include <iostream>
using namespace std;

struct StudNode
{
    int studId;
    StudNode *next;
};
struct CourseNode
{
    int courseId;
    CourseNode *next;
    StudNode *studHead;
};

void addCourse(CourseNode **courseHead, int courseID)
{
    CourseNode *courseNod = new CourseNode();
    courseNod->courseId = courseID;
    courseNod->next = nullptr;
    courseNod->studHead = nullptr;
    if (*courseHead == nullptr)
    {
        *courseHead = courseNod;
        cout << "Course is added in a list " << endl;
        return;
    }
    CourseNode *curr = *courseHead;
    while (curr->next != nullptr)
    {
        curr = curr->next;
    }
    curr->next = courseNod;
    cout << "Course is added in a list " << endl;
}

void printCourseList(CourseNode *courseHead)
{
    if (courseHead == NULL)
    {
        cout << "Course list is empty " << endl;
        return;
    }
    CourseNode *curr = courseHead;
    while (curr != nullptr)
    {
        cout << "Course " << curr->courseId << endl;
        curr = curr->next;
    }
}

void deleteCourse(CourseNode **courseHead, int courseID)
{
    if (*courseHead == nullptr)
    {
        cout << "No course in a list" << endl;
        return;
    }
    if ((*courseHead)->courseId == courseID)
    {
        CourseNode *temp = *courseHead;
        *courseHead = (*courseHead)->next;
        delete temp;
        cout << "Course SUccessfully Deleted " << endl;
        return;
    }
    CourseNode *prev = *courseHead;
    CourseNode *curr = (*courseHead)->next;
    while (curr != nullptr)
    {
        if (curr->courseId == courseID)
        {
            prev->next = curr->next;
            delete curr;
            cout << "Course Successfully Deleted " << endl;
            return;
        }
        prev = curr;
        curr = curr->next;
    }
    cout << "Course not found in the list " << endl;
}

CourseNode *searchCourse(CourseNode *courseHead, int courseId)
{
    CourseNode *curr = courseHead;
    while (curr != nullptr)
    {
        if (curr->courseId == courseId)
        {
            return curr;
        }
        curr = curr->next;
    }
    return nullptr;
}

void addStuToCourse(CourseNode **courseHead, int courseID, int studID)
{
    CourseNode *isCourse = searchCourse(*courseHead, courseID);
    if (isCourse)
    {
        StudNode *sTNode = new StudNode();
        sTNode->studId = studID;
        sTNode->next = nullptr;
        if (isCourse->studHead == nullptr)
        {
            isCourse->studHead = sTNode;
            cout << "Student added in Course " << endl;
            return;
        }
        StudNode *curr = isCourse->studHead;
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }
        curr->next = sTNode;
        cout << "Student added in Course " << endl;
    }
    else
    {
        cout << "Course not found in the list " << endl;
    }
}

void deleteStudFromCourse(CourseNode **courseHead, int courseID, int studID)
{
    CourseNode *isCourse = searchCourse(*courseHead, courseID);
    if (isCourse)
    {
        if (isCourse->studHead == nullptr)
        {

            return;
        }

        StudNode *prev = nullptr;
        StudNode *curr = isCourse->studHead;
        bool isFound = false;
        while (curr != nullptr)
        {
            if (curr->studId == studID)
            {
                isFound = true;
                break;
            }
            prev = curr;
            curr = curr->next;
        }
        if (!isFound)
        {
            cout << "Student not found in course." << endl;
            return;
        }
        if (prev == nullptr)
        {
            isCourse->studHead = curr->next; 
        }
        else
        {
            prev->next = curr->next;
        }
        delete curr;
    }
}

int main()
{

    CourseNode *coursehead = nullptr;
    int a = 0;
    while (a == 0 || a == 1 || a == 2 || a == 3 || a == 4 || a == 5 || a == 6 || a == 7)
    {
        if (a == 1)
        {
            int courseId;
            cout << "Enter course ID which you want to Add in a List : " << endl;
            cin >> courseId;

            addCourse(&coursehead, courseId);
        }
        else if (a == 2)
        {
            printCourseList(coursehead);
        }
        else if (a == 3)
        {
            int courseId;
            cout << "Enter course ID which you want to Add in a List : " << endl;
            cin >> courseId;
            CourseNode *isCourse = searchCourse(coursehead, courseId);
            isCourse ? cout << "Course found " << isCourse->courseId << " is in the List " << endl : cout << "not found" << endl;
        }
        else if (a == 4)
        {
            int courseId;
            cout << "Alert !!! Deleting course ID will also delete all students data who entroll in this course" << endl;
            cout << "Enter Course ID which you want to Delete from a List : ";
            cin >> courseId;
            deleteCourse(&coursehead, courseId);
        }
        else if (a == 5)
        {
            int courseId;
            int studID;
            cout << "Enter the student ID : " << endl;
            cin >> studID;
            cout << "Enter course ID which you want to Add in a List : " << endl;
            cin >> courseId;
            addStuToCourse(&coursehead, courseId, studID);
        }
        else if (a == 7)
        {
            int courseID;
      int studID;
      cout << "Enter Student ID you want to Delete : ";
      cin >> studID;
      cout << "In which course you want to delete this student : ";
      cin >> courseID;  
      deleteStudFromCourse(&coursehead, courseID, studID);
            
        }
        else
        {
            if (a == 6)
            {
                break;
            }
        }

        cout << "If you want to Add course press 1 " << endl;
        cout << "If you want to print all courses press 2 " << endl;
        cout << "If you want to search course press 3 " << endl;
        cout << "If you want to delete course press 4 " << endl;
        cout << "If you want to Add student to a Course press 5 " << endl;
        cout << "If you want to end process press 6 " << endl;
        cout << "If you want to Delete student from course press 7 " << endl;
        cin >> a;
    }

    return 0;
}