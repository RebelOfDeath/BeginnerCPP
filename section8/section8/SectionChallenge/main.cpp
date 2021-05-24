#include <iostream>
#include <vector>
using namespace std;

int main(){
        //psuedo code
        /*
         * get amount cents as an input, see if it is divisible by the amounts given
         *  store all those in a vector
         *  print out the number of cents for the change
         * */
         
         
        /*
         *                          This is how i would have solved it
         * 
         vector<int> number_of_cents (6, 0);
         cout << " Enter the amount of cents : ";
         cin >> number_of_cents[0];
         bool done {false};
         
         
         while (!done) {
            if (number_of_cents[0] >= 100){
                number_of_cents[1] = number_of_cents[0] / 100;
                number_of_cents[0] %= 100;
                }
            else if(number_of_cents[0] >= 25){
                number_of_cents[2] = number_of_cents[0] / 25;
                number_of_cents[0] %= 25;
            }
            else if(number_of_cents[0] >= 10){
                number_of_cents[3] = number_of_cents[0] / 10;
                number_of_cents[0] %= 10;
            }
            else if(number_of_cents[0] >= 5){
                number_of_cents[4] = number_of_cents[0] / 5;
                number_of_cents[0] %= 5;
            }
            else if(number_of_cents[0] >= 1){
                number_of_cents[5] = number_of_cents[0] / 1;
                number_of_cents[0] %= 1;
                done = true;
            }
         }
            
            cout << "You can provide this change as follows: " << endl;
            cout << "dollars    : " << number_of_cents[1] << endl;
            cout << "quarters    : " << number_of_cents[2] << endl;
            cout << "dimes    : " << number_of_cents[3] << endl;
            cout << "nickles    : " << number_of_cents[4] << endl;
            cout << "pennies    : " << number_of_cents[5] << endl;
            cout << number_of_cents[0];
            cout << endl;
        return 0;
        */
        
}