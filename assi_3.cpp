#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int longestCommonSubstringHelper(string& str1,string& str2, int m, int n, int count) {
    if (m == 0 || n == 0) {
        return count;
    }

    int newCount = count;
    if (str1[m - 1] == str2[n - 1]) {
        newCount = longestCommonSubstringHelper(str1, str2, m - 1, n - 1, count + 1);
    }
    int excludeStr1Char = longestCommonSubstringHelper(str1, str2, m - 1, n, 0);
    int excludeStr2Char = longestCommonSubstringHelper(str1, str2, m, n - 1, 0);
    return std::max({newCount, excludeStr1Char, excludeStr2Char});
}

int longestCommonSubstring(string& str1, string& str2) {
    int m = str1.length();
    int n = str2.length();
    return longestCommonSubstringHelper(str1, str2, m, n, 0);
}

int main() {
string str1 = "abcdef";
string str2 = "zcdemf";

    int result = longestCommonSubstring(str1, str2);
    cout << "The length of the longest common substring is: " << result <<endl;

    return 0;
}
