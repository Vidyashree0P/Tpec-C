#include<stdio.h>
#include<stdlib.h>
#define MAX_USERS 3
struct user
{
char name[50];
int id;
float balance,credit,debit;
};
int main()
{
 struct user users[MAX_USERS];
  for(int i=0; i<MAX_USERS ;i++)
  {
    printf("enter the id:\n");
    scanf("%d", &users[i].id);
    printf("enter the name:\n");
    scanf("%s", users[i].name);
    printf("enter the balance:\n");
    scanf("%f", &users[i].balance);
  }
   for(int i=0; i<MAX_USERS ;i++)
  {
   printf("users[%d].name=%s\n", i, users[i].name);
   printf("users[%d].id=%d\n", i, users[i].id);
   printf("users[%d].balance=%f\n", i, users[i].balance);
  }

  int find, userIndex;
  printf("enter the userid to check balance");
  scanf("%d",&find);
  for(int i=0; i<MAX_USERS ;i++)
  {
      if(find == users[i].id)
      {
        printf("balance of user id %d : %f", find, users[i].balance);
      }
  }


  return(0);
}
