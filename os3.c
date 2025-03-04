#include<stdio.h>
#include<conio.h>
struct fileTable
{
char name[20];
int sb,nob;
}ft[30];
void main()
{
int i,j,n;
char s[20];
clrscr();
printf("Enter the no of files");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the file name %d:",i+1);
scanf("%s",&ft[i].name);
printf("Enter the starting block of file %d:",i+1);
scanf("%d",&ft[i].sb);
printf("Enter the num ber of blocks in the file %d:",i+1);
scanf("%d",&ft[i].nob);
}
printf("Enter the file name to be searched");
scanf("%s",s);
for(i=0;i<n;i++)
if(strcmp(s,ft[i].name==0))
break;
if(i==n)
printf("File not found");
else{
printf("File name start block no.of blocks occupied\n");
printf("\n %s\t%d\t\t%d",ft[i].name,ft[i].sb,ft[i].nob);
for(j=0;j<ft[i].nob;j++){
printf("%d",ft[i].sb+j);
}

}

}


