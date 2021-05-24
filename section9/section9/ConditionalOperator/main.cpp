#include <iostream>

using namespace std;

int main(){
        // how to write a Conditional Operator in c++
        
        // (cond_expr) ? expr1 : expr2
        // cond_expr        This is a boolean expression
        // if cond_expr is true then you get expr 1
        // ig cond_expr is False then you ger expr 2
        
        //This is a Ternary operator
        
//        int num {};
//        
//        cout << "Enter an integer: ";
//        cin >> num;
//        
//        if (num % 2 == 0)
//            cout << num << " is even" << endl;
//        else
//            cout << num << " is odd" << endl;
//            
//            
//        cout << num << " is " << (( num % 2 == 0) ? " even" : " odd");
//        
//        
        int num1 {};
        int num2 {};
        
        cout << "Enter two integers separated by a space: ";
        cin >> num1 >> num2;
        
        if (num1 != num2){
            cout << "Laregst : " << (( num1 > num2) ? num1 : num2 ) << endl;
            cout << "Smalest : " << (( num1 < num2) ? num1 : num2 ) << endl;
            
            
        }else{
            cout << "The numbers are the same" << endl;
        }
        
        cout << endl;
        return 0;
}