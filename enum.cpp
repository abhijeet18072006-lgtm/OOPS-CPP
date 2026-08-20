#include <iostream>
using namespace std;
int main(){
    enum days{sun,mon,tue,wed,thu,fri,sat};
    days day1,day2;
    day1 = sun;
    day2=fri;
    cout<<day1<<"\t"<<day2;
    if(day1>day2)
    {
        cout<<"day 1 comes after day 2";
    }
    else{
        cout<<"day 1 comes before day 2";
    }
    return 0;
}