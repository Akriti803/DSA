#include<iostream>
using namespace std;
class car{
 public:
     string brand;
     float price;
     car(string brand,float price){
        this->brand=brand;
        this->price=price;
     }

};
int main()
{
    string b;
    float p;
    cout<<"enter the brand name:";
    getline(cin,b);
    cout<<"enter the price of the car:"<<endl;
    cin>>p;
    car c1(b,p);
    car* ptr=new car(b,p);
    cout<<"the brand is:"<<c1.brand<<endl;
    cout<<"the price of the car is:"<<c1.price;
    delete ptr;
}