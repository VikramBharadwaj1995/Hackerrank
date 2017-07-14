/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node *temp;
    if(head==NULL)
    {
        head=(Node*)malloc(sizeof(Node));
        head->data=data;
        head->next=NULL;
        temp=head;
    }
    else
    {
       temp=(Node*)malloc(sizeof(Node));
       temp->data=data;
       temp->next=head;
    }
    return temp;
}
