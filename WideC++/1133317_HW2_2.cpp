#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string firstName;
    char initial;
    string lastName;

public:
    Employee(string f, char i, string l) : firstName(f), initial(i), lastName(l) {}
    virtual ~Employee() {}
    virtual void print() const = 0; 
};

class SalaryType {
protected:
    double salary;
public:
    SalaryType(double s) : salary(s) {}
};

class HourlyType {
protected:
    int hoursWorked;
    double hourlyRate;
public:
    HourlyType(int h, double r) : hoursWorked(h), hourlyRate(r) {}
};

class SalaryEmployee : public Employee, public SalaryType {
public:
    SalaryEmployee(string f, char i, string l, double s)
        : Employee(f, i, l), SalaryType(s) {}

    void print() const override {
        cout << firstName << " " << initial << ". " << lastName << endl;
        cout << "Salary Employee" << endl;
        cout << "Salary: " << salary << endl;
        cout << "Total Payment: " << salary << endl << endl;
    }
};

class HourlyEmployee : public Employee, public HourlyType {
public:
    HourlyEmployee(string f, char i, string l, int h, double r)
        : Employee(f, i, l), HourlyType(h, r) {}

    void print() const override {
        cout << firstName << " " << initial << ". " << lastName << endl;
        cout << "Hourly Employee" << endl;
        cout << "Hours worked: " << hoursWorked << endl;
        cout << "Rate: " << hourlyRate << endl;
        cout << "Total Payment: " << (hoursWorked * hourlyRate) << endl << endl;
    }
};

class SalaryHourlyEmployee : public Employee, public SalaryType, public HourlyType {
public:
    SalaryHourlyEmployee(string f, char i, string l, double s, int h, double r)
        : Employee(f, i, l), SalaryType(s), HourlyType(h, r) {}

    void print() const override {
        double extraPay = 0;
        if (hoursWorked > 180) {
            extraPay = (hoursWorked - 180) * hourlyRate;
        }
        double totalPayment = salary + extraPay;

        cout << firstName << " " << initial << ". " << lastName << endl;
        cout << "Salary Hourly Employee" << endl;
        cout << "Salary : " << salary << endl;
        cout << "Hours worked: " << hoursWorked << endl;
        cout << "Rate: " << hourlyRate << endl;
        cout << "Total Payment: " << totalPayment << endl << endl;
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
    // Handling a salary-hourly employee
    SalaryHourlyEmployee ann("Ann", 'A', "White", 3500, 230, 20.0);
    ann.print();
    system("pause");
    return 0;
}