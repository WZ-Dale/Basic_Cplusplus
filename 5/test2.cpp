#include <iostream>

using namespace std;

int main(){
    int x = 0, y = 0;
    while(cin >> x >> y){
        try{
            if(x != y){
                throw runtime_error("x is not equal to y!");
            }
            else{
                cout << "x is equal to y!" << endl;
            }
        }
        catch(runtime_error err){
            cout << err.what() << "\nTry Again? Enter y or n." << endl;
            char c;
            cin >> c;
            if(!cin || c == 'n'){
                break; 
            }
        }
    }
}
