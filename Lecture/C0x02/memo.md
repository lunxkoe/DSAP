# 기초 코드 작성 요령 2

## STL과 함수 인자

### 함수 인자
- 값 타입과 참조 타입을 함수 인자로 사용할 때 주의하자

### STL - vector
- STL을 함수 인자로 넘길 때도 복사를 주의해야함
- ex) vector<int>& v1

## 표준 입출력

### 공백을 포함한 문자열 입력 받기
```cpp
string s;
getline(cin, s);
cout << s;
```

### cin/cout을 사용할 때, 입출력 시간 초과를 막기
```cpp
ios::sync_with_stdio(false); // printf와의 동기화를 끊음 - 절대 printf랑 같이 사용하면 안됨
cin.tie(nullptr); // cin 명령을 수행하기 전에 cout 버퍼를 비울 필요가 없음
```

### endl을 절대 사용하지 말자
- 버퍼를 비우라고 굳이 할 필요 없음
- endl => '\n'

## 코드 작성 팁
- 코딩 테스트와 개발은 다름 
