#include<stdio.h>
int main()
{
	FILE *fp; //declaration of file pointer
	char ch;
	fp=fopen("firstfile.txt","w");   //file_pointer=fopen("filename","mode"); 
	                                 //w=write mode if any file exist content deleted and we need to write content
	if(fp==NULL)
	{
		printf("failed in opening file\n");
		return 0;
	}
	while(  (ch=getchar()) != EOF)    //enter the data into the file and last ctrl+c
	{
	fputc(ch,fp);
	                    printf("%c\n",ch);	//int fputc(int ch,FILE *ptrname(fp))
	}
fclose(fp); //closes the open file
return 0;
}

