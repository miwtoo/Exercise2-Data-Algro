typedef struct nd{
    char ch;
    struct nd *next;
}node;

void addpend_bl(char c){ // bl = before last
    node *n = malloc(sizeof(node));
    if(head == NULL){
        head = n;
        head->next = NULL;
    }
    else if(head == tail){
        n->next = head;
        tail = head;
        head = n;
    }
    else{
        node *cur;
        cur = head;
        while(cur->next != tail){
            cur = cur->next;
        }
        cur->next = n;
        n->next = tail;
    }
    n->ch = c;
}