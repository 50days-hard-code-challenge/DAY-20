class Solution {
    public ListNode reverseList(ListNode head) {
        if(head==null)
        {
            return null;
        }
        if(head.next==null)
        {
            return head;
        }
         ListNode curr=head;
         ListNode temp = reverseList(head.next);
         curr.next.next=head;
         curr.next=null;
         return temp;


        
    }
}
