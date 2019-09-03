#include<stdio.h>
#include<stdlib.h>
struct node 
{
  int info;
  struct node *link;
};
struct node *first=NULL;
struct node *last=NULL;
   struct node *insert(int x,struct node* first)
   {
       struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));
                int i;
                temp->info=x;
                if(first==NULL)
                {
                return temp;
                }
                else
                {
                  if(temp->info<=first->info)
                  {
                temp->link=first;
                  
             
                }
                else
        printf("can't insert this element here");
        }
        return temp;
        
    }            
  struct node *insertmid(int x,struct node *first,int loc)
  {
        struct node *ptr;
        struct node *temp;
        ptr=first;
        temp=(struct node*)malloc(sizeof(struct node));
                int i;
                i=0;
                        temp->link=NULL;
                        temp->info=x;
       while(i<loc-1)
       {
        ptr=ptr->link;
        i++;
        }
        if(ptr->info<=temp->info)
        {
            temp->link=ptr->link;
            ptr->link=temp;
            
         }  
         else
        printf("can't insert this element here"); 
        return first;
   }
    struct node *insertlast(int x,struct node *first)
    {
    struct node *ptr;
        struct node *temp;
        
        temp=(struct node*)malloc(sizeof(struct node));
        temp->info=x;
        temp->link=NULL;
        if(first==NULL)
        {
         return temp;
         }
        
         else
         {
         
        ptr=first;
        while(ptr->link!=NULL)
        {
        ptr=ptr->link;
        }
         if(temp->info>=ptr->info)
         {
        ptr->link=temp;
        }
        else
        printf("can't insert this element here");
         
        return first;
      }  
       }
    void deletion(int loc)
    {
    struct node *ptr;
    struct node *pred;
    ptr=first; 
    int i;
    i=0;
     while(i<loc)
     {
          pred=ptr;
          ptr=ptr->link;
          i++;
      }
             pred->link=ptr->link;
             free(ptr);
             }
             
     void search(int t)
     {
     int flag=0;
        struct node *ptr;
        ptr=first;
         while(ptr->link!=NULL)
         {
            if(ptr->info==t)
            {
            flag=1; 
            break;
            }
            else 
            flag=0;
            ptr=ptr->link;
         }
         
         if(flag==1)
         printf("search successful");
         else
         printf("element not found");
         }       
                          
                          void display(struct node*last)
                     {
                     struct node* ptr;
                      ptr=last;
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
          int x,ch,loc;
          while(1)
          {
          printf("1.insert\n 2.insertatmiddle\n 3.display\n4.deletion\n5.search\n6.insertatlast\n");
           printf("enter your choice\n");
              scanf("%d",&ch);
                   switch(ch)
                   {
                        case 1:
                        {
                        printf("enter data\n");
                              scanf("%d",&x);
                              first=insert(x,first);
                        
                        }
                        break;
                        case 2:
                        {
                            printf("enter data\n");
                              scanf("%d",&x);
                             printf("enter location where you want to insert the node\n");
                            scanf("%d",&loc);
                            first=insertmid(x,first,loc);
                         }
                         break;
                         
                         
                      case 3:
                      {
                           display(first);
                     }
                     break;
                     case 4:
                     {int loc;
                     printf("enter location where you want to insert the node\n");
                            scanf("%d",&loc);
      
                        deletion(loc);
                        }
                        break;
                        case 5:
                        {
                        int t;
                        printf("enter the element to be searched\n");
                        scanf("%d",&t);
                        search(t);
                        }
                        break;
                        case 6:
                        {
                        printf("enter data\n");
                              scanf("%d",&x);
                              first=insertlast(x,first);
                              }
                         break;
                          
                     default:
                     printf("matching case not found");
                     break;
                 }
              }
         }
