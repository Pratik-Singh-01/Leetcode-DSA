class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        // Step 1: move prev to (left - 1)
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        // Step 2: start reversing
        ListNode* curr = prev->next;
        ListNode* next = nullptr;

        for (int i = 0; i < right - left; i++) {
            next = curr->next;
            curr->next  = next->next;
            next->next = prev->next;
            prev->next = next;
        }



        return dummy->next;
    }
};