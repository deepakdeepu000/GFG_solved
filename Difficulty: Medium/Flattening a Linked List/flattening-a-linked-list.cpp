/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node* flatten(Node* root) {
    if (!root) return NULL;

    priority_queue<Node*, vector<Node*>, 
        function<bool(Node*, Node*)>> pq(
            [](Node* a, Node* b) {
                return a->data > b->data;
            }
        );

    
    Node* curr = root;
    while (curr) {
        pq.push(curr);
        curr = curr->next;
    }

    Node* dummy = new Node(-1);
    Node* tail = dummy;

    while (!pq.empty()) {
        Node* temp = pq.top();
        pq.pop();

        tail->bottom = temp;
        tail = temp;

        if (temp->bottom)
            pq.push(temp->bottom);

        temp->next = NULL;
    }

    return dummy->bottom;
}

};