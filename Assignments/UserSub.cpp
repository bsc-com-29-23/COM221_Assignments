#include <iostream>
#include <cstdlib>   //for rand and srand function
#include <ctime>   //for time function


using namespace std;

int main(){
    srand(time(0));
    int daysUntilExpiration = rand()  % 12;
    cout<< daysUntilExpiration <<endl;
        if (daysUntilExpiration == 0){

       cout << "Your subscription has expired."<<endl;
     } 
     else if (daysUntilExpiration == 1){
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%" << endl;
     }
      else if (daysUntilExpiration <= 5 ){
            cout << "Your subscription expires in "<< daysUntilExpiration << endl;
            cout << "Renew now and save 10%!" << endl;
         }
   else if(daysUntilExpiration <= 10){
        cout << "Your subscription will expire soon. Renew now!" << endl;
     }
    else{
        cout << "You have an active subscription."<<endl;                                           
     
    return 0;
    
}
    }