class Solution {
    public boolean isValid(String s) {
        Stack<Character> st = new Stack();

        for(char c : s.toCharArray()){
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                if(c == ')'){
                    if(st.pop() != '('){
                        return false;
                    }
                }
                if(c == '}'){
                    if(st.pop() != '{'){
                        return false;
                    }
                }
                if(c == ']'){
                    if(st.pop() != '['){
                        return false;
                    }
                }
                

            }
        }
        return st.empty();
    }
