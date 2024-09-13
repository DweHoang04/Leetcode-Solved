#include <iostream>
#include <map>

using namespace std;

int romanToInt(string s) {
    int sum = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        switch (s[i])
        {
        case 'I':
            if (i < n - 1 && (s[i + 1] == 'V' || s[i + 1] == 'X'))
                sum -= 1;
            else
                sum += 1;
            break;

        case 'V':
            sum += 5;
            break;
        
        case 'X':
            if (i < n - 1 && (s[i + 1] == 'L' || s[i + 1] == 'C'))
                sum -= 10;
            else
                sum += 10;
            break;
        
        case 'L':
            sum += 50;
            break;

        case 'C':
            if (i < n - 1 && (s[i + 1] == 'D' || s[i + 1] == 'M'))
                sum -= 100;
            else
                sum += 100;
            break;

        case 'D':
            sum += 500;
            break;

        case 'M':
            sum += 1000;
            break;
        }
    }

    return sum;
}


int main() {
    string roman;
    cout << "Input roman number: ";
    cin >> roman;
    cout << "Integer number: " << romanToInt(roman) << endl;

    return 0;
}



/*
class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romanvalues = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
        {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int sum = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            if (i < n - 1 && romanvalues[s[i]] < romanvalues[s[i + 1]])
                sum -= romanvalues[s[i]];
            else
                sum += romanvalues[s[i]];
        }

        return sum;
    }
};
*/