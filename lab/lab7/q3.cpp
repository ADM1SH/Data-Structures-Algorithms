#include <iostream>
using namespace std;

struct student{int id, mark;};

int linearSearch(student s[], int size, int key);

int main(){
    student s[5];
    int searchID, index = -1;
    char grade;

    cout << "Please enter students' ID and marks:" << endl;

    for(int i = 0; i < 5; i++){
        cout << "Student " << (i + 1) << " ID: "; cin >> s[i].id;
        cout << "Student " << (i + 1) << " mark: "; cin >> s[i].mark;
    }

    cout << "Enter the student's ID that you want to search: "; cin >> searchID;

    index = linearSearch(s, 5, searchID);

    if(index != -1){
        cout << "Target found" << endl;

        if(s[index].mark >= 80){grade = 'A';}
        else if(s[index].mark >= 60){grade = 'B';}
        else if(s[index].mark >= 50){grade = 'C';}
        else if(s[index].mark >= 40){grade = 'D';}
        else{grade = 'F';}

        cout << "The mark of student " << searchID << " is " << s[index].mark << ". The grade is " << grade << endl;
    }
    else{cout << "Target not found" << endl;}

    return 0;
}

int linearSearch(student s[], int size, int key){
    for(int i = 0; i < size; i++){
        if(s[i].id == key){return i;}
    }
    return -1;
}
