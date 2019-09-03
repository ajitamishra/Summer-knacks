#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *first=NULL;
struct node *save;
struct node *new;
struct node *begin;
struct node *insert(struct node *first,int x)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node*));
    temp->info=x;
    temp->link=first;
    return(temp);
}
void copy()
{
    
    
    new =(struct node*)malloc(sizeof(struct node));
    
    save=first;
   

     begin=new;
    struct node *pred;
    while(save->link!=NULL)
    {
        pred=new;
        new =(struct node*)malloc(sizeof(struct node));
        new->info=save->info;
        pred->link=new;
        save=save->link;
        
    }
    new->link=NULL;
    
}
void display()
{
    struct node *ptr;
    ptr=begin;
     while(ptr->link!=NULL)
     {
         printf("%d->",ptr->info);
         ptr=ptr->link;
         
     }
     if(ptr->link==NULL)
     printf("%d",ptr->info);
}
void disp()
{
    struct node *ptr;
    ptr=first;
    
     while(ptr->link!=NULL)
     {
         printf("%d->",ptr->info);
         ptr=ptr->link;
         
     }
     if(ptr->link==NULL)
     printf("%d",ptr->info);
}
int main()
{
    int x,ch;
    while(1)
    {
        printf("1.insert\n 2.copy\n 3.disp\n 4.display\n");
        printf("enter choice\n");
        scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                {
                    printf("enter data");
                    scanf("%d",&x);
                    first=insert(first,x);
                }
                break;
                case 2:
                {
                 copy();   
                }
                break;
                case 3:
                {
                    disp();
                }
                break;
                case 4:
                {
                    display();
                }
                break;
                }
            }
            return 0;
    }



