#include <iostream>
using namespace std;
int main(){
    int integerValue = 0 ;
    int* dynamicInteger = nullptr;
    string stringValues ;
    string* dynamicString = nullptr;
    cout << "Enter integer values: "<< endl;
    cin >> integerValue;
    dynamicInteger = new int;
    *dynamicInteger = integerValue;
    cout << "The value of the dynamically allocated integer is " << *dynamicInteger << endl;
    cout <<"Enter string values: "<<endl;
    cin >> stringValues;
    dynamicString = new string;
    *dynamicString = stringValues;
    cout<< "The value of the dynamically allocated string is "<< *dynamicString << endl;
    delete dynamicInteger;
    delete dynamicString;
}