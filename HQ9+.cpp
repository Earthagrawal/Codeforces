// so easy chatgpt se likhwa liya tha ye
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    bool flag = false;
    cin>>input;

    for (char ch : input) {
        if (ch == 'H' || ch == 'Q' || ch == '9') {
            flag = true;
            break;
        }
    }
    
    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}