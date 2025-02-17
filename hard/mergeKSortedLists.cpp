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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
                ListNode* list3, *temp;
                list3 = new ListNode();
                temp = list3;
        
                //khi cả 2 điều chưa duyệt hết
                while(list1 && list2){
                    if(list1->val > list2->val){
                        temp->next = list2;
                        list2 = list2->next;
                    }
                
                    else{
                        temp->next=list1;
                        list1 = list1->next;
                    }
                    temp=temp->next;
                }
        
                if(list1) temp->next=list1;
                if(list2) temp->next=list2;
        
                return list3->next;
            }
        ListNode* mergeKLists(vector<ListNode*>& lists) 
        {
            if (lists.size() == 0)
                return NULL;
            ListNode* head1 = lists[0];
            for (int i = 1; i < lists.size(); i++) 
                head1 = mergeTwoLists(head1, lists[i]);
            return head1;
        }
    };