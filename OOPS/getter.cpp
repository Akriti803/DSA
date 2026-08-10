#include<iostream>
using namespace std;
class student{
    public:
     string name;
     int rno;
    student()
    {
        name="";
        rno=0;
        marks=0;
    }
     student(string name,int rno,float marks){
        this->name=name;
        this->rno=rno;
        this->marks=marks;
     }
     void setmarks(float m){//to take the input
        marks=m;
     }
     void getmarks(){
        cout<<"the marks is:"<<marks;
     }
     private:
       float marks;
};
int main()
{
    string name;
    int rno,n;
    float marks;
    cout<<"enter the number:";
    cin>>n;
    cin.ignore();
    student s1[n];
    for(int i=0;i<n;i++){
        cout<<"enter the name of the student:"<<i+1<<":"<<endl;
        getline(cin,s1[i].name);
        cout<<"the rno of the student is:"<<i+1<<":"<<endl;
        cin>>s1[i].rno;
        cout<<"enter the marks:"<<i+1<<":"<<endl;
        cin>>marks;
        s1[i].setmarks(marks);//calling the setter function
        cin.ignore();
    }
    cout<<endl;
    cout<<"the details of the students are as follows:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"the name is:"<<s1[i].name<<","<<"the rno is:"<<s1[i].rno<<","<<endl;
        s1[i].getmarks();
        cout<<endl;
    }
}