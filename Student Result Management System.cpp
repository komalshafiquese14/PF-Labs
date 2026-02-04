#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Global variables
int MAX_STUDENTS, SUBJECTS;
string* studentName;
int* rollNumber;
int** marks;
int* totalMarks;
float* percentage;
int studentCount = 0;

// Function prototypes
void menu();
void addStudent();
void viewAllResults();
void searchByRoll();
void updateMarks();
void deleteStudent();
void calculateTotalPercentage(int index);
void displayStudent(int index);

int main()   // main Function 
 {
    cout << "Enter the number of students you want to record: ";
    cin >> MAX_STUDENTS;
    while(MAX_STUDENTS <= 0){
        cout << "Please enter a valid number (>0): ";
        cin >> MAX_STUDENTS;
    }

    cout << "Enter the number of subjects per student: ";
    cin >> SUBJECTS;
    while(SUBJECTS <= 0){
        cout << "Please enter a valid number (>0): ";
        cin >> SUBJECTS;
    }

    studentName = new string[MAX_STUDENTS];
    rollNumber = new int[MAX_STUDENTS];
    marks = new int*[MAX_STUDENTS];
    for(int i = 0; i < MAX_STUDENTS; i++)
        marks[i] = new int[SUBJECTS];
    totalMarks = new int[MAX_STUDENTS];
    percentage = new float[MAX_STUDENTS];

    int choice;
    do {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addStudent(); break;
            case 2: viewAllResults(); break;
            case 3: searchByRoll(); break;
            case 4: updateMarks(); break;
            case 5: deleteStudent(); break;
            case 6: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }

        cout << "\n-----------------------------------\n";

    } while(choice != 6);

    for(int i = 0; i < MAX_STUDENTS; i++)
        delete[] marks[i];
    delete[] marks;
    delete[] studentName;
    delete[] rollNumber;
    delete[] totalMarks;
    delete[] percentage;

    return 0;
}

void menu() {
    cout << "\n===== RESULT MANAGEMENT SYSTEM =====\n";
    cout << "1. Add Student Result\n";
    cout << "2. View All Results\n";
    cout << "3. Search Result by Roll Number\n";
    cout << "4. Update Marks\n";
    cout << "5. Delete Student\n";
    cout << "6. Exit\n";
    cout << "===================================\n";
}

void addStudent() {
    if(studentCount >= MAX_STUDENTS) {
        cout << "Maximum student limit reached.\n";
        return;
    }

    cout << "\nEnter details for student #" << studentCount + 1 << ":\n";

    while(true) {
        cout << "Roll Number: ";
        cin >> rollNumber[studentCount];
        if(cin.fail() || rollNumber[studentCount] <= 0){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid roll number. Try again.\n";
        } else break;
    }
    cin.ignore();

    cout << "Name: ";
    getline(cin, studentName[studentCount]);

    for(int i = 0; i < SUBJECTS; i++) {
        while(true) {
            cout << "Marks in Subject " << (i+1) << ": ";
            cin >> marks[studentCount][i];
            if(cin.fail() || marks[studentCount][i] < 0 || marks[studentCount][i] > 100) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid marks! Enter 0-100.\n";
            } else break;
        }
    }

    calculateTotalPercentage(studentCount);
    studentCount++;
    cout << "Student added successfully!\n";
}

void calculateTotalPercentage(int index) {
    int sum = 0;
    for(int i = 0; i < SUBJECTS; i++)
        sum += marks[index][i];
    totalMarks[index] = sum;
    percentage[index] = sum / (float)SUBJECTS;
}

// ? Final display function
void displayStudent(int index) {
    cout << left << setw(10) << rollNumber[index]
         << setw(25) << studentName[index];

    for(int i = 0; i < SUBJECTS; i++)
        cout << setw(8) << marks[index][i];

    cout << setw(10) << totalMarks[index];

    // Combine percentage + % in a string for perfect alignment
    char percStr[10];
    sprintf(percStr, "%.2f%%", percentage[index]);
    cout << setw(10) << percStr << endl;
}

void viewAllResults() {
    if(studentCount == 0) {
        cout << "No student records found.\n";
        return;
    }

    cout << "\n================= STUDENT RESULT SHEET =================\n";
    cout << left << setw(10) << "Roll No"
         << setw(25) << "Name";

    for(int i = 0; i < SUBJECTS; i++)
        cout << setw(8) << "Sub" <<(i+1);

    cout << setw(10) << "Total"
         << setw(10) << "Percentage\n";

    cout << string(10 + 25 + SUBJECTS*8 + 10 + 10, '-') << endl;

    for(int i = 0; i < studentCount; i++)
        displayStudent(i);
}

void searchByRoll() {
    if(studentCount == 0) {
        cout << "No student records found.\n";
        return;
    }

    int roll;
    cout << "Enter roll number to search: ";
    cin >> roll;

    bool found = false;
    for(int i = 0; i < studentCount; i++) {
        if(rollNumber[i] == roll) {
            cout << "\nStudent Found:\n";
            displayStudent(i);
            found = true;
            break;
        }
    }

    if(!found)
        cout << "No student found with roll number " << roll << ".\n";
}

void updateMarks() {
    if(studentCount == 0) {
        cout << "No student records found.\n";
        return;
    }

    int roll;
    cout << "Enter roll number to update marks: ";
    cin >> roll;

    bool found = false;
    for(int i = 0; i < studentCount; i++) {
        if(rollNumber[i] == roll) {
            cout << "Enter new marks for " << studentName[i] << ":\n";
            for(int j = 0; j < SUBJECTS; j++) {
                while(true) {
                    cout << "Marks in Subject " << (j+1) << ": ";
                    cin >> marks[i][j];
                    if(cin.fail() || marks[i][j] < 0 || marks[i][j] > 100) {
                        cin.clear();
                        cin.ignore(1000, '\n');
                        cout << "Invalid marks! Enter 0-100.\n";
                    } else break;
                }
            }
            calculateTotalPercentage(i);
            cout << "Marks updated successfully!\n";
            found = true;
            break;
        }
    }

    if(!found)
        cout << "Student with roll number " << roll << " not found.\n";
}

void deleteStudent() {
    if(studentCount == 0) {
        cout << "No student records found.\n";
        return;
    }

    int roll;
    cout << "Enter roll number to delete: ";
    cin >> roll;

    bool found = false;
    for(int i = 0; i < studentCount; i++) {
        if(rollNumber[i] == roll) {
            for(int j = i; j < studentCount-1; j++) {
                rollNumber[j] = rollNumber[j+1];
                studentName[j] = studentName[j+1];
                for(int k = 0; k < SUBJECTS; k++)
                    marks[j][k] = marks[j+1][k];
                totalMarks[j] = totalMarks[j+1];
                percentage[j] = percentage[j+1];
            }
            studentCount--;
            cout << "Student deleted successfully!\n";
            found = true;
            break;
        }
    }

    if(!found)
        cout << "Student with roll number " << roll << " not found.\n";
}

