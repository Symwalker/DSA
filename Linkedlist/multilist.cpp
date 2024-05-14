// #include <iostream>
// using namespace std;

// struct Student {
//     int studentID;
//     Student *next;
// };

// struct Course {
//     int courseID;
//     Course *next;
//     Student *start;
// };

// void enrollCourse(Student **ptr, Course **head, int studentID) {

//     int tempID;
//     cout << "Enter the ID of the course that student wants to take: ";
//     cin >> tempID;

//     Course *curr = *head;
//     while (curr != nullptr) {
//         if (curr->courseID == tempID) {
//             Student *temp = curr->start;
//             while (temp != nullptr) {
//                 if (temp->studentID == studentID) {
//                     cout << "The student with ID " << studentID << " is already enrolled in the course with ID " << tempID << endl;
//                     return;
//                 }
//                 temp = temp->next;
//             }

//             Student *lastStudent = curr->start;
//             if (lastStudent != nullptr) {
//                 while (lastStudent->next != nullptr) {
//                     lastStudent = lastStudent->next;
//                 }
//                 lastStudent->next = *ptr;
//             } else {
//                 curr->start = *ptr;
//             }
//             cout << "The student with the id " << studentID << " took the course " << tempID << endl;
//             return;
//         } else {
//             curr = curr->next;
//         }
//     }
//     cout << "Course with ID " << tempID << " not found." << endl;
// }

// void addCourse(Course **head, int courseID) {
//     Course *ptr = (Course*)malloc(sizeof(Course));
//     ptr->courseID = courseID;
//     ptr->next = nullptr;
//     ptr->start = nullptr;
//     if (*head == nullptr) {
//         *head = ptr;
//     } else {
//         Course *curr = *head;
//         while (curr->next != nullptr) {
//             curr = curr->next;
//         }
//         curr->next = ptr;
//     }
// }

// void searchCourse(int toSearchID, Course *head) {
//     Course *curr = head;
//     while (curr != nullptr) {
//         if (curr->courseID == toSearchID) {
//             cout << "The course with the id " << toSearchID << " is in the course list." << endl;
//             break;
//         } else {
//             curr = curr->next;
//         }
//         if (curr == nullptr) {
//             cout << "The course with the id " << toSearchID << " is not in the course list." << endl;
//         }
//     }
// }

// void printCourses(Course *head) {
//     Course *curr = head;
//     while (curr != nullptr) {
//         cout << "Course id: " << curr->courseID << endl;
//         curr = curr->next;
//     }
// }

// void deleteCourse(Course **head, int toDelID) {
//     Course *curr = *head;
//     bool found = false;

//     if (toDelID == (*head)->courseID) {
//         *head = (*head)->next;
//         free(curr);
//         cout << "Course " << toDelID << " deleted." << endl;
//         found = true;
//     } else {
//         Course *prev = *head;
//         curr = (*head)->next;
//         while (curr != nullptr) {
//             if (curr->courseID == toDelID) {
//                 prev->next = curr->next;
//                 free(curr);
//                 cout << "Course " << toDelID << " deleted." << endl;
//                 found = true;
//                 break;
//             }
//             curr = curr->next;
//             prev = prev->next;
//         }
//     }
//     if (!found) {
//         cout << "Course " << toDelID << " is not in the course list." << endl;
//     }
// }

// void addStudent(Course **head, int studentID) {
//     Student *ptr = (Student*)malloc(sizeof(Student));
//     ptr->studentID = studentID;
//     ptr->next = nullptr;

//     enrollCourse(&ptr, head, studentID);
// }

// void searchStudent(Course *head, int toSearchID) {
//     Student *curr = head->start;
//     while (curr != nullptr) {
//         if (curr->studentID == toSearchID) {
//             cout << "The student with the id " << toSearchID << " is in the student list." << endl;
//             break;
//         } else {
//             curr = curr->next;
//         }
//         if (curr == nullptr) {
//             cout << "The student with the id " << toSearchID << " is not in the student list." << endl;
//         }
//     }
// }

