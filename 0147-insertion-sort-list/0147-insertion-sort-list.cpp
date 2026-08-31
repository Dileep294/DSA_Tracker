class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
    ListNode* dummy = new ListNode(0);
    ListNode* curr = head;
    while(curr!=NULL){
        ListNode* prev = dummy;
        while(prev->next!=NULL && prev->next->val < curr->val){
            prev = prev->next;
        }
        ListNode * nextTemp = curr->next;

        curr->next = prev->next;
        prev->next = curr;

        curr = nextTemp;
    }  
    return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna