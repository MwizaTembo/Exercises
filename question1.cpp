#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
  srand(time(0));
//to generate random numbers from 0-11 
  int daysUntilExpiration = rand() % 12;
//checking duration remaining for subscriptions
  if (daysUntilExpiration <= 10){
    cout << "Your subscription will expire soon. Renew now!";
  }
  else if(daysUntilExpiration <= 5){
    cout << "Your subscription expires in " << daysUntilExpiration << endl;
    cout << "Renew now and save 10%!" << endl;
  }
else if(daysUntilExpiration == 1){
cout << "Your subscription expires within a day" << endl;
cout << "Renew now and save 20%!";
}
else if(daysUntilExpiration == 0){
    cout << "Your subscription expired";
}
else{
    "You have an active subscription";
}
return 0;
}