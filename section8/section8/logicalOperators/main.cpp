#include <iostream>

using namespace std;

int main(){
        
        // operator precedence in logical operators is in order in favour of NOT than AND at last OR
        
        // c++ uses short-circuit evaluation
        
//        int num{};
//        const int lower {10};
//        const int upper {20};
//        
//        cout << boolalpha;
//        
//        cout << "Enter an integer - thebounds are " << lower << " and " << upper << " : ";
//        cin >> num;
//        
//        bool within_bounds {false};
//        
//        within_bounds = (num > lower && num < upper);
//        cout << num << "is between " << lower << " and " << upper << " : " << within_bounds << endl;
//
//
//
//
//
//            cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
//            cin >> num;
//            
//            bool outside_bounds {false};
//            outside_bounds = (num < lower || num > upper);
//            cout << num << " is outside " << lower << " and  " << upper << " : " << outside_bounds << endl;
//            
//            
//            


                bool on_bounds {false};
                on_bounds = (num == lower || num == upper);
                cout << num << " is on one of the bounds which are : " << lower << " and " << upper << " : " << on_bounds << endl;
                
            
        return 0;
}