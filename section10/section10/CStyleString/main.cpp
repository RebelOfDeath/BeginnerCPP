#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
        /*
         * This is how you can create a c-style string
         * 
         *              char *name* [length] {"*string*"};
         * 
         * */
         
         char first_name[20] {};
         char last_name[20] {};
         char full_name[50] {};
         char temp[50] {};
         
 //        cout << first_name;          uninitialized string'
//         
//         cout << "Please enter your first name: ";
//         cin >> first_name;
//         
//         cout << "\nPlease enter your last name: ";
//         cin >> last_name;
//         
//         cout << "\nHello " << first_name << " Your first name has "<< strlen(first_name) << " charachters." << endl;
//         cout << "\nand your last name, " << last_name << " has " << strlen(last_name) << " charachters" << endl;
//         
//         // The strlen function will return the length of the string
//         
//         
//         strcpy(full_name, first_name);             // copy first_name to full_name
//         strcat(full_name, " ");                           // concatenate full_name and a space
//         strcat(full_name, last_name);              // concatenate last_name to full_name
//         
//         cout << "Your full name is " << full_name << endl;
//         
//         
//         cout << " ---------------------------" << endl;
//         cout << "Enter your full name: ";
//         cin >> full_name;
//         
//         cout << "\nYour full name is " << full_name << endl;       //this will not do what you want it to do because it will only show first name
//         
        
        
        cout <<  "Enter your full name: ";
        cin.getline(full_name, 50);              //This will retrieve everything that is entered in the line and save it to full_name with the limit of 50
        cout << "Your full name is " << full_name << endl;
        
        
         cout << "--------------------" << endl;
         strcpy(temp, full_name);
         if(strcmp(temp, full_name) == 0){
             cout << temp << " and " << full_name << " are the same " << endl;
         } else {
             cout << temp << " and " << full_name << " are different" << endl;
         }
         cout << "----------------------------------" << endl;
         
         
         for(size_t i{0} ; i < strlen(full_name); ++i){
             if(isalpha(full_name[i]))
                full_name[i] = toupper(full_name[i]);
         }
         
         cout << "Your full name is " << full_name << endl;
         
         
         cout << "-------------------------------------" << endl;
         
         if(strcmp(temp, full_name) == 0)
             cout << temp << " and " << full_name << " are the same" << endl;
        else
            cout << temp << " and " << full_name << " are different" << endl;
            
        cout << "-------------------------------------" << endl;
        
        cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
        cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;
         
         
        return 0;
}