#include<iostream>
using namespace std;
class Account{
protected:
    string AccHolderName;
    int AccNo;
    double balance;
    float interestRate;
public:
   Account() {
   }
   Account(string AHN,int AN,double b,float i){
   AccHolderName=AHN;
   AccNo=AN;
   balance=b;
   interestRate=i;
   }
~Account(){
}
string setAccHolderName(string AHN){
    AccHolderName=AHN;
}
int setAccNo(int AN){
    AccNo=AN;
}
double setbalance(double b){
    balance=b;
}
float setinterestRate(float i){
    interestRate=i;
}
string getAccHolderName(string AHN){return AccHolderName;}
int getAccNo(int AN){return AccNo;}
double getbalance(double b){return balance;}
float getinterestRate(float i){return interestRate;}
void showDetails(){
cout<<"AccHolderName:"<<AccHolderName<<endl;
cout<<"AccNo:"<<AccNo<<endl;
cout<<"balance:"<<balance<<endl;
cout<<"interstRate:"<<interestRate<<endl;
}
};
class Savings:public Account{
protected:
    double amount,deposit,withdraw;
public:
    Savings(string AHN,int AN,double b,float i,double a):Account(string AHN,int AN,double b,float i){
     amount=a;
     deposit=amount++;
     witdraw=amount--;
~Savings(){
}
void showSavingsAccountDetails(){
cout<<"deposit:"<<deposit<<endl;
cout<<"withdraw:"<<withdraw<<endl;
}
    }
};
class FixedDeposit :public Account{
protected:
    int tenureYear;
    int installmentAmount;
    int Total,autoInstallmentFrom;
public:
    FixedDeposit(string AHN,int AN,double b,float i,int t,int iA):Account(string AHN,int AN,double b,float i){
    tenureYear=t;
    installmentAmount=iA;
    Total Installment Amount=3*Amount;
    autoInstallmentFrom=Total installmentAmount-Savings
    FixedDeposit=autoInstallmentFrom++;
~FixedDeposit(){
}
void showFixedDepositDetails(){
cout<<"Total Installment Amount:"<<Total Installment Amount<<endl;
cout<<"autoInstallmentFrom:"<<autoInstallmentFrom<<endl;
cout<<"FixedDeposit:"<<FixedDeposit<<endl;
}
    }
};
int main(){
cout<<"**Savings Account**"<<endl;
Savings("Tihana",001234567,3000,5.1%)
cout<<"**Fixed Deposit Account**"<<endl;
Fixed Deposit("Tihana",001234567,3000,5.1%,3,5000)
return 0;
}
