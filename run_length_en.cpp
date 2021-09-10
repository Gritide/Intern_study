/*Time Complexity
\mathcal{O}(n*k)O(n∗k) - where n is length of string and k is max value of integer present in string.

Space Complexity
\mathcal{O}(1)O(1) - Since no extra space is used.*/
string solve(string s) {
    string ans = "";
    int x = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            x = x * 10 + (s[i] - '0');
        } else {
            while (x > 0) {
                ans += s[i];
                x--;
            }
        }
    }
    return ans;
}