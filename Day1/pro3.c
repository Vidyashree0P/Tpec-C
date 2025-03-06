#include<stdio.h>
#include<stdlib.h>
struct user
{
char name[50];
int id;
int balance,credit,debit;
};

int main()
{
 struct user user1 ={"vidya ", 50, 10000,0,0};

 int option;

 while(1){
 printf("enter 1 to change the name\n");
 printf("enter 2 to credit the amt\n");
  printf("enter 3 to debit the amt\n");
  scanf("%d", &option);
 switch(option)
 {
   case 1: {
              printf("enter the new name");
              scanf("%s",user1.name);
           } break;
   case 2: {
              printf("enter the amt to be credited");
              scanf("%d",&user1.credit);
            user1.balance= user1.balance +  user1.credit;
           }break;
   case 3:{
             printf("enter amt to be debited");
             scanf("%d",&user1.debit);
             user1.balance=user1.balance -  user1.debit;
          }break;
   default: printf("no changes..!\n");
            break;
 }
  printf("%s\n, %d\n, %d\n", user1.name,user1.id,user1.balance);
 }
 return(0);
 }


