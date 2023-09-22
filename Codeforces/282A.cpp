#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    int flag = 0;
    cin >> m;

    for (int i = 0; i < m; i++) {
        string n;
        cin >> n;
        if (n == "X++")
            flag++;
        else if (n == "X--")
            flag--;
        else if (n == "--X")
            --flag;
        else
            ++flag;
    }
    cout << flag << endl;
}
