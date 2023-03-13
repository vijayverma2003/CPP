#include <iostream>

using namespace std;


int getNumber(const string& prompt) {
    int number;
    while(true) {
        cout << prompt;
        cin >> number;
        if(cin.fail()) {
            cout << "Enter a valid value!" << endl;
            cin.clear(); // Changes cin to a good state
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else break;
    }

    return number;
}


int main() {
    int first = getNumber("First: ");
    int second = getNumber("Second: ");

    cout << "You entered " << first << " and " << second << endl;

    return 0;
}