// void existingStudent(Course *head, int studentID) {
//     Course *curr = head;
//     while (curr != nullptr) {
//         Student *temp = curr->start;
//         while (temp != nullptr) {
//             if (temp->studentID == studentID) {
//                 enrollCourse(&(curr->start), &head, studentID);
//                 return;
//             }
//             temp = temp->next;
//         }
//         curr = curr->next;
//     }
//     cout << "Student with ID " << studentID << " not found." << endl;
// }

// int main() {
//     Course *head = nullptr;
//     bool result = true;
    
//     while (result) {
//         int answer;
//         cout << "Press \n[1] to insert a course \n[2] to search a course \n[3] to print the list of courses \n[4] to delete a course \n[5] to add a student to a course \n[6] to search a student \n[7] to add an existing student to a course \n[8] to stop the program" << endl;
//         cin >> answer;
//         if (answer == 1) {
//             int courseID;
//             cout << "Enter course id: ";
//             cin >> courseID;
//             addCourse(&head, courseID);
//         } else if(answer == 2) {
//             if (head == nullptr) {
//                 cout << "There are no courses in the list to search." << endl;
//             } else {
//                 int toSearchID;
//                 cout << "Enter course id: ";
//                 cin >> toSearchID;
//                 searchCourse(toSearchID, head);
//             }
//         } else if (answer == 3) {
//             if (head == nullptr) {
//                 cout << "There are no courses in the list to print." << endl;
//             } else {
//                 printCourses(head);
//             }
//         } else if (answer == 4) {
//             if (head == nullptr) {
//                 cout << "There are no courses in the list to delete." << endl;
//             } else {
//                 int toDelID;
//                 cout << "Enter the course id: ";
//                 cin >> toDelID;
//                 deleteCourse(&head, toDelID);
//             }
//         } else if (answer == 5) {
//             int studentID;
//             cout << "Enter the student id: ";
//             cin >> studentID;
//             addStudent(&head, studentID);
//         } else if (answer == 6) {
//                 int toSearchID;
//                 cout << "Enter the student id: ";
//                 cin >> toSearchID;
//                 searchStudent(head, toSearchID);
//         } else if (answer == 7) {
//             int studentID;
//             cout << "Enter student id: ";
//             cin >> studentID;
//             existingStudent(head, studentID);
//         } else {
//             break;
//         }
//     }

//     return 0;
// }




#include <iostream>
using namespace std;

struct StudentNode
{
  int studentID;
  StudentNode *next;
};

struct CourseNode
{
  int courseID;
  StudentNode *studHead;
  CourseNode *next;
};

void addCourse(CourseNode **courseHead, int courseID)
{
  CourseNode *ptr = (CourseNode *)malloc(sizeof(CourseNode));
  ptr->courseID = courseID;
  ptr->studHead = NULL;
  ptr->next = NULL;
  if (*courseHead == NULL)
  {
    *courseHead = ptr;
    cout << "Course is added in a list " << endl;
    return;
  }
  CourseNode *curr = *courseHead;
  while (curr->next != NULL)
  {
    curr = curr->next;
  }
  curr->next = ptr;
  cout << "Course is added in a list " << endl;
}

void deleteCourse(CourseNode **courseHead, int courseID)
{
  if (*courseHead == NULL)
  {
    cout << "Course List is empty " << endl;
    return;
  }
  if (courseID == (*courseHead)->courseID)
  {
    CourseNode *tmp = *courseHead;
    *courseHead = (*courseHead)->next;
    free(tmp);
    cout << "Course SUccessfully Deleted " << endl;
    return;
  }
  CourseNode *prev = *courseHead;
  CourseNode *curr = prev->next;
  while (curr != NULL)
  {
    if (curr->courseID == courseID)
    {
      prev->next = curr->next;
      free(curr);
      cout << "Course Successfully Deleted " << endl;
      return;
    }
    prev = curr;
    curr = curr->next;
  }
  cout << "Course not found in the list " << endl;
}

