#include <iostream>
using namespace std;

class Account {
private:
    int acno;
    string name;
    long balance;
    string accounttype;

public:
    Account(){

    }

    Account(string a, int b, long c, string d){

        name = a;
        acno = b;
        balance = c;
        accounttype = d;

    }

    ~Account(){
        cout<<"\n\t\t\t\t\tDestructor is called for "<< name <<endl;
    }

    void showaccountinfo(){

        cout<<"\t\t\t\t\t"<<acno<<"   "<<name<<"          "<<accounttype<<"           "<<balance<<endl;
    }


    void Deposit()
    {
        long amt;
        cout << "\t\t\t\t\tEnter Amount U want to deposit? ";
        cin >> amt;
        balance = balance + amt;
    }
    void Withdrawal(){

        long amt;
        cout << "\t\t\t\t\tEnter Amount U want to withdraw? ";
        cin >> amt;
        if (amt <= balance)
            balance = balance - amt;
        else
            cout << "\t\t\t\t\tLess Balance..." << endl;
    }

    void transferfrom(long amt){

        if (amt <= balance)
            balance = balance - amt;
        else
            cout << "\t\t\t\t\tLess Balance..." <<endl;

    }

    void transferto(long amt){

        balance = balance + amt;

    }

};

int main()
{
    int ch;
    long amt;
    int transt, transf;

    Account b1("Fahim", 22471351, 500, "Savings");
    Account b2("Faisal", 22471341, 600, "Current");
    Account b3("Abir", 22471331, 700, "Savings");


    do {
        cout<<"\n\n\n\t\t\t\t\tMAIN MENU";
        cout<<"\n\n\t\t\t\t\t01. ALL ACCOUNT HOLDER LIST";
        cout<<"\n\n\t\t\t\t\t02. DEPOSIT AMOUNT";
        cout<<"\n\n\t\t\t\t\t03. WITHDRAW AMOUNT";
        cout<<"\n\n\t\t\t\t\t04. TRANSFER AMOUNT";
        cout<<"\n\n\t\t\t\t\t05. EXIT";

        cout << "\n\n\t\t\t\t\tPlease input your choice: ";
        cin >> ch;

        switch (ch) {
        case 1:

            cout<<"\n\n\t\t\t\t\tACCOUNT HOLDER LIST\n\n";
            cout<<"\t\t\t\t\t====================================================\n";
            cout<<"\t\t\t\t\tA/c no.      NAME           Type         Balance\n";
            cout<<"\t\t\t\t\t====================================================\n";
            b1.showaccountinfo();
            b2.showaccountinfo();
            b3.showaccountinfo();
            break;

        case 2:
            int dep;

            cout<<"\n\t\t\t\t\t1. Fahim"<<endl;
            cout<<"\n\t\t\t\t\t2. Faisal"<<endl;
            cout<<"\n\t\t\t\t\t3. Abir"<<endl;

            cout<<"\n\n\t\t\t\t\tPlease choose the account you want to deposit (1-3) : ";
            cin>>dep;

            if(dep == 1){

                b1.Deposit();
                break;

            }

            else if(dep == 2){

                b2.Deposit();
                break;

            }

            else if(dep == 3){

                b3.Deposit();
                break;
            }

            break;

        case 3:
            int wit;

            cout<<"\n\t\t\t\t\t1. Fahim"<<endl;
            cout<<"\n\t\t\t\t\t2. Faisal"<<endl;
            cout<<"\n\t\t\t\t\t3. Abir"<<endl;

            cout<<"\n\n\t\t\t\t\tPlease choose the account you want to withdraw from (1-3) : ";
            cin>>wit;

            if(wit == 1){

                b1.Withdrawal();
                break;

            }

            else if(wit == 2){

                b2.Withdrawal();
                break;

            }

            else if(wit == 3){

                b3.Withdrawal();
                break;
            }

            break;

        case 4:

            cout<<"\n\t\t\t\t\t1. Fahim"<<endl;
            cout<<"\n\t\t\t\t\t2. Faisal"<<endl;
            cout<<"\n\t\t\t\t\t3. Abir"<<endl;

            cout<<"\n\n\t\t\t\t\tPlease choose the account you want to transfer from (1-3) : ";
            cin>>transf;

            switch (transf) {

            case 1:
                cout<<"\n\t\t\t\t\t1. Faisal"<<endl;
                cout<<"\n\t\t\t\t\t2. Abir"<<endl;

                cout<<"\n\n\t\t\t\t\tPlease choose the account you want to transfer to (1-2) : ";
                cin>>transt;

                switch (transt){

                case 1:

                    cout<<"\t\t\t\t\tHow much do you want to transfer?";
                    cin>>amt;

                    b1.transferfrom(amt);
                    b2.transferto(amt);

                    break;



                case 2:

                    cout<<"\t\t\t\t\tHow much do you want to transfer?";
                    cin>>amt;

                    b1.transferfrom(amt);
                    b3.transferto(amt);

                    break;

                }
                break;
            case 2:
                cout<<"\n\t\t\t\t\t1. Fahim"<<endl;
                cout<<"\n\t\t\t\t\t2. Abir"<<endl;

                cout<<"\n\t\t\t\t\tPlease choose the account you want to transfer to (1-2) : ";
                cin>>transt;

                switch (transt){

                case 1:

                    cout<<"\t\t\t\t\tHow much do you want to transfer?";
                    cin>>amt;

                    b2.transferfrom(amt);
                    b1.transferto(amt);

                    break;



                case 2:

                    cout<<"\t\t\t\t\tHow much do you want to transfer?";
                    cin>>amt;

                    b2.transferfrom(amt);
                    b3.transferto(amt);

                    break;

                }
                break;

            case 3:
                cout<<"\n\t\t\t\t\t1. Fahim"<<endl;
                cout<<"\n\n\t\t\t\t\t2. Faisal"<<endl;

                cout<<"\n\t\t\t\t\tPlease choose the account you want to transfer to (1-2) : ";
                cin>>transt;

                switch (transt){

                case 1:

                    cout<<"\t\t\t\t\tHow much do you want to transfer?";
                    cin>>amt;

                    b3.transferfrom(amt);
                    b1.transferto(amt);

                    break;


                case 2:

                    cout<<"\t\t\t\t\tHow much do you want to transfer?";
                    cin>>amt;

                    b3.transferfrom(amt);
                    b2.transferto(amt);

                    break;


                }
                break;
                default:
                    cout<<"\t\t\t\t\twrong";
            }
            break;



        case 5:
            cout << "\n\t\t\t\t\tHave a nice day" << endl;
            break;
        default:
            cout << "\n\t\t\t\t\tWrong Option" << endl;
        }
    } while (ch != 5);
    return 0;
}


