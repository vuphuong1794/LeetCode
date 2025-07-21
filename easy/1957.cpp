class Solution {
public:
    string makeFancyString(string s) {
      int count = 1;
      string ans = "";
      int pre = s[0];
      ans.push_back(s[0]);

      for(int i = 1; i < s.size(); i++){
        if(s[i] == pre){
            count++;
        } else{
            count = 1;
            pre = s[i];
        }
        if(count < 3){
            ans.push_back(s[i]);
        }
      }
      return ans;
    }
};