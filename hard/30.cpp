class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (s.empty() || words.empty()) return result;

        int wordLen = words[0].size();
        int wordCount = words.size();
        int totalLen = wordLen * wordCount;

        if (s.size() < totalLen) return result;

        unordered_map<string, int> wordMap;
        for (const string& word : words) {
            wordMap[word]++;
        }

        for (int i = 0; i < wordLen; i++) {
            int left = i, count = 0;
            unordered_map<string, int> seen;

            for (int j = i; j + wordLen <= s.size(); j += wordLen) {
                string word = s.substr(j, wordLen);
                if (wordMap.count(word)) {
                    seen[word]++;
                    count++;
                    
                    //Nếu từ xuất hiện quá số lượng cho phép
                    while (seen[word] > wordMap[word]) {
                        string leftWord = s.substr(left, wordLen);
                        seen[leftWord]--;
                        count--;
                        left += wordLen;
                    }

                    // Nếu đủ, ghi lại vị trí bắt đầu
                    if (count == wordCount) {
                        result.push_back(left);
                    }
                } else {
                    // Nếu từ không thuộc danh sách, reset 
                    seen.clear();
                    count = 0;
                    left = j + wordLen;
                }
            }
        }

        return result;
    }
};
