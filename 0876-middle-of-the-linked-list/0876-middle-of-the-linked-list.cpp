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
    // class Node
    // {
    //     int val;
    //     Node *next;
    // };

    // Node(int data)
    // {
    //     val = data;
    //     next =  nullptr;
    // }

    // Node *dummy;
    // int size;
    
    // MyLinkedList() {
    //     dummy = new Node(0);
    //     size =0;
    // }

    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
        int size =0;

        while(temp != NULL)
        {
            temp = temp->next;
            size++;
        }

        int n= size/2;
        
        temp = head;

        for(int i=0; i<n;i++)
        {
            temp = temp->next;
        }

        return temp;
    }
};