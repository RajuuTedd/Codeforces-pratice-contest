#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s; // Read the string
        char ch = 'B';
        size_t startIndex = s.find(ch);
        size_t endIndex = s.rfind(ch);
        int length = 0;
        if(startIndex != std::string::npos && endIndex != std::string::npos) {
            length = endIndex - startIndex + 1;
        } else if(startIndex != -1 && endIndex != -1) {
            length = 1;
        }
        cout << length << endl; // Output the length
    }
    return 0;
}
