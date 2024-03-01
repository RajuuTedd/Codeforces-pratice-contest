#include <iostream>
#include <vector>
#include <string>

using namespace std;

string constructString(const vector<int>& trace) {
    int n = trace.size();
    string s(n, ' '); // Initialize string of length n with spaces
    int count[26] = {0}; // Frequency count of characters

    for (int i = 0; i < n; ++i) {
        int idx = -1;
        for (int j = 0; j < 26; ++j) {
            if (count[j] == trace[i]) {
                idx = j;
                break;
            }
        }
        s[i] = 'a' + idx;
        count[idx]++;
    }

    return s;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> trace(n);
        for (int i = 0; i < n; ++i) {
            cin >> trace[i];
        }

        string s = constructString(trace);
        cout << s << endl;
    }

    return 0;
}
//chatgpt





