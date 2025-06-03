#include<iostream>
using namespace std;
//first declaration of class,Person
class Person {
public:
    string name;
    int age;
    Person(string n, int a){
        name=n;
        age=a;
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }

};
//Employee class declaration,inherited Person class
class Employee : virtual public Person {
private:
    float salary;
public:
	Employee(string n,int a,float s):Person(n,a) {
	       salary =s;
	cout<<"Salary:"<<salary<< endl;
	}
};
//Faculty class declaration,inherited Person and Employee class
class Faculty :  public Employee {
private:
    string department;
public:
	Faculty(string n,int a,float s,string d):Employee( n, a, s),Person(n,a) {
	        department = d;
	cout<<"Department:"<<department<< endl;
	}
};
//Officer class declaration,inherited Person and Employee class
class Officer :  public Employee {
private:
    string section;

public:
    Officer(string n,int a,float s,string se):Employee(n, a, s),Person(n,a) {
             section = se;
		cout<<"Section:"<<section<< endl;
   }
};
//Student class declaration,inherited Person class
class Student : virtual public Person {
public:
    string ID;
public:
	Student(string n,int a, string i):Person(n , a) {
	          ID = i;
		cout<<"ID:"<<ID <<endl;
	}
};
//scholarshipStudent class declaration,inherited Person and Student class
class scholarshipStudent : virtual public Student {
private:
    float cgpa;
    int percentage;
public:
	scholarshipStudent(string n,int a,string i,float c,int p): Student(n , a ,i),Person(n,a) {
             cgpa = c;
             percentage=p;
        cout<<"scholarshipStudent CGPA:"<<cgpa<<endl;
		cout<<"scholarshipStudent Percentage:"<<percentage<<"%"<< endl;
	}
};
//TA class declaration,inherited Person,Employee and Student class
class TA : public Employee,public Student  {
private:
     string degree;
public:
	TA(string n,int a,float s, string i,string d):Employee(n,a,s),Student(n,a,i),Person(n,a){
	        degree = d;
		cout<<"Degree:"<<degree<< endl;
	}

};

int main(){
//Person called
cout<<"Person:"<<endl;
Person n("Rifah",20);
cout<<"\n"<<endl;
//Employee called,Person inherited
cout<<"Employee:"<<endl;
 Employee s("Simar",28,30000) ;
cout<<"\n"<<endl;
//Student called,Person inherited
 Student i("Rima",25,"22-47154-1");
cout<<"\n"<<endl;
//scholarshipStudent called,Person and Student inherited
 scholarshipStudent c("Roma",29,"22-45678-3",3.75,50);
cout<<"\n"<<endl;
//Faculty called,Person and Employee inherited
 Faculty f("Alisha", 30,45000,"CSE");
 cout<<"\n"<<endl;
 //Officer called,Person and Employee inherited
 Officer o("Aditi",25,40000,"Account");
cout<<"\n"<<endl;
//TA called,Person,Employee and Student
 TA t("Sanzida",15,20000,"22-45678-5","BCSE");
cout<<"\n"<<endl;


 return 0;

}