CourseNode *searchCourse(CourseNode *courseHead, int courseID)
{
  CourseNode *curr = courseHead;
  while (curr != NULL)
  {
    if (curr->courseID == courseID)
      return curr;
    curr = curr->next;
  }
  return NULL;
}

void printCourseList(CourseNode *courseHead)
{
  if (courseHead == NULL)
  {
    cout << "Course list is empty " << endl;
    return;
  }
  CourseNode *curr = courseHead;
  while (curr != NULL)
  {
    cout << "Course " << curr->courseID << endl;
    curr = curr->next;
  }
}

void addStudToCourse(CourseNode **courseHead, int courseID, int studentID)
{
  CourseNode *isCourse = searchCourse(*courseHead, courseID);
  if (isCourse)
  {
    StudentNode *ptr = (StudentNode *)malloc(sizeof(StudentNode));
    ptr->studentID = studentID;
    ptr->next = NULL;
    if (isCourse->studHead == NULL)
    {
      isCourse->studHead = ptr;
      cout << "Student added in Course " << endl;
      return;
    }
    StudentNode *curr = isCourse->studHead;
    while (curr->next != NULL)
    {
      curr = curr->next;
    }
    curr->next = ptr;
    cout << "Student added in Course " << endl;
  }
  else
  {
    cout << "Course not found in the list " << endl;
  }
}

void searchStudInCourse(CourseNode *courseHead, int courseId, int studId)
{
  CourseNode *isCourse = searchCourse(courseHead, courseId);
  if (isCourse)
  {
    if (isCourse->studHead == NULL)
    {
      cout << "0 students enroll in this course" << endl;
      return;
    }
    StudentNode *curr = isCourse->studHead;
    while (curr != NULL)
    {
      if (curr->studentID == studId)
      {
        cout << "Student found in the list" << endl;
      }
      curr = curr->next;
    }
    cout << "Student not found " << endl;
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
    if (isCourse->studHead == NULL)
    {
      cout << "0 students enroll in this course " << endl;
      return;
    }
    if (isCourse->studHead->studentID == studID)
    {
      StudentNode *tmp = isCourse->studHead;
      isCourse->studHead = isCourse->studHead->next;
      free(tmp);
      cout << "The student is successfully deleted from this course" << endl;
    }
    StudentNode *prev = isCourse->studHead;
    StudentNode *curr = isCourse->studHead->next;
    while (curr != NULL)
    {
      if (curr->studentID == studID)
      {
        prev->next = curr->next;
        free(curr);
        cout << "The student is successfully deleted from this course" << endl;
        return;
      }
      prev = curr;
      curr = curr->next;
    }
    cout << "Student not found in this Course " << endl;
  }
  else
  {
    cout << "Course not found in the list " << endl;
  }
}

void deleteStudent(CourseNode **courseHead, int studID)
{
  if ((*courseHead) == NULL)
  {
    cout << "Course list is empty " << endl;
    return;
  }
  CourseNode *currCourse = *courseHead;
  while (currCourse != NULL)
  {
    if (currCourse->studHead == NULL)
    {
      cout << "Student not enroll in course " << currCourse->courseID << endl;
      currCourse = currCourse->next;
      continue;
    }
    if (currCourse->studHead->studentID == studID)
    {
      StudentNode *tmp = currCourse->studHead;
      currCourse->studHead = currCourse->studHead->next;
      free(tmp);
      cout << "The student is successfully deleted from course " << currCourse->courseID << endl;
      currCourse = currCourse->next;
      continue;
    }
    StudentNode *prev = currCourse->studHead;
    StudentNode *curr = prev->next;
    while (curr != NULL)
    {
      if (curr->studentID == studID)
      {
        prev->next = curr->next;
        free(curr);
        cout << "The student is successfully deleted from course " << currCourse->courseID << endl;
        break;
      }
      prev = curr;
      curr = curr->next;
    }
    if (curr == NULL)
      cout << "Student not enroll in Course " << currCourse->courseID << endl;
    currCourse = currCourse->next;
  }
}

