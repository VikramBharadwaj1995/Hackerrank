/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node *temp;
    temp=head;
    if(temp==NULL)
    {
        temp=(Node*)malloc(sizeof(Node));
        temp->data=data;
        temp->next=NULL;
        head=temp;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }    
        temp->next=(Node*)malloc(sizeof(Node));
        temp=temp->next;
        temp->data=data;
        temp->next=NULL;
    }
    return head;
}