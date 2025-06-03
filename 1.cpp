#include <iostream>
using namespace std;

class Employee
{
protected:
    int employeeID;
    string employeeName;
    double salary;
public:
    Employee()
    {
    }
    Employee(int id,string name,double sal)
    {
        employeeID=id;
        employeeName=name;
        salary=sal;
    }
    ~Employee()
    {

    }
    void setID(int id){employeeID=id;}
    void setName(string name){employeeName=name;}
    void setSalary(double sal){salary=sal;}

    int getID(){return employeeID;}
    string getName(){return employeeName;}
     double getSalary(){return salary;}

    void displayEmployeeInformation()
    {
        cout<<"Employee ID: "<<employeeID<<endl;
        cout<<"Employee Name: "<<employeeName<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }
};
class Salesman: public Employee
{
public:
    string salesArea,productName;
    int managerID;
    Salesman(int id,string name,double sal,string sA,string pN,int mID): Employee(id,name,sal)
      {
        salesArea=sA;
        productName=pN;
        managerID=mID;
    }
    ~Salesman()
    {

    }
    void showSalesmanDetails()
    {
        Employee::displayEmployeeInformation();
        cout<<"Manager ID: "<<managerID<<endl;
        cout<<"Sales Area: "<<salesArea<<endl;
        cout<<"Product Name: "<<productName<<endl;
    }
};
class Manager: public Employee
{
public:
 string areaName;
    Manager(int id,string name,double sal,string aN): Employee(id,name,sal)
    {
        areaName=aN;
    }
    ~Manager()
    {

    }
    void showManagerDetails()
    {
        Employee::displayEmployeeInformation();
        cout<<"Area Name:"<<areaName<<endl;
    }
    void incrementSalary(Salesman *s,double amount)
    {
        double currentSalary=s->getSalary();
        double newSalary=currentSalary+amount;
        s->setSalary(newSalary);
    }
};
int main()
{
    cout<<"*For Manager*"<<endl;
    Manager m(01,"Meraz Uddin",5000,"Badda");
    m.showManagerDetails();
    cout<<endl;
    cout<<"*For Salesman*"<<endl;
    Salesman r(02,"Rahim",3000,"Gulshan","Potato Chips",01);
    r.showSalesmanDetails();
    cout<<endl;
    m.incrementSalary(&r,2000);
    cout<<"*After Increment*"<<endl;
    r.showSalesmanDetails();

    return 0;
}
