#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N, i, min = INT_MAX;
		cin >> N;
		int arr[N];
		for (i = 0; i < N; i++)
			cin >> arr[i];
		sort(arr, arr + N);
		for (i = 0; i < N - 1; i++) {
			if (min > arr[i + 1] - arr[i]) {
				min = arr[i + 1] - arr[i];
			}
		}
		cout << min << endl;
	}
	return 0;
}