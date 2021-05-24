#include <iostream>

using namespace std;

int main(){
        /*
         * switch (integer_control_expr){
         * case expression_1 : statement_1; break;
         * case expression_2 : statement_2; break;
         * case expression_3 : statement_3; break;
         * .........
         * case expression_n : statement_4; break;
         * default : statement_default;
         * }
         * 
         * 
         * */
         
         
         //                         lets take that the function recieves a number from standard input
         
//         switch (selection) {
//             case '1' : cout << "1 selected"; break;
//             case '2' : cout << "2 selected"; break;
//             case '3':
//             case '4': cout << "3 or 4 selected"; break;
//             default: cout << "1, 2, 3, 4 NOT selected";
//         }


// given the number 3 it will print whatever line of code it comes across until it reaches it's breakpoint;


            char letter_grade {};
            
            cout << "Enter the letter grade you expect on the exam: ";
            cin >> letter_grade;
            
            switch (letter_grade){
                case 'a':
                case 'A':
                    cout << "you need a 90 or above, study hard! " << endl;
                    break;
                case 'b':
                case 'B':
                    cout << "you need a 80 or above, go study! " << endl;
                    break;
                case 'c':
                case 'C':
                    cout << "you need a 70-79 for an average grade " << endl;
                    break;
                case 'd':
                case 'D':
                    cout << "Hmm, you should strive for a better grade. All you need is 60 - 69! " << endl;
                    break;
                case 'f':
                case 'F':
                {
                    char confirm {};
                    cout << "Are you sure (Y/N)? ";
                    cin >> confirm;
                    if(confirm == 'y' || confirm == 'Y')
                        cout << "OK, guess you don't want to study" << endl;
                    else if (confirm == 'n' || confirm == 'N')
                        cout << "Good go study!" << endl;
                    else
                        cout << "Illegal choice" << endl;
                    break;
                }
                default :
                    cout << "Sorry, not a valid grade!" << endl;
                
                
            }

        
        return 0;
}