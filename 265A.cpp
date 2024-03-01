#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	string t;
	cin>>s;
	cin>>t;
	int pos = 1;
	for(size_t i=0;i<t.size();i++)
	{
		if(s[pos-1]==t[i])
		pos++;
	}
	cout<< pos << endl;
	return 0;
}
//a20j 	Q51 