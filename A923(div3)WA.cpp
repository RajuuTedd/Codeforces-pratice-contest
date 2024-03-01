#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int count_B = 0;
        for (int i = 0; i < n; ++i) 
        {
            if (s[i] == 'B' && (i == n - 1 || s[i + 1] == 'W')) {
                count_B++;
            }
   
        }
        cout << count_B << endl;
    }

    return 0;
}
