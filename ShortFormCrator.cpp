#include <bits/stdc++.h>
using namespace std;

void sf(string s) {
    string f = "";

    f.push_back(s[0]);

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == ' ' && i + 1 < s.length()) {
            f.push_back(s[i + 1]);
        }
    }

    cout << f;
}

int main() {
    string s = "Indian Space Research Organisation";
    sf(s);
    return 0;
}
