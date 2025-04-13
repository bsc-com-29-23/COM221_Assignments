#include <iostream>
using namespace std;
int main(){
    int integerValue;
    cout <<"Enter an integer value between 5 and 10: " << endl; 
    
    cin >> integerValue;
    
    int i;
    while(i < integerValue){
            
     if(integerValue >= 5 || integerValue >=10){
      cout<<"Your input value "<< integerValue << " has been accepted"<<endl;
     }
    else if(integerValue < 5 || integerValue < 10) {
         cout << "Sorry,you entered an invalid number,please try again"<<endl;

        cout << "You entered " << integerValue << ". please enter a number between 5 and 10."<< endl;
    }

     i++;
        break;
    }

}