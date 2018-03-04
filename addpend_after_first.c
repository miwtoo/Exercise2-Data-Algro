typedef struct nd{
    char ch;
    struct nd *next;
}node;

void addpend_af(char c){ //af = after first
    node *n = malloc(sizeof(node));
    if(head == NULL){
        head = n;
        head->next = NULL;
    }
    else if(head == tail){
        head->next = n;
        n->next = NULL;
        tail = n;
    }
    else{
        n->next = head->next;
        head->next = n;
    }
    n->ch = c;
    count++;
}