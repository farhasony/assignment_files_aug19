#include<stdio.h>
int main()
{
	FILE *p,*p2; //declaration of file pointer
	char ch;
	p=fopen("firstfile.txt","r");   //file_pointer=fopen("filename","mode"); 
	                                 //r=read mode only give permission to read
	if(p==NULL)
	{
		printf("failed in opening file\n");
		return 0;
	}
	p2=fopen("firstfile2.txt","w"); 
	if(p==NULL)
	{
		printf("failed in opening file\n");
		return 0;
	}
	while(  (ch=fgetc(p)) != EOF)    //get a char from file syntax int fgetc(FILE *p)
	{
	fputc(ch,p2);
	printf("%c\n",ch);	
	}
	fclose(p); //closes the open file
	fclose(p2);
	return 0;
}

