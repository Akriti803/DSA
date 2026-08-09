#include<iostream>
using namespace std;
class employee{
 public:
     string name;
     float salary;
     employee(string name,float salary){
        this->name=name;
        this->salary=salary;
     }

};
int main()
{
    string name1,name2;
    float salary1,salary2;
    cout<<"enter the name of first employee:";
    getline(cin,name1);
    cout<<"enter the salary of the first employee:"<<endl;
    cin>>salary1;
    cin.ignore();
    employee* ptr1=new employee(name1,salary1);
    cout<<"the name is:"<<ptr1->name<<endl;
    cout<<"the salary of the employee is:"<<ptr1->salary<<endl;
    delete ptr1;
    cout<<"enter the name of second employee:"<<endl;
    getline(cin,name2);
    cout<<"enter the salary of the second employee:"<<endl;
    cin>>salary2;
    employee* ptr2=new employee(name2,salary2);
    cout<<"the name is:"<<ptr2->name<<endl;
    cout<<"the salary of the employee is:"<<ptr2->salary;
    delete ptr2;
}