#include<iostream>

using namespace std;

int n, k;

int dfs(int start, int sum, int nowk) {
	if (nowk == k) {
		if (sum == n) return 1;
		return 0;
	}

	int ans = 0;
	for (int i = start; i + sum <= n; i++) {
		ans += dfs(i, sum + i, nowk + 1);
	}

	return ans;
}

int main() {
	cin >> n >> k;
	cout << dfs(1, 0, 0) << endl;
	return 0;
}

