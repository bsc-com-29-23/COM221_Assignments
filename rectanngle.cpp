#include <iostream>
#include "Rectangle.h"
using namespace std;
int main(){
    rectangle rectangleObject = rectangle() ;
    float x, y, area;
    cout <<"Enter the length of a rectangle: "<< endl; 
    cin >> x ;
    cout <<"Enter the width of a rectangle: "<< endl; 
    cin >> y;
    rectangleObject.SetValues(x,y);
    cout << rectangleObject.GetValues()<<endl;
    cout << rectangleObject.GetValues()<<endl;
cout << "Area of the rectangle is "<<rectangleObject.calculates(x,y)<<endl;
    return 0;

}