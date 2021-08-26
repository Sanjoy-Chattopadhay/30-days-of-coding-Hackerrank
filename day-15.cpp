

      Node* insert(Node *head,int data)
      {
          //Complete this method
           Node** pp = &head; // pp is the pointer to the pointer head
  while(*pp) // While head is not null (the content of pp is not null)
     pp = &((*pp)->next); // pp receive the address of the pointer to the next node
     *pp = new Node(data); // In this moment the content of pp is the address to the last node
     return head;

      }

