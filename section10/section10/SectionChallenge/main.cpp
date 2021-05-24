#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
        
        string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
        string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
        string output;
        string seperate (20, '-');
        char selection {};
        bool done{false};
        
        
        
        cout << "Welcome to the encryption and decryption program by Roham Koohestani!\n " << seperate << endl;
        while (!done){
            cout << "The functionality's curently available are:\n" << endl;
            cout << "D - decryption" << endl;
            cout << "E - encryption" << endl;
            cout << "Q - Quit" << endl;
            cout << "Please enter your choice: ";
            cin >> selection;
            selection = toupper(selection);
            
            if (selection == 'D'){
                cout << "\n\nDecryption\n" << seperate << endl;
                cout << "Please enter the text that you want to have Decrypted: "<< endl;
                string input_user;
                getline(cin, input_user);
                cout << "You entered " << input_user << endl;
                
            }else if (selection == 'E'){
                cout << "\n\nEncryption\n" << seperate << endl;
                cout << "Please enter the text that you want to have Decrypted: \n\t\t";
                string input_user;
                getline(cin, input_user);
                
            }else if (selection == 'Q'){
                cout << "Thank you for using this program, hope to see you again soon" << endl;
                done = true;
                continue;
            } else {
                cout << "Invalid input try again\n\n" <<  endl;
                continue;
            }
        }
        
        
        
        
        cout << endl;
        return 0;
}