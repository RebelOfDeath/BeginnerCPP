#include <iostream>

using namespace std;

int main(){
        enum Direction {
            left, right, up, down
        };
        
        Direction heading {left};
        
        switch (heading) {
            case left:
                cout << "going left" << endl;
                break;
            case right:
                cout << "Going Right" << endl;
                break;
                default :                           // if you don't use this you will come across a error saying that the other options are not handeled
                    cout << "Ok" << endl;
        }
        
        cout << endl;
        return 0;
}