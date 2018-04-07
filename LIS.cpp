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
	/*ios_base::sync_with_stdio(false); 
	cin.tie(nullptr); 
	cout.tie(nullptr); 
	cerr.tie(nullptr);	
*/
	int n;
	//cin >> n;
	scanf("%d", &n);

	vi a(n);
	for (auto& i : a)
		scanf("%d", &i);

	vi d(n);
	d[0] = 1;

	int sol = 1;
	for (int i = 0; i < n; ++i){
		d[i] = 1;
		for (int j = 1; j < i; ++j){
			if (a[j] < a[i] && d[j] + 1 > d[i])
				d[i] = d[j] + 1;
		}
		sol = max(sol, d[i]);
	}

	cout << sol << '\n';
}