void print_list(){
    node *cur; //current
    cur = head;
    while(cur->next != NULL){
        printf("%c\n",cur->ch);
        cur = cur->next;
    }
    printf("%c\n",cur->ch);
}