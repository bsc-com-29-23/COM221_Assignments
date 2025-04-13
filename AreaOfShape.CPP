#include <iostream>
#include <cmath>
using namespace std;
int base, height , length, width, side1,side2;

double areaOfTriangle(double base,double height){
   return (0.5) * base * height; 
}
int areaOfRectangle(int length, int width){
    return length * width;

}
int areaOfSquare( int side1,int side2){
    return side1 * side2;
     
}
int main(){
    
    int selection;
    
    do{
        cout << "Please select the area of the shape to calculate " << endl;
        cout << "1. Square"<< endl;
        cout << "2. Rectangle"<< endl;
        cout << "3. Triangle"<< endl;
        cout << "4. Quit program"<< endl;
        cout << "Enter selection"<< endl;
        cin >>selection;
    if(selection == 1){
        int side1,side2;
        cout << "Enter the side1 "<<endl;
        cin >> side1;
        cout << "Enter the side2"<<endl;
        cin >> side2;
        cout << "The area of a square is "<< areaOfSquare(side1,side2) << endl;
        }

    else if (selection == 2){
        int length,width;
         cout << "Enter the length "<<endl;
        cin >> length;
        cout << "Enter the width"<<endl;
        cin >> width;
        cout << "The area of a Rectangle is "<< areaOfRectangle(length,width) << endl;
        }
    else if(selection == 3){
        double base,height;
        cout << "Enter the base "<<endl;
        cin >> base;
        cout << "Enter the height"<<endl;
        cin >> height;
        cout << "The area of a Triangle is "<< areaOfTriangle(base,height) << endl;

    }
    else
    cout << "Your input was " << selection << " which is an invalid input,Please enter a valid input!!!"<< endl;
    }
    
    while (selection = false);
  

    

return 0;
}