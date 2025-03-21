#include <iostream>
using namespace std;

int main(){
    int number;

cout << "Enter an integer value between 5 and 10";

cin >> number;
//to chceck if input needed is within specified range
while(number < 5 || number > 10){
cout << "Sorry, you entered an invalid number, please try again" << endl;
cin >> number;
}
cout << "Your output value "<< "(" <<number << ")" << " has been accepted" << endl;
}