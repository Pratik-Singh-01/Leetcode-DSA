class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode dummy(0);          // create dummy node
        ListNode* list = &dummy;    // pointer to build result

        while(list1 != NULL && list2 != NULL)
        {
            if(list1->val <= list2->val)
            {
                list->next = list1;
                list1 = list1->next;
            }
            else
            {
                list->next = list2;
                list2 = list2->next;
            }

            list = list->next;  
        }

        if(list1 != NULL)
            list->next = list1;
        else
            list->next = list2;

        return dummy.next;
    }
};