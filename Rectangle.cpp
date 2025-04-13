#include "Rectangle.h"
#include <iostream>
rectangle::rectangle(){
    length = 0;
    width = 0;
}
void rectangle::SetValues(float x,float y){
    length = x;
    width  = y;
}
float rectangle::GetValues(){
    return length,width;
}
float rectangle::calculates(float length,float width){
 return length * width;
 
}
rectangle::~rectangle(){

}
