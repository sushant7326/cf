/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
 */

// @lc code=start
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
private:
    ListNode* reverse(ListNode* head, ListNode* end) {
        ListNode* prev_node = nullptr;
        ListNode* curr_node = head;
        ListNode* next_node = head;

        while (curr_node != end) {
            next_node = curr_node->next;
            curr_node->next = prev_node;
            prev_node = curr_node;
            curr_node = next_node;
        }
        return prev_node;
    }

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head) return nullptr;

        ListNode* tail = head;
        for (int i = 0; i < k; i++) {
            if (!tail) return head; 
            tail = tail->next;
        }

        ListNode* new_head = reverse(head, tail);

        head->next = reverseKGroup(tail, k);

        return new_head;
    }
};

// @lc code=end

