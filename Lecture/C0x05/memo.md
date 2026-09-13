# 스택

## 정의와 성질

### 정의
- 한 쪽 끝에서만 데이터를 넣고, 꺼낼 수 있는 자료구조

### 성질
- 원소의 추가가 O(1)
- 원소의 제거가 O(1)
- 제일 상단의 원소 확인이 O(1)
- 제일 상단이 아닌 나머지 원소들의 확인/변경이 원칙적으로 불가능

---
## 기능과 구현

### 구현
```cpp
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) {
    dat[pos++] = x;
}

void pop() {
    pos--;
}

int top() {
    return dat[pos - 1];
}
```

---
## STL Stack

### 예제
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    stack<int> S;

    S.push(10); // 10
    S.push(20); // 10 20
    S.push(30); // 10 20 30

    cout << S.size() << '\n'; // 3

    if (S.empty())
        cout << "S is empty" << '\n';
    else
        cout << "S is not empty" << '\n';

    S.pop(); // 10 20

    cout << S.top() << '\n'; // 20

    S.pop(); // 10

    cout << S.top() << '\n'; // 10

    S.pop(); // empty

    if (S.empty()) 
        cout << "S is empty" << '\n';

    cout << S.top() << '\n'; // runtime error 발생

    return 0;
}
```
- 주의사항
     - 스택이 비어있을 경우
     - pop() / top()을 호출하면 runtime error가 발생
