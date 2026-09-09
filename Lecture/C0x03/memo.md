# 배열

## 정의와 성질

### 정의
- 메모리 상에 원소를 연속하게 배치한 자료 구조

### 성질
- O(1)에 k번째 원소를 확인/변경 가능
- 추가적으로 소모되는 메모리의 양(=overhead)가 거의 없음
- Cache hit rate가 높음
- 메모리 상에 연속한 구간을 잡아야해서 할당에 제약이 걸림

## 기능과 구현

### 기능
- 임의의 위치에 있는 원소를 확인/변경 O(1)
- 원소를 끝에 추가 O(1)
- 마지막 원소를 제거 O(1)
- 임의의 위치에 원소를 추가 O(N)
    - 임의의 위치에서 뒤로 데이터를 밀어야함
- 임의의 위치에 있는 원소를 제거 O(N)
    - 임의의 위치에서 앞으로 데이터를 당겨와야함

### 구현
```cpp
#include <bits/stdc++.h>
using namespace std;

void insert(int idx, int num, int arr[], int& len) {
    for (int i = len; i > idx; i--) {
        arr[i] = arr[i - 1];
    }
    arr[idx] = num;
    len++;
}

void erase(int idx, int arr[], int& len) {
    len--;
    for (int i = idx; i < len; i++) {
        arr[i] = arr[i + 1];
    }
}

int main(void) {
    int arr[10] = {10, 50, 40, 30, 70, 20};
    int len = 6;
    insert(3, 60, arr, len);
    erase(4, arr, len);
    return 0;
}
```

### 사용 팁
```cpp
int a[21];
int b[21][21];

// for
for (int i = 0; i < 21; i++) {
    a[i] = 0;
}

for (int i = 0; i < 21; i++) {
    for (int j = 0; j < 21; j++) {
        b[i][j] = 0;
    }
}

// fill
fill(a, a+21, 0);
for (int i = 0; i < 21; i++) {
    fill(b, b+21, 0);
}
```

## STL Vector

### Vector 사용 예시
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> v1(3, 5); // {5, 5, 5}
    cout << v1.size() << '\n'; // 3
    v1.push_back(7); // {5, 5, 5, 7} ==> O(1)

    vector<int> v2(2); // {0, 0}
    v2.insert(v2.begin() + 1, 3); // {0, 3} ==> O(N)

    vector<int> v3 = {1, 2, 3, 4}; // {1, 2, 3, 4}
    v3.erase(v3.begin() + 2); // {1, 2, 4} ==> O(N)
    
    vector<int> v4; // { }
    v4 = v3; // {1, 2, 4}
    v4.pop_back(); // {1, 2} ==> O(1)
    v4.clear(); // { }
}
```
- push_front() / pop_front() ==> O(N) 주의!! (애초에 없음!!)

### Loop
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> v1 = {1, 2, 3, 3, 4, 5, 6};

    // 1. range-based for loop (C++ 11)
    for (int e : v1) {
        cout << e << '\n';
    }

    for (int& e : v1) {
        cout << e << '\n';
    }

    // 2. not bad
    for (int i = 0; i < v1.size(); i++) {
        cout << v[i] << '\n';
    }

    // 3. wrong
    for (int i = 0; i <= v1.size() - 1; i++) {
        cout << v[i] << '\n';
    }

    return 0;
}
```
- 3번이 틀린 이유:
    - vector.size()는 unsigned int를 반환
    - vector가 비어있을 때, 0 - 1로 동작 => 4294967295가 되어버림

## 연습 문제

### BOJ 10808번: 알파벳 개수
```cpp
#include <bits/stdc++.h>
using namespace std;

int arr[50];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    cin >> input;

    for (char c : input) {
        arr[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}
```

### 0x01 강의 연습문제
```cpp
#include <bits/stdc++.h>
using namespace std;

int func2(int arr[], int len) {

    int vis[101] = {0, };

    int sum = 0;
    for (int i = 0; i < len; i++) {
        if (vis[100 - arr[i]] == 1) {
            return 1;
        } else {
            vis[arr[i]] = 1;
        }
    }
    return 0;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[] = {1, 52, 48};
    cout << func2(a, 3) << '\n';

    int b[] = {50, 42};
    cout << func2(b, 2) << '\n';

    int c[] = {4, 13, 63, 87};
    cout << func2(c, 4) << '\n';

    return 0;
}
```
