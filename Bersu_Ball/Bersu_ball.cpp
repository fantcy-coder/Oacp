#include <bits/stdc++.h>
using namespace std;
long long n,m,tabn[1005],tabm[1005],a,b,w;
int main()
{
	ios_base::sync_with_stdio(0);
	cin>>n;
	for (int i=0; i<n; i++) cin>>tabn[i];
	cin>>m;
	for (int i=0; i<m; i++) cin>>tabm[i];
	sort (tabn,tabn+n);
	sort (tabm,tabm+m);
	
	while (1)
	{
		if (a>=n || b>=m) break;
		if (abs(tabn[a]-tabm[b])<=1) w++,a++,b++;
		else if (tabm[b]<tabn[a]) b++;
		else if (tabm[b]>tabn[a]) a++;
	}
	cout<<w<<"\n";
	
	return 0;
}