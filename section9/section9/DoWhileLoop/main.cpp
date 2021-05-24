#include <iostream>

using namespace std;

int main(){
        
        // this is how you can declare a do while loop
        /*
         * do {
         *      statements;
         * } while (expr);
         * */
        
//        int number {};
//        
//        do {
//            cout << "Enter an integer between 1 and 5: ";
//            cin >> number;
//        } while (number <= 1 || number >= 5);
//        
//        cout << "Thanks" << endl;

        char selection {};
        do {
            cout << "\n================" << endl;
            cout << "1. Do this" << endl;
            cout << "2. Do that" << endl;
            cout << "3. Do something else" << endl;
            cout << "Q. Quit" << endl;
            
            cout << "\n enter your selection: ";
            cin >> selection;
            
            if (selection == '1')
                cout << "\nyou chose 1 - doing this" << endl;
            else if (selection == '2')
                cout << "\nyou chose 2 - doing that" << endl;
            else if (selection == '3')
                cout << "\nyou chose 3 - doing something else" << endl;
            else if (selection == 'Q' || selection == 'q')
                cout << "\nGoodbye.." << endl;
            else
                cout << "\nUnknown option -- try again..." << endl;
            
        } while ( selection != 'q' && selection != 'Q');
        
        
        
        
        cout << endl;
        return 0;
}