#include <iostream>
#include <vector>
using namespace std;

int main() {

    int courses;

    cout << "Enter number of courses: ";
    cin >> courses;

    vector<float> grades(courses);
    vector<float> credits(courses);

    float totalCredits = 0;
    float totalGradePoints = 0;

    // Input section
    for (int i = 0; i < courses; i++) {
        cout << "\n--- Course " << i + 1 << " ---\n";

        cout << "Enter grade points: ";
        cin >> grades[i];

        cout << "Enter credit hours: ";
        cin >> credits[i];

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];
    }

    // GPA calculation
    float gpa = 0;

    if (totalCredits != 0) {
        gpa = totalGradePoints / totalCredits;
    }

    cout << " RESULT SUMMARY \n";
    for (int i = 0; i < courses; i++) {
        cout << "Course " << i + 1
             << " | Grade: " << grades[i]
             << " | Credit Hours: " << credits[i] << endl;
    }
    cout << "Total Credit Hours : " << totalCredits << endl;
    cout << "Total Grade Points : " << totalGradePoints << endl;
    cout << "Semester GPA       : " << gpa << endl;
    cout << "CGPA               : " << gpa << endl; 
    
   return 0;
}