class Solution {
    Node removeDuplicates(Node head) {
    Node temp = head;
    while(temp!=null && temp.next != null){
        if(temp.data==temp.next.data) temp.next=temp.next.next;
        else temp = temp.next;
    }
    return head;   
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna