#include <iostream>
using namespace std;

int Square(int value1, int value2){
    int area = value1 * value2;
    cout << "Area of the square is " << area << endl;
    return area;
}

int Rectangle(int param1, int param2){
    int area2 = param1 * param2;
    cout << "Area of rectangle is " << area2 << endl;
    return area2;
}

int Triangle(int value3, int value4){
    int area3 = 0.5 * value3 * value4;
    cout << "Area of the triangle is " << area3 << endl;
    return area3;
}


int main(){
    int choice;
    int length, height, radius, width, base;
    int res1, res2, res3;


    while(true){
    
    cout << "Please select the area of the shape to calculate" << endl;
    cout << "1. Square\n 2.Rectangle\n 3.Triangle\n 4.Quit Program" << endl;
    cout << "Enter selection";
    cin >> choice;
    
    if (choice == 1){
      cout << "Enter lenght";
      cin >> length;
      cout << "Enter height";
      cin >> height;
res1 = Square(length, height);

    }
    else if(choice == 2){
        cout << "Enter width";
        cin >> width;
        cout << "Enter length";
        cin >> length;
        res2 = Rectangle(width, length);

    }

    else if(choice == 3){
        cout << "Enter base";
        cin >> base;
        cout << "Enter height";
        cin >> height;
        res3 = Triangle(base, height);
    }
    else if(choice == 4){
        cout << "Exiting program...";
        break;
    }
    else{
        cout << "Invalid output";
    }
}
}