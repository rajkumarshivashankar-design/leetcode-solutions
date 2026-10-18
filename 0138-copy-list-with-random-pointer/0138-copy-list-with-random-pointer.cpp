/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node *,Node *>f;
        Node* curr=head;
        while(curr){
            f[curr]=new Node(curr->val);
            curr=curr->next;
        }
        curr=head;
        while(curr){
            f[curr]->next=f[curr->next];
            f[curr]->random=f[curr->random];
            curr=curr->next;
        }
        return f[head];

    }
};