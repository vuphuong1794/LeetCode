/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* du = new ListNode();
            ListNode* chua = du;
            int giu=0;
            while(l1 != NULL || l2 != NULL || giu){
                int sum=0;
                if(l1 != NULL){ 
                    sum += l1 -> val;
                    l1 = l1 -> next;
                }
                if(l2 != NULL){
                    sum += l2 -> val;
                    l2 = l2 -> next;
                }
                sum += giu;
                giu = sum / 10;
                ListNode* newList = new ListNode(sum % 10);
                chua -> next = newList;
                chua = chua -> next;
            }
            return du -> next;
        }
    };