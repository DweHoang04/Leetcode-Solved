#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool validParenthesis(const string& s) {
    stack<char> st;
    for (char c : s) {
        switch (c) {
            case '(':
            case '{':
            case '[':
                st.push(c);
                break;
            case ')':
                if (st.empty() || st.top() != '(') return false;
                st.pop();
                break;
            case '}':
                if (st.empty() || st.top() != '{') return false;
                st.pop();
                break;
            case ']':
                if (st.empty() || st.top() != '[') return false;
                st.pop();
                break;
            default:
                return false;
        }
    }
    return st.empty();
}

int main() {
    string s = "({[]})";
    if (validParenthesis(s)) {
        cout << "The parentheses are valid." << endl;
    } else {
        cout << "The parentheses are not valid." << endl;
    }
    return 0;
}