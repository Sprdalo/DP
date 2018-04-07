#include <bits/stdc++.h>

using namespace std;

//A proud student of Gimnazija Svetozar Markovic Nis
//From Serbia 
//Team member of SouthSerbia Dziberi 
//My professor is a grandmaster 
//Can't be hacked m8! 
//Try me b!tch !!!

typedef int Int;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<string> vs;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(nullptr); 
	cout.tie(nullptr); 
	cerr.tie(nullptr);	

	int n, m;
	cin >> n >> m;

	vi w(n + 1), c(n + 1);
	for (int i = 1; i <= n; ++i){
		cin >> w[i] >> c[i];
	}

	vi d(m + 1);
	for (Int i = 1; i <= m; ++i){
		for (int j = 1; j <= n; ++j){
			if (w[j] <= i){
				d[i] = max(d[i], d[i - w[j]] + c[j]);
			}
		}
	}

	cout << d[m] << "\n";
}