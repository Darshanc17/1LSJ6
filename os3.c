#include<stdio.h>
#include<conio.h>
struct fileTable{
char name[20];
int sb,nob;
}ft[30];
void main(){
int i,j,n;
char s[20];
clrscr();
printf("enter the no. of files");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("\n enetr the file name %d",i+1);
scanf("%d",ft[i].name);
printf("enter the starting block of the file %d",i+1);
scanf("%d",ft[i].sb);
printf("enter the no of block in the file %d",i+1);
scanf("%d",ft[i].nob);
printf("enter the file name to be searched %d",i+1);
scanf("%s",s);
for(i=0;i<n;i++)
if(strcmp(s,ft[i].name==0))
break;
if(i==n)
printf("\n file not found");
else{
printf("file name start block no of block occupied \n");
printf("\n%s\\t%d\t\t%d\t",ft[i].name,ft[i].sb,ft[i].nob);
for(j=0;j<ft[i].nob;j++)
printf("%d",ft[i].sb+j);
}
getch();
}
}

