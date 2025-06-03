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
        employeeID=0;
        employeeName="";
        salary=0.0;
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
    void setID(int a){employeeID=a;}
    void setName(string b){employeeName=b;}
    void setSalary(double c){salary=c;}

    int getID(){return employeeID;}
    string getName(){return employeeName;}
    double getsalary(){return salary;}

    void showEmployeeDetails()
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

    Salesman(int id, string name, double sal,string sA,string pN,int mID) : Employee(id, name, sal)
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
        Employee::showEmployeeDetails();
        cout<<"Area Name: "<<salesArea<<endl;
        cout<<"Product Name: "<<productName<<endl;
        cout<<"Manager ID: "<<managerID<<endl;
    }

};
class Manager: public Employee
{
public:
    string territoryName;
    Manager (int a,string b,double c,string tName): Employee(a,b,c)
    {
        territoryName=tName;
    }
    ~Manager()
    {

    }
    void setTerritoryName(string d){territoryName=d;}
    string getTerritoryName(){return territoryName;}
    void showManagerDetails()
    {
        Employee::showEmployeeDetails();
        cout<<"Territory Name: "<<territoryName<<endl;
    }
    void incrementSalary(Salesman *salesman,double amount)
    {
        double currentSalary = salesman->getsalary();
        double newSalary = currentSalary + amount;
        salesman->setSalary(newSalary);
    }

};


int main()
{
    cout<<"##For Manager##"<<endl;
    Manager meraz(1, "Shishu", 10000, "Gulshan 1");
    meraz.showManagerDetails();
    cout<<"##For Salesman##"<<endl;

    Salesman Abdullah(2,"Abdullah",2000,"Gulshan","weed",1);

    Abdullah.showEmployeeDetails();

    meraz.incrementSalary(&Abdullah, 1000);

    Abdullah.showEmployeeDetails();

    return 0;
}
