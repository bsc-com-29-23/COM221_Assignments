#include <iostream>
using namespace std;
int main(){
    //Enter degree in fahrenheit
    double fahrenheit;
    cout<<"Enter a degree in Fehrenheit: ";
    cin>>fahrenheit;
    //obtain a celsius degree
    double celsius = (5.0/9) * (fahrenheit - 32);
    //Display result
    cout<<"fahrenheit " <<fahrenheit<<" is "<<
    celsius <<" in celsius" <<endl;
    return 0;
}