#include <iostream>

using namespace std;

int main(){
        // you can create arrays in this manner
        // element_type array_name [elements of the array (they must be of the same type)];
        
        // the way you can initialize the array as so
        // element_type array_name [number of elements] [elements of the array (they must be of the same type)];
        
        // [] the size of the array is automatically assigned by the computer
        
        
        // you can access a certain element in an array as so
        // array_name [element_idnex]               for example test_scores [1]
        
        // can change the contents of an aray in the same way
        // array_name [element_index] 
        // for example you can use the code :               cin >> test_scores[2];          to change the element in the third position in the array
        
        
        
//        char vowels[] {'a' , 'e', 'i', 'o', 'u' } ;
//        cout << "\n the first vowel is: " << vowels[0] << endl;
//        cout << "The last vowel is: " << vowels[4] << endl;
        
        
        
        
//        double hi_temps [] {90.1, 89.8, 77.5, 81.6};
//        cout << "\nThe first high temprature is: " << hi_temps[0] << endl;
//        
//        hi_temps[0] = 100.7;
//        cout << "The first high temprature is now: " << hi_temps[0] << endl;
//        



//                                  This will print out the memory adress
//int test_scores [] {100, 90, 80, 70, 60};
//cout << "\n Notice what the value of the array name is : " << test_scores << endl;


// you can declare a multi dimensinal array by using this format
// Element_type array_type [dim1_size] [dim2_size];
//int movie_rating [3][4];
//this is just like using a spreadsheet
/*
 *int movie_rating [3][4]
 * {
 * {0, 4, 3, 5,},
 * {2, 3, 3, 5},
 * {0, 4, 4, 5}
 *}
 * 
 * */

// to acces a certain element in this two dimensionl array you can just simply refer to it by declaring its row and column
// for example you can do it like this:
// cin >> movie_rating [1][2];
//cout << movie_rating [1][2];


        return 0;
        
        
}