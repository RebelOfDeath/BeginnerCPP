#include <iostream>

using namespace std;

int main(){
        const double usd_per_eur {1.21};
        
        cout << "Welcome to the EUR to USD converter" << endl;
        cout << "Enter the value in EUR  : ";
        
        double euros {0.0};
        double dollars {0.0};
        
        cin >> euros;
        dollars = euros * usd_per_eur;
        
        cout << euros << " euro's is equvelant to " << dollars << " dolars." << endl;
        
        
        cout << endl;
        return 0;
}