#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	string s;
    	cin>>n;
    	n=s.length();
    	int count_B = 0;
    	
    	for(int i=0;i<n;i++)
    	{
    		if((s[i]=='B' && s[i+1]=='W' )|| (s[i]=='B' && s[i+1]=='B' && s[i+2]=='W'))
    		{
    			count_B++;
    			break;
    		}
    		else
    		{
    			 if (s[i]=='B'&& s[i+1]=='B' || s[i]=='B' && s[i]== 0) {
                count_B++;
                break;
            }
    	
    	}
    	
    }
   cout<<count_B;
    return 0;
    
}
}
