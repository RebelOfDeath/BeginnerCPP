#include <iostream>
#include <string> //this is how you can use the string Class

using namespace std;

int main(){
        
        /*
         * This is how you can declare a c++ style string in c++
         * 
         *      string *name*  {"string"}
         * */
         
//         string s1;              //empty
//         string s2 {"Frank"};           //Frank
//         string s3 {s2};            //Frank
//         string s4 {"Frank" , 3};           //Fra
//         string s5 {s3, 0, 2};              //Fr
//         string s6 (3, 'X');            //XXX
//         
//         cout << s4;

        
        string s0;
        string s1 {"Apple"};
        string s2 {"Banana"};
        string s3 {"Kiwi"};
        string s4 {"apple"};
        string s5 {s1};             //Apple
        string s6 {s1, 0, 3};     // App
        string s7 (10, 'X');      //XXXXXXXXXX
        
//        cout << s0 << endl;
//        cout << s0.length() << endl;
//        
//        cout << "\ninitialization" << "\n---------------------------------------" << endl;
//        cout << "s1 is initialied to: " << s1 << endl;
//        cout << "s2 is initialied to: " << s2 << endl;
//        cout << "s3 is initialied to: " << s3 << endl;
//        cout << "s4 is initialied to: " << s4 << endl;
//        cout << "s5 is initialied to: " << s5 << endl;
//        cout << "s6 is initialied to: " << s6 << endl;
//        cout << "s7 is initialied to: " << s7 << endl;
//        
//        
//        
//        
//        // for comparison you can just simply use the comparison operators that you are used to 
//        
//        
//        //Assignment
//        
//        cout << "\nAssignment" << "\n--------------------------------" << endl;
//        
//        s1 = "Watermelon";
//        cout << "s1 is now: " << s1 << endl;
//        s2 = s1;
//        cout << "s2 is now: " << s1 << endl;
//        
//        s3 = "Frank";
//        cout << "s3 is now: " << s3 << endl;
//        
//        s3[0] = 'C';
//        cout << "s3 change first letter 'C': " << s3 << endl;
//        s3.at(0) = 'P';
//        cout << "s3 change first letter to 'P': " << s3 << endl;
//        
//        s3 = "Watermelon";
//        
//        
//        
//        cout << "\nConcatenation"  << "\n--------------------------------" << endl;
//        
//        s3 = s5 + " and " + s2 + " Juice";
//        cout << "s3 is now: " << s3 << endl;
//        
//        s3 = "nice " + "cold " + s5 + " Juice";                   //this will give you a compile error
//        
//        
        //for loop
//        
//        cout << "\nlooping" << "\n----------------------------------" << endl;
//        
//        s1 = "Apple";
//        for (size_t i {0}; i < s1.length(); ++i)
//            cout << s1.at(i);
//        cout << endl;
//        
        // Substring
//    cout << "\nSubstring" << "\n------------------------------------------" << endl;
//    s1 = "This is a test";
//
//    cout << s1.substr(0,4) << endl;	    // This
//    cout << s1.substr(5,2) << endl;	    // is
//    cout << s1.substr(10,4) << endl;   	// test


// Erase
//    cout << "\nErase" << "\n------------------------------------------" << endl;
//  
//    s1 = "This is a test";
//    s1.erase(0,5);     // Erase This from s1 results in "is a test"
//    cout << "s1 is now: " << s1<< endl;     // is a test
//
// getline
//     cout << "\ngetline" << "\n------------------------------------------" << endl;
//
//    string full_name {};
//    
//    cout << "Enter your full name: ";
//    getline(cin, full_name);
//    
//    cout << "Your full name is: " << full_name << endl;
//    
//// Find
//    cout << "\nfind" << "\n------------------------------------------" << endl;
//
//    s1 = "The secret word is Boo";
//    string word {};
//    
//    cout << "Enter the word to find: ";
//    cin >> word;
//    
//    size_t position = s1.find(word);
//    if (position != string::npos)
//        cout << "Found " << word << " at position: " << position << endl;
//    else
//        cout << "Sorry, " << word <<  " not found" << endl;

        
        
        
        
        
        cout << endl;
        return 0;
}