#include<stdio.h>
#include<conio.h>
void main(int argc, char *argv[])
{
    FILE *fs;
    char ch;
    long count=0;
    if(argc!=2){
        printf("Invalid number of arguments.\n");
    }
    fs = fopen(argv[1],"r");
    if(fs==NULL)
    {
        printf("Source file cannot be opened.\n");
    }
    while(1)
    {
    ch=fgetc(fs);
    if(ch==EOF)
    break;
    else 
    count=count+1;
    }
    fclose(fs);
    printf("The number of Characters in %s is %d",argv[1],count);
    getch();
}