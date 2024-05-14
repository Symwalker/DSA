#include <iostream>
using namespace std;
#include <algorithm>

struct Records{
    int RollNum;
    float GPA;
    Records * next;
};

Records * head = nullptr;
void insert(){
    Records * ptr = (Records *) malloc(sizeof(Records));
    cout << "Enter Roll number"<<endl;
    cin >> ptr -> RollNum;
    cout << "Enter GPA" <<endl;
    cin >> ptr -> GPA;
    ptr -> next = NULL; 
    if(head == NULL){
        head = ptr;
    }else{
        Records * curr = head;
        while(curr -> next != NULL){
            curr = curr->next;
        }

        curr -> next = ptr;

    }
}

void search(){
    int tosearch;
    cout << "Enter Rollnumber to be searched" << " \n";
    cin >> tosearch;
    Records * curr = head;
    while(curr != NULL){
        if(curr-> RollNum == tosearch){
            cout << "Detail of enter roll number is" <<"\n" << "\n" <<"roll no: "<< curr->RollNum << "Gpa is " << curr->GPA<< endl;
            break;
        }else{
            curr = curr->next;
        }
    }
}
void print(){
    Records * curr = head;
    while(curr != NULL){
        // if(curr-> RollNum == tosearch){
            cout << "Detail of enter roll number is" <<"\n" << "\n" <<"roll no: "<< curr->RollNum << "Gpa is " << curr->GPA<< endl;
            // break;
        // }else{
             curr = curr->next;
        // }
    }
}
int main(){
    int a=1;
    while (a==1 || a==2 || a==3 || a==4)
    {
        if(a==1){
        insert();
        }else if(a==2){
        search();
        }else if(a==3){
            print();
        }else if (a==4){
            // code 
            break;
        }
        cout << "If you want to enter data press 1 " << endl;
    cout << "If you want to search data press 2 " << endl;
    cout << "If you want to print list press 3 " << endl;
    cout << "If you want to end process press 4 " << endl;

    cin >> a;
    }
    
 return 0;
}
