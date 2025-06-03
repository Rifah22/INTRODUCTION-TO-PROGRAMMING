#include<iostream>
using namespace std;
class Product{
private:
int pid;
string name;
float price;
public:
static int nextID;
Product(){
nextID+=5;
pid=nextID;
cout<<"Empty Product ID:"<<pid<<endl;
}
Product(string n,float p){
nextID+=10;
pid=nextID;
name=n;
price=p;
cout<<"Parameterized Product ID:"<<pid<<endl;
}
~Product(){
cout<<"Deleted:"<<pid<<","<<name<<","<<price<<"Tk."<<endl;
}
void setProduct(string n,float p){
name=n;
price=p;
}
};
int Product::nextID=1;
int main(){
Product p1,p2("Marker",40);
Product p3;
p3.setProduct("Pencil",5);
p1.setProduct("Pen",10);
}
