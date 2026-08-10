#include<iostream>
using namespace std;
class parent_dog{
public:
    void eat()
    {
        cout<<"the dog is eating";
    }
};
class child_dog:public parent_dog{
public:
   void barking(){
    cout<<"the dog is barking";
   }
};
int main()
{
    child_dog d;
    d.eat();
    cout<<endl;
    d.barking();

}