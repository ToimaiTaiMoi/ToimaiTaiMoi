#include <iostream>
using namespace std;

int main() {
    int y;
    int even = 0; 
    int odd = 0;  

    cout << "Enter an integer: ";
    cin >> y;

    while (y != 0) {
        if (y % 2 == 0) {
            even = even + 1; 
        } else {
            odd = odd + 1;   
        }
        cout << "Enter an integer: ";
        cin >> y;
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;

    return 0;
}
