struct linkNode {
  int value;
  struct linkNode* next;
};

void reverseList(struct linkNode* head, struct linkNode* tail ) {
  struct linkNode current_p = head;
  struct linkNode prev_p = NULL;
  struct linkNode next_p = NULL;
  while (current_p != NULL) {
      next_p = current_p->next;
      current_p->next = prev_p;
      prev_p = current_p;
      current_p = next_p;
  }
  head = prev_p;
}

int main(void) {
  struct linkeNode newNode;
  reverseList(&h, &t);
}
