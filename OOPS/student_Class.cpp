#include<iostream>
using namespace std;
class Student{
  public:
      string name;
      float marks;
      Student(){

      }
      Student(string name,float marks){
           this->name=name;
           this->marks=marks;
      }
      
};
int main()
{
    string name;
    float marks;
    Student s1;
    Student s1(name,marks);
    Student *ptr=&s1;
    cout<<"enter the name:"<<endl;
    getline(cin,ptr->name);
    cout<<"enter the marks:"<<endl;
    cin>>ptr->marks;
    cout<<"the name of the student is :"<<s1.name<<endl;
    cout<<"the marks of the student is :"<<s1.marks;
   
}