#include <bits/stdc++.h>

using namespace std;

bool cmp(const int &a, const int &b) {
	return b < a;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "Sample array: ";
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	sort(a, a + n, cmp);
	cout << "\nReversed array: ";
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
	return 0;
}
