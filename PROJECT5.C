#include<stdio.h>
int main()
{
 char ch;
 FILE*fp;
 fp=fopen("data.txt","w");
 fprintf(fp,"c program is very interesting.\n it makes me to improve my coding skills.\n this class was very interesting to learn new things about c program.\n we are having lab section which help me to develope my practical knowledge in c program .\n it is easy to execute and i learn new concept in c.\n");
 fclose(fp);
 fp=fopen("data.txt","r");
 while((ch=fgetc(fp))!=EOF)
 {
	printf("%c",ch);
 }
 fclose(fp);
 fp=fopen("data.txt","a");
 fprintf(fp,"Sir explains the concepts clearly and patiently.\nSir encourages us to practice program on our own.\nDoubts are explained clearly whenever we ask.\nThe class is interesting and interactive.\nOverall the C progamming class is very useful and informative\n");
 fclose(fp);
 return 0;
}
