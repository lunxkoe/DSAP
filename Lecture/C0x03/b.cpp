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
