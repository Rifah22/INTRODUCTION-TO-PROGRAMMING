#include<iostream>
using namespace std;

class androidOS{

private:
    string osversion;

public:
    androidOS(string v)
    {
        cout<<" aaa inn"<<endl;
        osversion=v;
    }

    void showAndroidOS()
    {
        cout<<" ando version"<<osversion<<endl;
    }



};


class OxygenOS:virtual public androidOS{
public:
    OxygenOS(string v):androidOS(v)
    {
        cout<<"oxygen "<<v<<endl;
    }

};

class ColorOS:virtual public androidOS{
public:
    ColorOS(string v):androidOS(v)
    {
        cout<<" colour"<<endl;
    }

};

class MergedOS:public OxygenOS,public ColorOS{

public:
    MergedOS(string v):ColorOS(v),OxygenOS(v),androidOS(v){


    cout<<"mer "<<v<<endl;}

};

int main()
{


    MergedOS mos("1256");
    mos.showAndroidOS();
    return 0;
}
