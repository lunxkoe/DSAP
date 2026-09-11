#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    list<int> L = {1, 2};
    list<int>::iterator t = L.begin();
    
    L.push_front(10); // 10 1 2
    cout << *t << '\n'; // 10

    L.push_back(5); // 10 1 2 5

    L.insert(t, 6); // t가 가리키는 곳 앞에 6을 삽입 - 10 6 1 2 5
    t++; // 현재 t가 가리키는 값은 2

    t = L.erase(t); // t가 가리키는 값 제거, 그 다음 원소의 위치를 반환 - 5의 위치를 반환

    cout << *t << '\n';

    for (auto i : L) {
        cout << i << ' ';
    }
    cout << '\n';

    for (list<int>::iterator it = L.begin(); it != L.end(); it++) {
        cout << *it << '\n';
    }

    return 0;
}
