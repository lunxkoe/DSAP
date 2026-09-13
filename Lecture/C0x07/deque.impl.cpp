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