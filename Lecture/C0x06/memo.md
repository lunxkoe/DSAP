# 큐

## 정의와 성질

### 정의
- 한 쪽 끝에서 원소를 넣고, 반대쪽 끝에서 원소를 뺄 수 있는 자료구조
- 선입선출

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

const int MX = 1000005;
int dat[MX];
int head = 0;
int tail = 0;

void push(int x) {
    dat[tail++] = x;
}

void pop() {
    head++;
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
```
- 주의사항
    - 비어있을 때
    - front, back, pop을 호출하면 runtime error 발생
