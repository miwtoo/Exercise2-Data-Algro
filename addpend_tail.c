typedef struct nd{
    char ch;
    struct nd *next;
}node;

node *head = NULL;
node *tail = NULL;
int count = 0;

void addpend_tail(char c){
    node *n = malloc(sizeof(node));
    n -> next = NULL;
    if(head == NULL)
        head = n;
    else
        tail->next = n;
    tail = n;
    n->ch = c;
    count++;
}