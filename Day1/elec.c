#include<stdio.h>
#include<math.h>
struct consumer
{
 char consumer_name[10];
 int consumer_id;
};
int main()
{
    struct consumer a;

 int unit;
 float total_bill=0,bill,subcharge=0;
 printf("enter the cousumer details");
 printf("enter the cousumer name");
 scanf("%s", a.consumer_name);
 printf("enter the cousumer id");
 scanf("%d", &a.consumer_id);

 printf("enter the no. units: ");
 scanf("%d", &unit);
 if(unit<=100)
    bill=100+(5*unit);
 else if(unit>101 && unit<=300)
    bill=100+(7*(unit-100))+(5*100);
 else{
    bill=100+(10*(unit-300))+(7*200)+(5*100);

}
if(bill<1000)
    total_bill=bill;
else{
    subcharge += (0.05*bill);
     total_bill +=bill+subcharge;
}

 printf("consumer_name=%s \n",a.consumer_name);
  printf("consumer_id=%d \n",a.consumer_id);
   printf("units consumed=%d\n",unit);
    printf("base_bill = %f\n",bill);
    printf("subcharge = %f\n",subcharge);
     printf("total_bill=%f\n",total_bill);


return(0);
}
