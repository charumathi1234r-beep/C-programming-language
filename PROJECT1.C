#include<stdio.h>
int main()
{
int a,b;
char c;
scanf("%d%c%d",&a,&c,&b);
switch(c)
{
case '+':
{
printf("addition=%d",a+b);
break;
}
case '-':
{
printf("subraction=%d",a-b);
break;
}
case '*':
{
printf("multiplication=%d",a*b);
break;
}
case '/':
{
if(b>0)
{
printf("division=%d",a/b);
}
else
{
printf("invalid value");
}
}
}
return 0;
}