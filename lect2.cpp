#include <iostream>
using namespace std;

class company{
    private:
        string name;
        int GST;
        double turnover;
    public:
       void company::getData()
       {
         cout<<"Enter the company details ";
         cin>>name>>GST>>turnover;
       }  
       void displayData(){
        cout<<"Company name: "<<name<<endl;
        cout<<"Company GST: "<<GST<<endl;
        cout<<"Company turnover: "<<turnover<<endl;
       }

    };
 int main() {
   company obj;
   obj.getData();
   obj.displayData();
}