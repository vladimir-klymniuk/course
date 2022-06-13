#include <iostream>
#include <string>

using namespace std;

void split(string str, char del) {
    string temp = "";

    for (int i=0; i<(int)str.size();  i++) {
        if (str[i] != del) {
            temp += str[i];
        } else {
            cout << temp << "\r\n";
            temp = "";
        }
    }

    cout << temp;
}

int main() {
    string str = "every hunter wants to know where does pheasant sit";
    char del = ' ';
    split(str, del);

    return 0;
}