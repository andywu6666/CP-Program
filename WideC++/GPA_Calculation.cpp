#include <iostream>
#include <string>

using namespace std;

class Course {
public:
    string name;
    int units;
    int score;

    Course() : name(""), units(0), score(0) {}
    
    Course(string n, int u, int s) : name(n), units(u), score(s) {}

    char getLetterGrade() const {
        if (score >= 90) return 'A';
        if (score >= 80) return 'B';
        if (score >= 70) return 'C';
        if (score >= 60) return 'D';
        return 'E';
    }

    double getGradePoint() const {
        if (score >= 90) return 4.0;
        if (score >= 80) return 3.0;
        if (score >= 70) return 2.0;
        if (score >= 60) return 1.0;
        return 0.0;
    }
};

class Student {
private:
    string name;
    Course* courses;
    int courseCount;
    int capacity;

    void expandArray() {
        capacity *= 2;
        Course* temp = new Course[capacity];
        for (int i = 0; i < courseCount; i++) {
            temp[i] = courses[i];
        }
        delete[] courses;
        courses = temp;
    }

public:
    Student(string n) {
        name = n;
        capacity = 2;
        courseCount = 0;
        courses = new Course[capacity];
    }

    ~Student() {
        delete[] courses;
    }

    void addCourse(string courseName, int units, int score) {
        if (courseCount >= capacity) {
            expandArray();
        }
        courses[courseCount] = Course(courseName, units, score);
        courseCount++;
    }

    void print() const {
        cout << "Student: " << name << endl;
        double totalGradePoints = 0.0;
        int totalUnits = 0;

        for (int i = 0; i < courseCount; i++) {
            cout << "Course: " << courses[i].name 
                 << " Credit: " << courses[i].units 
                 << " Score: " << courses[i].score 
                 << " Grade: " << courses[i].getLetterGrade() << endl;
            
            totalGradePoints += courses[i].getGradePoint() * courses[i].units;
            totalUnits += courses[i].units;
        }

        double gpa = 0.0;
        if (totalUnits > 0) {
            gpa = totalGradePoints / totalUnits;
        }
        
        cout << "GPA: " << gpa << endl;
        cout << "---------------------" << endl;
    }
};

int main()
{
    Student student1("Henry");
    student1.addCourse("History", 3, 86);
    student1.addCourse("C++", 5, 70);
    student1.print();

    Student student2("Juan");
    student2.addCourse("Chem", 5, 60);
    student2.addCourse("Calc", 3, 55);
    student2.addCourse("Eng", 3, 90);
    student2.addCourse("PE", 1, 78);
    student2.print();

    system("pause");
    return 0;
}