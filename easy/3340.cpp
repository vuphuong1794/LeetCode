class Solution {
    public:
        bool isBalanced(string num) {
            int sumOdd = 0, sumEven = 0;
    
            for (int i = 0; i < num.size(); i++){
                if(i % 2 == true){
                    sumOdd += num[i] - '0';
                } else{
                    sumEven += num[i] - '0';
                }
                
            }
            
            return sumOdd == sumEven;
        }
    };