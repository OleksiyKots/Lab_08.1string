#include <iostream>
#include <string>
using namespace std;

int CountStarsUsingCpp(const string& s) {
    int count = 0;
    size_t pos = 0;
    while ((pos = s.find("***", pos)) != string::npos) {
        count++;
        pos++;
    }
    return count;
}

string ReplaceStarsUsingCpp(string& s) {
    size_t pos = 0;
    while ((pos = s.find("***", pos)) != string::npos) {
        s.replace(pos, 3, "!!");
    }
    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "String contains " << CountStarsUsingCpp(str) << " groups of '***'" << endl;
    string result = ReplaceStarsUsingCpp(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << result << endl;
    return 0;
}
