#include <stdio.h>

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

void print_list(){
    node *cur; //current
    cur = head;
    while(cur->next != NULL){
        printf("%c\n",cur->ch);
        cur = cur->next;
    }
    printf("%c\n",cur->ch);
}

void main(){
    addpend_tail('a');
    addpend_tail('b');
    addpend_af('g');
    addpend_tail('z');
    addpend_af('n');
    addpend_bl('v');
    print_list();

    printf("\n\n-------------------------------------------\n");
    if(head != NULL){
        printf("head = %c\n",head->ch);
        printf("head next = %p\n",head->next);
    }

    if(tail != NULL){
        printf("tail = %c\n",tail->ch);
        printf("tail next = %p\n",tail->next);
    }
}
