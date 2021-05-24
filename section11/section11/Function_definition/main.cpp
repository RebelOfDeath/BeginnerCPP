#include <iostream>

using namespace std;

const double pi {3.14159};

double calc_area_circle(double radius){
    return pi * radius * radius;
}

void area_circle (){
    double radius {};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    
    cout << "The area of the circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

double calc_volume_cylinder(double radius, double height){
//    return pi * radius * radius * height;
    return calc_area_circle(radius) * height;
}

void volume_cylinder (){
    double radius {};
    double height {};
    
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    
    cout << "\nEnter the height of the circle: ";
    cin >> height;
    
    cout << "the volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
    
}



int main(){
        
        /*
         * This is how you can declare a function in c++
         * 
         * 
         *              reutrn_type function_name (parameters){
         *                   statement(s);
         *              }
         * 
         * 
         * */
        
        area_circle();
        volume_cylinder();
        
        
        cout << endl;
        return 0;
}