#include <iostream>

using namespace std;

int main(){
        
        int total {0};
        int num1 {0}, num2 {0}, num3 {0};
        const int count {3};
        
        cout << "Enter 3 integers seperated by spaces: ";
        cin >> num1 >> num2 >> num3;
        
        total = num1 + num2 + num3;
        
        double average {0.0};
        average = static_cast<double>(total) / count;               //The static_cast function will change the int (total) to a double
        
        cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
        cout << "The sum of the numbers is : " << total << endl;
        cout << "The average of the numbers is:  " << average;
        
        cout << endl;
        
        
        return 0;
}