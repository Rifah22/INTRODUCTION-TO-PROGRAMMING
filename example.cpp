#include<iostream>
using namespace std;
class androidOS{
private:
    string osVersion;
public:
    AndroidOS (string v){
    cout<<"AndroidOS initialized"<<endl;
    osVersion=v;
    }
    ~AndroidOS(string v){
    cout<<"AndroidOS:"<<osVersion<<"Expired"<<endl;
    }
    void showAndroidOS(){
    cout<<"AndroidOS Version:"<<Version<<endl;
    }
};
class OxygenOS:public AndroidOS{
public:
    ColorOS(string v):AndroidOS(v){
    cout<<"ColorOS:"<<v<<endl;
    }
};
class ColorOS:virtual public OxygenOS{
public:
    ColorOS(string v):AndroidOS(v){
    cout<<"ColorOS:"<<v<<endl;
    }
};
class MergedOS:public OxygenOS,public ColorOS{
public:
    MergedOS(string v):ColorOS(v),OxygenOS(v){
    cout<<"MergedOS:"<<v<<endl;
    }
};
int main(){
MergedOS mos ("12.5.1");
Mos->showAndroidOS();
return 0;
}
