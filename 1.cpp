#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int roll_no;
};
int main()
{
    student obj1;
    obj1.name="JAMSHAD";
    obj1.roll_no=2;
    cout<<"Name : "<<obj1.name<< " Roll : "<<obj1.roll_no<<endl;
    return 0;
}
