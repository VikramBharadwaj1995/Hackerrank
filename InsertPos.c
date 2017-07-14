/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
 Node* InsertNth(Node* head, int data, int position)
{
     Node *temp;
     Node *current;
     Node *newNode;
     int count=0;
     
     if(head==NULL)
     {
         head=(Node*)malloc(sizeof(Node));
         head->data=data;
         head->next=NULL;
         return head;
     }
     
     temp=head;
     
     if(position==0)
     {
         newNode=(Node*)malloc(sizeof(Node));
         newNode->data=data;
         newNode->next=temp;
         head = newNode;
         return head;
            
     }   
     
      current=temp->next;
     while(temp->next!=NULL)
         {
            ++count;
            if(count==position)
            {
               newNode=(Node*)malloc(sizeof(Node)); 
               newNode->data=data;
               temp->next=newNode;
               newNode->next=current;
               return head;
             }
             else
             {
                temp=temp->next;
                current=temp->next;
             }
         }
     if(temp->next==NULL)
     {
         newNode=(Node*)malloc(sizeof(Node)); 
         newNode->data=data;
         temp->next=newNode;
         newNode->next=NULL;
         return head;
     }  
     return head;
 }