void printStudentsInCourse(CourseNode *courseHead, int courseID)
{
  CourseNode *isCourse = searchCourse(courseHead, courseID);
  if (isCourse)
  {
    if (isCourse->studHead == NULL)
    {
      cout << "0 students enroll in this course " << endl;
      return;
    }
    StudentNode *curr = isCourse->studHead;
    while (curr != NULL)
    {
      cout << "Student ID is " << curr->studentID << endl;
      curr = curr->next;
    }
  }
  else
  {
    cout << "Course not in the list" << endl;
  }
}

int main()
{
  CourseNode *courseHead = NULL;
  int n;
  do
  {
    cout << "Enter 1 to Add course " << endl
         << "Enter 2 to Delete course" << endl
         << "Enter 3 to Search course" << endl
         << "Enter 4 to Print courselist" << endl
         << "Enter 5 to Add Student to course" << endl
         << "Enter 6 to Search Student in a course" << endl
         << "Enter 7 to Delete student from course" << endl
         << "Enter 8 to Delete Student" << endl
         << "Enter 9 to Print list of students in course" << endl
         << "Enter 10 to Exit" << endl;
    cin >> n;
    if (n == 1)
    {
      int courseId;
      cout << "Enter course ID which you want to Add in a List : ";
      cin >> courseId;
      addCourse(&courseHead, courseId);
    }
    else if (n == 2)
    {
      int courseId;
      cout << "Alert !!! Deleting course ID will also delete all students data who entroll in this course" << endl;
      cout << "Enter Course ID which you want to Delete from a List : ";
      cin >> courseId;
      deleteCourse(&courseHead, courseId);
    }
    else if (n == 3)
    {
      int courseId;
      cout << "Enter course ID which you want to Search in a list : ";
      cin >> courseId;
      CourseNode *isCourse = searchCourse(courseHead, courseId);
      isCourse ? cout << "Yes Course " << isCourse->courseID << " is in the List " << endl : cout << "Course not in the List " << endl;
    }
    else if (n == 4)
    {
      printCourseList(courseHead);
    }
    else if (n == 5)
    {
      int courseID;
      cout << "Enter course ID in which you want to add student : ";
      cin >> courseID;
      int studID;
      cout << "Enter Student ID : ";
      cin >> studID;
      addStudToCourse(&courseHead, courseID, studID);
    }
    else if (n == 6)
    {
      int courseID;
      int studID;
      cout << "Enter Student ID you want to Search : ";
      cin >> studID;
      cout << "In which course you want to search this student : ";
      cin >> courseID;
      searchStudInCourse(courseHead, courseID, studID);
    }
    else if (n == 7)
    {
      int courseID;
      int studID;
      cout << "Enter Student ID you want to Delete : ";
      cin >> studID;
      cout << "In which course you want to delete this student : ";
      cin >> courseID;
      deleteStudFromCourse(&courseHead, courseID, studID);
    }
    else if (n == 8)
    {
      int studID;
      cout << "Enter Student ID which you want to Delete from all courses : ";
      cin >> studID;
      deleteStudent(&courseHead, studID);
    }
    else if (n == 9)
    {
      int courseID;
      cout << "Enter course ID to show the students entroll in this course : ";
      cin >> courseID;
      printStudentsInCourse(courseHead, courseID);
    }
    else if (n == 10)
    {
      cout << "Exit from multi list !!!" << endl;
    }
    else
    {
      cout << "Invalid!!!" << endl;
    }
  } while (n != 10);
}
