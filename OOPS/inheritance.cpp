#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rno;
};
class college_student:public student
{
    public:
      string branch;
      void display(){
        cout<<"the name of the student is :"<<name<<endl;
        cout<<"the roll number of the student is:"<<rno<<endl;
        cout<<"the branch of the student is:"<<branch<<endl;
      }
};
int main()
{
    int n;
    cout<<"enter the number of students whose details you want:";
    cin>>n;
    cin.ignore();
    college_student s[n];
    for(int i=0;i<n;i++){
        cout<<"enter the name"<<i+1<<":"<<endl;
        getline(cin,s[i].name);
        cout<<"enter the rno"<<i+1<<":"<<endl;
        cin>>s[i].rno;
        cin.ignore();
        cout<<"enter the branch of the student"<<i+1<<":"<<endl;
        getline(cin,s[i].branch);
    }
    for(int i=0;i<n;i++){
         s[i].display();
    }
    
     
}