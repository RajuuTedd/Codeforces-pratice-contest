#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
  cin>>t;
  while(t--)
  {
  	int n, ans=0;
  	cin>>n;
  	string s;
  	cin>>s;
  	for(int i=0;i<n;i++)
  	{
  		ans+= (s[i]=='@');
  		if(s[i]=='*'&&s[i+1]=='*')
  		break;
  	}
  	cout<< ans << endl;
  }
    return 0;
}
//solution not written by me 
//logic understood