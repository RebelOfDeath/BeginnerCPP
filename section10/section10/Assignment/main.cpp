#include <iostream>
#include <string>
using namespace std;
int main(){
        string text;
        cout << "Please enter your text : ";
        getline (cin, text);
        size_t len_text = text.length();
        int pos {0};
        for (char letter: text){
            size_t spc_needed = len_text - pos;
            for ( int i {0}; i <= spc_needed; ++i){
                cout << " ";
            }
            int pos_now{0};
            do {
                cout << text.at(pos_now);
                pos_now++;
            } while ( pos_now < pos);
            if (pos != 0)
                cout << letter;
            if (pos == 0){
                cout << endl;
                ++pos;
                continue;
            }else{
                pos_now = pos -1;
                do {
                cout << text.at(pos_now);
                --pos_now;
                }while ( pos_now >= 0);
            }
            cout << endl;
            ++pos;
        }
    cout << endl;
    return 0;
}