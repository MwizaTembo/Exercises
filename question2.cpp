#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
  srand(time(0));
//to generate random numbers from 0-11 
  int daysUntilExpiration = rand() % 12;

  switch(daysUntilExpiration){
    case 0:
    cout << "Your subscription expired";
    break;

    case 1:
    cout << "Your  subscription expires within a day" << endl;
break;
    case 2:
    cout << "Your subscription expires in "<< daysUntilExpiration << endl;
    cout << "Renew now and save 10%!";
break;

    case 3:
cout << "Your subscription expires in "<< daysUntilExpiration << endl;
cout << "Renew now and save 10%!";
break;

    case 4:
cout << "Your subscription expires in "<< daysUntilExpiration << endl;
cout << "Renew now and save 10%!";
break;

    case 5:
cout << "Your subscription expires in "<< daysUntilExpiration << endl;
cout << "Renew now and save 10%!";
break;

    case 6:
cout << "Your subscription will expire soon. Renew now!" << endl;
break;

    case 7:
cout << "Your subscription will expire soon. Renew now!" << endl;
break;

    case 8:
cout << "Your subscription will expire soon. Renew now!" << endl;
break;

    case 9:
cout << "Your subscription will expire soon. Renew now!" << endl;
break;

    case 10:
cout << "Your subscription will expire soon. Renew now!" << endl;
break;

    case 11:
cout << "You have an active subscription" << endl;
break;

  }

return 0;

}