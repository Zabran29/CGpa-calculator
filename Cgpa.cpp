#include<iostream>
using namespace std;

int main(){


cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                    GPA & CGPA Calculator (Developed by Zabran)             "<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    cout<<"            MENU:"<<endl;
    cout<<"                   1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"                   2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
    cout<<"                   3. Method that is applied here for calclating GPA & CGPA"<<endl;
    cout<<"                   4. Exit Application"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;



    float marks, points, hours, totalp = 0, totalh = 0, gpa, cgpa = 0;
    string course;

    int choice;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the number of courses: ";
            int numCourses;
            cin >> numCourses;

            for (int i = 0; i < numCourses; i++) {
                //cout << "number of course " << numCourses;
                // cout << "i = " << i;
                cout << "Enter Course #" << i + 1 << " name: ";
                cin >> course;

                cout << "Enter " << course << " Credit Hours: ";
                cin >> hours;

                mark:
                cout << "Enter " << course << "'s marks from 60 to 100: ";
                cin >> marks;

                if (marks >= 60 && marks <= 100) {
                    if (marks >= 95) {
                        points = hours * 5.00;
                    } else if (marks >= 90) {
                        points = hours * 4.75;
                    } else if (marks >= 85) {
                        points = hours * 4.50;
                    } else if (marks >= 80) {
                        points = hours * 4.00;
                    } else if (marks >= 75) {
                        points = hours * 3.50;
                    } else if (marks >= 70) {
                        points = hours * 3.00;
                    } else if (marks >= 65) {
                        points = hours * 2.50;
                    } else if (marks >= 60) {
                        points = hours * 2.00;
                    }
                    totalp += points;
                    totalh += hours;
                } else {
                    cout << "Please enter correct Marks between 60 and 100." << endl;
                    goto mark;
                }
            }
            gpa = totalp / totalh;
            cout << "Your GPA is: " << gpa << endl;
            break;

        case 2:
        
            int totalSemesters;
            cout << "Enter the total number of semesters: ";
            cin >> totalSemesters;

            for (int i = 0; i < totalSemesters; i++) {
                cout << "Enter CGPA for Semester #" << i + 1 << ": ";
                float semesterCGPA;
                cin >> semesterCGPA;

                cout << "Enter Total Credit Hours for Semester #" << i + 1 << ": ";
                float semesterCreditHours;
                cin >> semesterCreditHours;

                cgpa += semesterCGPA * semesterCreditHours;
                totalh += semesterCreditHours;
            }

            cgpa = cgpa / totalh;
            cout << "Your CGPA is: " << cgpa << endl;
            break;

        case 3:
            cout << "Explanation for the method used to calculate GPA & CGPA." << endl;
            break;

        case 4:
            cout << "Exiting application." << endl;
            break;

        default:
            cout << "Invalid choice. Exiting application." << endl;
            break;
    }

    return 0;
}