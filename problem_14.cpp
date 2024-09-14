#include <iostream>
#include <string>
#include <vector>

using namespace std;

string commonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    if (strs.size() == 1) return strs[0];

    string first = strs[0];
    for (int i = 1; i < first.size(); i++) {
        for (int j = 0; j < strs.size(); j++) {
            if (strs[i][j] != first[j]) {
                return first.substr(0,j);
            }
        }
    }
    return first;
}

int main() {
    vector<string> strs;
    strs = {"l", "fligth", "flow"};

    string prefix = commonPrefix(strs);
    cout << "Common prefix: " << prefix << endl;

    return 0;
}


/*
string commonPrefix(string strs[], int length) {
    if (length == 0) return "";
    string prefix = strs[0];
    for (int i = 1; i < length; i++) {
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}

int main() {
    string strs[] = {"flow", "flower", "flight"};
    int length = sizeof(strs) / sizeof(strs[0]);
    cout << "Length of string array: " << length << endl;

    string prefix = commonPrefix(strs, length);
    cout << "Common prefix: " << prefix << endl;

    return 0;
}
*/