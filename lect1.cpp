#include <iostream>
using namespace std;
class book{
private:
    int price; //data member
public:
     void getPrice()
     {
       cout<<"Enter the price of Book ";
       cin>>price;  
     }
     void display() ///member function
     {
        cout<< "Price is : "<<price;
     }

};
int main(){
     book obj;  //here obj is the object of the class book
     cout<<"Memory used by the class is : "<<sizeof(obj);
     obj.getPrice();
     obj.display();

}