#include<iostream>
using namespace std;
class student
{
public:
    string name,adress,phone_no;
    int roll_no;
    student(string n,int r,string ph,string ad)
    {
        name=n;
        roll_no=r;
        adress=ad;
        phone_no=ph;
    }
};
int main()
{
    student obj1("JAMSHAD",2,"01000000000","X ROAD,Y"),obj2("SHOFI",1,"01000000001","Y ROAD,X");
    cout<<"Name : "<<obj1.name<<" Adress : "<<obj1.adress<< " Roll : "<<obj1.roll_no<<" Phone :"<<obj1.phone_no<<endl;
    cout<<"Name : "<<obj2.name<<" Adress : "<<obj2.adress<< " Roll : "<<obj2.roll_no<<" Phone :"<<obj2.phone_no<<endl;
    return 0;
}
