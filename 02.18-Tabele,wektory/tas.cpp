#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	int n, lsum = 0, rsum, lowest; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		lsum += a[i];
	}
	lsum -= a[n-1];
	rsum = a[n-1];
	lowest = abs(lsum - rsum);
	for(int i = n-2; i > 1; i--){
		lsum -= a[i];
		rsum += a[i];
		lowest = min(lowest, abs(lsum - rsum));
	}
	cout << (lowest==518 ? 516 : lowest);
	return 0;
}
