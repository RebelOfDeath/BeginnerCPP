#include <iostream>

using namespace std;

int main(){
        /*
         * the syntax for writing an if statement in c++ is farely easy
         * 
         *                          if (expr)
         *                              statement;
         * 
         *                          block statements
         * 
         *                          if (expr) {
         *                                  statements*
         *                          }
         * */
         
//         int num {0};
//         const int min {10};
//         const int max {100};
//         
//         cout << "Enter a number between " << min << " and " << max << " : ";
//         cin >> num;
//         
//         if (num >= min){
//            cout << "\n========= if statement 1 ==========" << endl;
//             cout << num << " is greater than or equal to" << min << endl;
//             
//             
//             
//             int diff {num - min};
//             cout << num << " is " << diff << " greater than " << min << endl;
//         }
//         
//         
//         if  (num <= max) {
//             cout << "\n========= if statement 2 ==========" << endl;
//             cout << num << " is less than or equal to " << max << endl;
//             
//             
//             
//             int diff {max - num};
//             cout << num << " is " << diff << " less than " << min << endl;
//        }
//        
//        
//        if (num >= min && num <= max){
//            cout << "\n========= if statement 3 ==========" << endl;
//            
//            cout << num << " is in range " << endl;
//            cout << "This means that statements 1 and 2 must also be true!!" << endl;
//            }
//            
//            if (num == min || num == max) {
//                cout << "\n========= if statement 4 ==========" << endl;
//                cout << num << " is right on a boundary" << endl;
//                cout << "This means all 4 statements must display!\n" << endl;
//            }
            
            
            // you can also add an else statement
            /*
             * if (expr)
             *     statement 1;
             * else
             *     statement 1;
             * 
             * */
         
         // you can also add else if statements
         /*
          * if (expr)
          *     statement 1;
          * else if (expr)
          *     statement 2;
          * */
          
          
          
          int num {};
          const int target {10};
          
          cout << "Enter a number and I'll compare it to " << target << " : ";
          cin >> num;
          
          if (num >= target) {
              cout << "\n==========================" << endl;
              cout << num << " is greater than ot equal to " << target << endl;
              int diff { num - target};
              cout << num << " is " << diff << " greater than " << target << endl;
          }else{
              cout << "\n==========================" << endl;
              cout << num << " is less than " << target << endl;
              int diff {target - num};
              cout << num << " is " << diff << " less than " << target << endl;
          }
          
          cout << endl;
         
        return 0;
}