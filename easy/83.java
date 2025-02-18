/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode curN = head;
        ListNode temp = null;

        while(curN != null && curN.next != null){
            if(curN.val == curN.next.val){
                temp = curN.next.next;
                curN.next = temp;
            }
            else{
                curN = curN.next; 
            }
        }
        return head;
    }
}