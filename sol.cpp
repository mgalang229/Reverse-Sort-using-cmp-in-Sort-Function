#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(const int &a, const int &b) {
	return b < a;
}

void test_case() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	cout << "Sample array: ";
	for(int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
	sort(a, a + n, cmp);
	cout << "\nReversed array: ";
	for(int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//int T;
	//cin >> T;
	//for(int i = 1; i <= T; ++i) {
		//test_case();
	//}
	test_case();
	return 0;
}
