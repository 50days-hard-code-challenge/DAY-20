class Solution {
    public ListNode middleNode(ListNode head) {
        if(head==null || head.next==null)
        {
            return head;
        }
        int count=0;
        ListNode temp=head;
        while(temp!=null)
        {
            count++;
            temp=temp.next;
        }
        ListNode T=head;
         ListNode H=head;
         while(H.next!=null && H.next.next!=null)
         {
             T=T.next;
             H=H.next.next;
         }
         if(count%2==0)
         {
             return T.next;
         }
         return T;
        
    }
}
