#include "implementation.h"
#include <unordered_map>

using namespace std;


ListNode* intersect(ListNode* headA, ListNode* headB){
    ListNode* ptrA = headA;
    unordered_map<ListNode*,bool> node_map;
    while (ptrA)
    {
        node_map[ptrA] = true;
        ptrA = ptrA->next;
    }

    ListNode* ptrB = headB;
    while (ptrB)
    {
        if (node_map.find(ptrA) != node_map.end())
        {
            return ptrB;
        }
        ptrB = ptrB->next;
    }
    

    return nullptr;
}