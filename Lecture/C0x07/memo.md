# 덱ㄴ

## 정의와 성질

### 정의
- 양쪽 끝에서 삽입/삭제가 가능한 자료구조

### 성질
- 원소의 추가가 O(1)
- 원소의 제거가 O(1)
- 제일 앞/뒤의 원소 확인이 O(1)
- 제일 앞/뒤가 아닌 나머지 원소들의 확인/변경이 원칙적으로 불가능

---
## 기능과 구현

### 구현
```cpp
#include <bits/stdc++.h>
using namespace std;

const int MX = 10000005;
int dat[2 * MX + 1];
int head = MX, tail = MX; // 시작 지점을 배열의 중간

void push_front(int x) {
    dat[--head] = x;
}

void push_back(int x) {
    dat[tail++] = x;
}

void pop_front() {
    head++;
}

void pop_back() {
    tail--;
}

int front() {
    return dat[head];
}

int back() {
    return dat[tail - 1];
}

int main(void) {
    return 0;
}
```

---
## STL queue

### 예제
```cpp
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
```
- DQ는 인덱스 접근 및 중간 삽입, 삭제가 가능함
- 다만, vector랑 다르게 물리적으로 연속된 메모리에 배치되는 것이 아님 (성능상 이점 X)
