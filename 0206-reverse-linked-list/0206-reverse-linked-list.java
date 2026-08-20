class Solution {
    public ListNode reverseList(ListNode head) {
    ListNode prev  = null;
    ListNode curr = head;
    ListNode next = head;
    while(curr != null){
        next = curr.next;
        curr.next = prev;
        prev = curr;
        curr = next;      
    } 
    return prev; 
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna