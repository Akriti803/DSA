#include<iostream>
using namespace std;
class employee{
public:
    string name;
    int salary;
    employee(string name,int salary){
        this->name=name;
        this->salary=salary;
    }
    employee()
    {

    }
};
int main()
{
  string name;
  int salary,n;
  cout<<"enter the number of employees whose deatisl you want to print:";
  cin>>n;
  cin.ignore();
  employee e[n];;
  for(int i=0;i<n;i++){
    cout<<"enter the name os the employee"<<i+1<<":";
    getline(cin,e[i].name);
    cout<<"enter the salary of the employee:"<<i+1<<":";
    cin>>e[i].salary;
    cin.ignore();
  }
  cout<<endl;
  cout<<"the details of the employees are as follows:"<<endl;
  for(int i=0;i<n;i++){
    cout<<"the name is:"<<e[i].name<<","<<"the salary is :"<<e[i].salary<<endl;
  }
}