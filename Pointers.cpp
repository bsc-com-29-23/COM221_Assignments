#include <iostream>
using namespace std;
int main(){
    int intVariable = 20;
    double doubleVariable = 9.0;
    //pointer to an integer
    int* pIntPointer = &intVariable;
    double* pDoublePointer = &doubleVariable;
     
     cout<<"pIntPointer Before : " <<pIntPointer<<endl;
     cout<<"pDoublePointer Before : " <<pDoublePointer<<endl;
     cout << endl;
     //increment pointer by 1
     pIntPointer = pIntPointer + 1;
     pDoublePointer = pDoublePointer + 1;

     cout<<"pIntPointer After : " <<pIntPointer<<endl;
     cout<<"pDoublePointer After : " <<pDoublePointer<<endl;
    return 0;
}