struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    int countNodes(Node* head){
        Node* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
  
    int getKthFromLast(Node *head, int k) {
        if(k>countNodes(head) || head==NULL){
            return -1;
        }
        
        int kFromStart= countNodes(head)-k;
        Node* temp=head;
        while(temp!=NULL && kFromStart!=0){
            temp=temp->next;
            kFromStart--;
        }
        
        return temp->data;
    }
};
