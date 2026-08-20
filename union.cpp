#include <iostream>
using namespace std;
union account{
    int amount;
    char name[50];
}u1;
int main()
{
    account u1;
    u1.amount = 1000;
    
}