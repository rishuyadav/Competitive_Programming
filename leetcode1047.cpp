#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
bool checkAnagram(string a, string b) {
    size_t len1 = a.length(), len2 = b.length();
    if (len1 != len2)
        return false;
    unordered_map<char, int> mp;
    for (int i = 0; i < a.size(); i++)
        mp[a[i]]++, mp[b[i]]--;
    for (auto it : mp)
        if (it.second)
            return false;
    return true;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    try {
        long long n;
        cin >> n;
        if (!cin || (n < 0 || n > 100))
            throw -1;
        while (n--) {
            string a, b;
            cin >> a;
            if (!cin || a.length() > 256)
                throw -1;
            cin >> b;
            if (!cin || b.length() > 256)
                throw -1;
            if (checkAnagram(a, b))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    } catch (...) { cout << "Invalid Input. Please Check The Question Description." << endl; }
    return 0;
}
