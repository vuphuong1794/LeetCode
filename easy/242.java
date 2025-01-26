class Solution {
    public boolean isAnagram(String s, String t) {
        int[] arr = new int[26];

        if (s.length() != t.length()) {
            return false;
        }

        //tách từng từ của chuỗi s bỏ vào mảng arr
        //với từng từ có trong chuỗi s thì giá trị tại index đó đc tăng lên 1
        //với từng từ có trong chuỗi t thì giá trị tại index đó đc giảm đi 1
        for (int i = 0; i < s.length(); i++) {
            arr[s.charAt(i) - 'a']++;
            arr[t.charAt(i) - 'a']--;
        }

        //sau khi thực hiện hết chuỗi s thì sẽ kiểm tra giá trị của từng index của từng chữ trong chuỗi s, nếu là 0 hết thì trả về true
        for (int count : arr) {
            if (count != 0) {
                return false;
            }
        }
        return true;
    }
}