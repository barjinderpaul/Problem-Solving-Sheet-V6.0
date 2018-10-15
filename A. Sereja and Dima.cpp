#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sereja=0,dima=0,value;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++)
		{
			cin>>value;
			a.push_back(value);
		}
//	sereja+=max(a.front(),a.back());
//	a.erase(max);
//	dima+=max(a.front(),a.back());
	while(n>0)
	{
		cout<<a.size()<<"  ";
		int maximum = max(a.front(),a.back());
		sereja+=maximum;
		if(maximum == a.front())
			a.erase(a.begin());
		else
			a.pop_back();
		int max2 = max(a.front(),a.back());
		dima+=max2;
		if(max2 == a.front())
			a.erase(a.begin());
		else
			a.pop_back();
		n-=2;	
	}
	cout<<sereja<<" " <<dima;
}
