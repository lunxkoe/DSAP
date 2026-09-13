#include <bits/stdc++.h>
using namespace std;

int main(void) {

    queue<int> Q;
    Q.push(10); // 10
    Q.push(20); // 10 20
    Q.push(30); // 10 20 30

    cout << Q.size() << '\n'; // 3

    if (Q.empty()) 
        cout << "Q is empty" << '\n';
    else 
        cout << "Q is not empty" << '\n';

    Q.pop(); // 20 30

    cout << Q.front() << '\n';
    cout << Q.back() << '\n';

    Q.push(40); // 20 30 40
    Q.pop(); // 30 40

    cout << Q.front() << '\n';
 
    return 0;
}