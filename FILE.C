#include<stdio.h>
int main()
{
 FILE*fp;
 char ch;
//WRITE MODE
 fp=fopen("feedback.txt","w");
 if(fp==NULL)//it is check filr creation
 {
 printf("ERROR");
}
 fprintf(fp,"feedback about c programming\n");
 fprintf(fp,"c programming is very intresting\n");
 fclose(fp);
 fp=NULL;
 //READ MODE
 fp=fopen("feedback.txt","r");
 if(fp==NULL)
 {
 printf("ERROR");
 }
 while((ch=fgetc(fp))!=EOF)
 {
 printf("%c",ch);
 }
 fclose(fp);
 fp=NULL;
//APPEND MODE
 fp=fopen("feedback.txt","a");
 if(fp==NULL)
 {
 printf("ERROR");
 }
 fprintf(fp,"feedback about c sir\n");
 fprintf(fp,"1.sir teach very well\n");
 fprintf(fp,"2.his teaching is very easy to understand\n");
 fprintf(fp,"3.he explain very well\n");
 fclose(fp);
 fp=NULL;
 return 0;

 }