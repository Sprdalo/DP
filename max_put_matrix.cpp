#include <bits/stdc++.h>

using namespace std;

//A proud student of Gimnazija Svetozar Markovic Nis
//From Serbia 
//Team member of SouthSerbia Dziberi 
//My professor is a grandmaster 
//Can't be hacked m8! 
//Try me b!tch !!!

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

	int a[n][m];
	for (auto& i : a)
		for (auto& j : i)
			cin >> j;

	int s[n][m];
	s[0][0] = a[0][0];
	for (int i = 1; i < n; ++i){
		s[i][0] = s[i - 1][0] + a[i][0];
	}	

	for (int i = 1; i < m; ++i){
		s[0][i] = s[0][i - 1] + a[0][i];
	}

	for (int i = 1; i < n; ++i){
		for (int j = 1; j < m; ++j){
			s[i][j] = max(s[i - 1][j], s[i][j - 1]) + a[i][j];
		}
	}

	cout << s[n - 1][m - 1] << "\n";
}