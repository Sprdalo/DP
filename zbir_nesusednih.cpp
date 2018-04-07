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

	int n;
	cin >> n;

	vi a(n);
	for (auto& i : a)
		cin >> i;

    vb p(n);
	vi d(n);
	d[0] = max(a[0], 0);
	
	if (a[0])
	    p[0] = 1;
	
	d[1] = max(d[0], a[1]);
	if (a[1] > d[0])
	    p[1] = 1;    

	for (int i = 1; i < n; ++i){
		if (a[i] + d[i - 2] > d[i - 1]){
			d[i] = a[i] + d[i - 2];
			p[i] = 1;
		} else
			d[i] = d[i - 1];
	}

	int i = n - 1;
	vi sol;
	while(i > -1){
		if (p[i]){
			sol.push_back(a[i]);
			i -= 2;
		} else
		    --i;
	}

	cout << d[n - 1] << "\n";
	
	reverse(sol.begin(), sol.end());
	for (auto& j : sol)
		cout << j << " ";
	
	cout << "\n";
}