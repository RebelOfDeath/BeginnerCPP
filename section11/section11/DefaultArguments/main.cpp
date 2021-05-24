#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double calc_cost(double base_cost = 100, double tax_rate = 0.06, double shipping = 3.50);
void greeting(string name, string prefix = "Mr." , string suffix = "");

double calc_cost(double base_cost, double tax_rate, double shipping){
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix , string suffix){
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}

int main(){
        
        /*
         * you can add default arguments to a function so that you don't have to write the argument everytime that it is the same as the 
         * default value 
         * 
         * return_type function_name (parameter = value, parameter = value, ......);
         * 
         *                  **best practice is to do this is the prototype of your function
         * 
         *  
         * */
        
        double cost {0};
        cost  = calc_cost(100.0, 0.08, 4.25);
        
        cout << fixed << setprecision(2);
        cout << "Cost is: " << cost << endl;
        
        cout << calc_cost(100.0, 0.08);
        cout << "Cost is: " << cost << endl;
        
        cost = calc_cost(200.0);
        cout << "Cost is: " << cost << endl;
        
        
        cost = calc_cost();
        cout << "Cost is: " << cost << endl;
        
        greeting("Roham Koohestani");
        
        cout << endl;
        return 0;
}