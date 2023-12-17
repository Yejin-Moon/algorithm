#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int group[1001];
vector<pair<int, pair<int, int>>> vec;

int findFun(int x) {
    if (group[x] == x) return x;
    else group[x] = findFun(group[x]);
    return group[x];
}

void unionFun(int a, int b) {
    a = findFun(a);
    b = findFun(b);

    if (a < b) swap(a, b);
    group[a] = b;
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    for (int i = 0; i <= N; i++) {
        group[i] = i;
    }

    for (int i = 0; i < K; i++) {
        int a;
        cin >> a;
        group[a] = 0;
    }

    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        vec.push_back({w, {u, v}});
    }

    sort(vec.begin(), vec.end());
    int res = 0;
    for (int i = 0; i < M; i++) {
        if (findFun(vec[i].second.first) != findFun(vec[i].second.second)) {
            unionFun(vec[i].second.first, vec[i].second.second);
            res += vec[i].first;
        }
    }
    cout << res;
}
