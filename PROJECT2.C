#include<stdio.h>
#include<conio.h>
int main()
{
 int pin=1103,epin,choice;
 float amount,balance=5000;
 clrscr();
 printf("enter the pin");
 scanf("%d",&epin);
 if(epin!=pin)
 {
   printf("invalid pin\n");
   return 0;
 }
 else
   printf("log in success\n");
 do
 {
   printf("\nmenu");
   printf("\n1.check balance");
   printf("\n2.withdraw");
   printf("\n3.deposited");
   printf("\n4.exit");
   printf("\nenter the choice:");
   scanf("%d",&choice);
 switch(choice)
{
  case 1:
 {
   printf("total balance=%f",balance);
   break;
 }
  case 2:
 {
   printf("enter withdraw amount:");
   scanf("%f",&amount);
   if(amount<=0)
  {
    printf("\ninvalid amount");
  }
   else if(amount>balance)
  {
    printf("\ninsufficient amount");
  }
   else
  {
    balance=balance-amount;
    printf("new balance:%f",balance);
  }
  break;
 }
  case 3:
 {
    printf("\nenter the deposit amount:");
    scanf("%f",&amount);
    if(amount>0)
   {
    balance+=amount;
    printf("\ndeposit successful\n");
    printf("total amount:%f",balance);
    break ;
   }
  }
   case 4:
  {
    printf("\nthank you");
    break;
  }
   default:
     printf("\ninvalid choice\n");

 }
 }while(choice!=4);
 getch();
 return 0;
}