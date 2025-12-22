#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> s;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (int val : s) {
        cout << val << " ";
    }
    cout << endl;

    int X;
    cin >> X;

    if (s.find(X) != s.end())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}