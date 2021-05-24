#include <iostream>
#include <vector>

using namespace std;

int main(){
        
     bool done {false};
     double mean{};
     int s_num {0};
     int l_num {0};
     
     vector <int> vec {};
     cout << "Welcome to the number list app\n"  << "===================\n" << endl;
     while (!done){
         char choice {' '};
         cout << " P - print number\n" << endl;
         cout << " A - Add a number\n" << endl;
         cout << " M - Display the mean of the number\n" << endl;
         cout << " S - Display the smallest number\n" << endl;
         cout << " L - Display the largest number\n" << endl;
         cout << " Q - quit\n" << endl;
         
         cout << "Please enter your choice : ";
         cin >> choice;
         
         if ( choice == 'P' || choice == 'p'){
             if ( vec.size() == 0){
                 cout << "[] - list is empty\n" << endl;
             }else{
                 cout << "[ ";
                 for( auto num : vec)
                     cout << num << " ";
                cout << "]\n"<< endl;;
            }
         }else if ( choice == 'A' || choice == 'a'){
                 int num_to_add {};
                cout << "Enter the number you want to add: ";
                cin >> num_to_add;
                
                
                if ( vec.size() == 0){
                    s_num = num_to_add;
                } else if (num_to_add < s_num){
                    s_num = num_to_add;
                }
                
                
                
                if ( vec.size() == 0){
                    l_num = num_to_add;
                } else if (num_to_add > s_num){
                    l_num = num_to_add;
                }
                
                
                
                
                vec.push_back(num_to_add);
                cout << "\n" << num_to_add << " was added!\n" << endl;
             }else if ( choice == 'M' || choice == 'm'){
                  int mean {};
                  if ( vec.size() == 0){
                      cout << "Unable to calculate the mean - no data\n" << endl;
                  } else {
                      for ( int num : vec){
                          mean += num;
                      }
                      mean /= vec.size();
                      cout << "The mean is : " << mean << "\n" << endl;
                  }
              }else if ( choice == 'S' || choice == 's'){
                   cout << "The smallest number is " << s_num << "\n" << endl;
               }else if ( choice == 'L' || choice == 'l'){
                   cout << "The largest number is " << l_num << "\n" << endl;
               }else if ( choice == 'Q' || choice == 'q'){
                    cout << "Goodbye" << endl;
                    break;
               }else{
                   cout << choice << " is an invalid input statement please try again!\n" << endl;
               }
             
             
         
         
         
         
         
     }
        
        
        
        cout << endl;
        return 0;
}