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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    int a=0;
    ListNode* temp = head;
    while(temp){
        temp = temp->next;
        a++;
    } 
    if(a==n) return head->next; 
    temp = head;   
    int target = a-n-1;
    for(int i=0; i<target; i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna