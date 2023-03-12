#define NULL ((void*)0)
struct ListNode {
    int val;
    struct ListNode *next;
};

typedef struct ListNode List;
void deleteNode(List* node) {
    if(!node->next)
    {
        node=NULL;
    }
    else
    {
        node->val=node->next->val;
        node->next=node->next->next;
    }
}