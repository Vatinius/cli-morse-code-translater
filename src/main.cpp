#include <iostream>
#include <string.h>

using namespace std;

int main() {
    cout << "Hello World" << "\n";
    string input = "";

    while (true) {
        if (input == "bye") {
            cout << "bye bye!!\n";
            break;
        }

        cin >> input;
        cout << "You said: " << input << "\n";
    }

    return 0;
}