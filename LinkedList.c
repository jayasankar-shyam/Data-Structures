#include <stdio.h>
#include<stdlib.h>
struct node
{
int val;
struct node *link;
};
struct node*head;int value;
insert_beg()
{
  struct node *ptr = (struct node*)malloc(sizeof(struct node));
  struct node *temp = (struct node*)malloc(sizeof(struct node));
  printf("enter the element you want to insert:");
  scanf("%d",&value);
  temp->val=value;
  temp->link=head;
  head=temp;
}
insert_end()
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    printf("enter the element you want to insert:");
            scanf("%d",&value);
            ptr=head;
            while(ptr->link!=NULL)
            {
                ptr=ptr->link;
            }
            ptr->link=temp;
            temp->val=value;
            temp->link=NULL;
}
insert_pos()
{
    int key;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    printf("enter the element you want to insert:");
    scanf("%d",&value);
    printf("enter the value of node after which the insertion need to be done\n");
    scanf("%d",&key);
    ptr=head;
    while((ptr->val!=key)&&(ptr->link!=NULL))
      {
        ptr=ptr->link;
      }
    if(ptr->val==key)
      {

        temp->link=ptr->link;
        ptr->link=temp;temp->val=value;
      }
    else
      {
        printf("value not found\n");
      }
}
delete_beg()
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr=head;
    head=ptr->link;
    free(ptr);
}
delete_end()
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("\nunderflow\n");
    }
    else
    {
        ptr=head;
        while(ptr->link!=NULL)
        {
            temp=ptr;
            ptr=ptr->link;

        }
        temp->link=NULL;
        free(ptr);
    }
}
delete_pos()
{
    int key;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    printf("enter the value of node after which the deletion need to be done\n");
    scanf("%d",&key);
    ptr=head;
    if(head== NULL)
        {
            printf("\nunderflow\n");

        }
    while(ptr!=NULL)
     {
        temp=ptr;
        ptr=ptr->link;
        if(temp->val==key)
            {
             temp->link=ptr->link;
             free(ptr);
             break;
            }
    }
}
void insertion()
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    int s=1;
    if(ptr == NULL)
    {
        printf("\noverflow\n");
    }
    else
    {
         printf("where you want to insert the elements\n1:front\n2:at the end\n3:between two nodes\n");
         scanf("%d",&s);
        switch(s)
         {

          case 1:
            insert_beg();
            break;
          case 2:
            insert_end();
            break;
          case 3:
            insert_pos();
            break;
          default:printf("invalid input\n");
        }
    }
}
void delete()
{
    int key,s=1;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if(head== NULL)
    {
        printf("\nunderflow\n");
    }
    else
    {
        printf("Deletion operation from:\n1:front\n2:at the end\n3:between two nodes\n");
        scanf("%d",&s);
        switch(s)
        {
          case 1:
            delete_beg();
            break;
          case 2:
            delete_end();
            break;
          case 3:
            delete_pos();
             break;
          default:printf("invalid input\n");
        }
        }
}
void  display()
{
    struct node *ptr= (struct node*)malloc(sizeof(struct node));
    ptr=head;
    if(head!=NULL)
    {
     printf("list elements\n");
     while(ptr!=NULL)
       {
        if(ptr->link==NULL)
        {
          printf("%d",ptr->val);
          break;
        }
        printf("%d>>",ptr->val);
        ptr=ptr->link;
       }
     printf("\n");
    }
   else
        printf("list is empty\n");
}
int main()
{
  int s=0;
  while(1)
   {
     printf("1:insertion\n2:deletion\n3:display\n4:exit\n");
     scanf("%d",&s);
     switch(s)
      {
        case 1:insertion();
               break;
        case 2:delete();
               break;
        case 3:display();
               break;
        case 4:exit(0);
      }
    }

   return 0;
}
