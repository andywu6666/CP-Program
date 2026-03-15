#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string firstName;
    char initial;
    string lastName;

public:
    Employee(string f, char i, string l) 
        : firstName(f), initial(i), lastName(l) {}

    virtual ~Employee() {}

    virtual void print() const = 0;
};

class SalaryEmployee : public Employee {
private:
    double salary;

public:
    SalaryEmployee(string f, char i, string l, double s)
        : Employee(f, i, l), salary(s) {}

    void print() const override {
        cout << "Salary Employee:" << endl;
        cout << firstName << " " << initial << ". " << lastName << endl;
        cout << "Salary : " << salary << endl;
        cout << "Payment: " << salary << endl << endl;
    }
};

class HourlyEmployee : public Employee {
private:
    int hoursWorked;
    double hourlyRate;

public:
    HourlyEmployee(string f, char i, string l, int h, double r)
        : Employee(f, i, l), hoursWorked(h), hourlyRate(r) {}

    void print() const override {
        cout << "Hourly Employee:" << endl;
        cout << firstName << " " << initial << ". " << lastName << endl;
        cout << "Hours worked: " << hoursWorked << endl;
        cout << "Rate: " << hourlyRate << endl;
        cout << "Payment: " << (hoursWorked * hourlyRate) << endl << endl;
    }
};

int main()
{
    // Handling a salary employee
    SalaryEmployee john("John", 'A', "Pape", 2500);
    john.print();

    // Handling an hourly employee
    HourlyEmployee lucie("Lucie", 'C', "Bush", 70, 20.0);
    lucie.print();

    system("pause");
    return 0;
}