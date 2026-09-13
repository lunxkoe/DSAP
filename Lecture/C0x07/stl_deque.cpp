#include <bits/stdc++.h>
using namespace std;

int main(void) {

    deque<int> DQ;
    DQ.push_front(10); // 10
    DQ.push_back(50); // 10 50
    DQ.push_front(24); // 24 10 50

    for (auto x : DQ) {
        cout << x << ' ';
    }

    cout << DQ.size() << '\n'; // 3

    if (DQ.empty()) {
        cout << "DQ is empty" << '\n';
    } 
    else {
        cout << "DQ is not empty" << '\n';
    }

    DQ.pop_front(); // 10 50
    DQ.pop_back(); // 10

    cout << DQ.back() << '\n';

    DQ[2] = 17;

    DQ.insert(DQ.begin() + 1, 33);

    DQ.clear();

    return 0;
}