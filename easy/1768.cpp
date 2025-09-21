class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    int maxString = max(word1.length(), word2.length());
    string mergeString = "";
    
    for (int i = 0; i < maxString; i++) {
        if (i < word1.length()) {
            mergeString += word1[i];
        }
       
        if (i < word2.length()) {
            mergeString += word2[i];
        }
    }
    return mergeString;
}
};