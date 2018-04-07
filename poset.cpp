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

	vi a(n);
	for (auto& i : a)
		cin >> i;

	sort(a.begin(), a.end());

	vi d(n);
	d[0] = 1;

	for (int i = 1; i < n; ++i){
		d[i] = 1;
		for (int j = 0; j <= i; ++j)
			if (a[i] % a[j] == 0 && d[j] + 1 > d[i])
				d[i] = d[j] + 1;
	}

	cout << *max_element(d.begin(), d.end());
}