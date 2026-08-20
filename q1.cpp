#include<iostream>
using namespace std;
class Employee{
private:
    int emp_id;
    char emp_name;
    float salary;

public:
    void getDetails(){
        cout<<"Abhijeet";
        cin>> emp_name;
    }

    void display(){
        cout<<"Name of the employee is ";
    }
};
int main(){
    Employee entity;
    cout<<"Name of the employee is ";
    entity.getDetails();
    entity.display();
   
}