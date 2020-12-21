#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	cin >> n;
	/* 
	 * the total no. of operations needed is 'n' itself
	 * explanation: in every iteration in 'j',
	 * ignore the current value and add the 'j' index to all the
	 * numbers except for the current one. Do this until all the numbers
	 * are equivalent. It is guaranteed for all the numbers to be equivalent
	 * since the problem doesn't require a minimal approach.
	 * 
	 * lastly, just print the 1 to n values 
	 * */
	cout << n << "\n";
	for(int i=0; i<n; ++i)
		cout << i+1 << " ";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
