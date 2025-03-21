#include <iostream>

using namespace std;

int main(){
   
//declaring and initializing array
string arr1 [] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C325", "B179"};

//getting size of array
int size = sizeof(arr1) / sizeof(arr1[0]);

//iterating through each array
for(int i = 0; i < size; i++){
    if(arr1[i][0] == 'B'){
        cout << arr1[i] << endl;
    }
}


return 0;



}