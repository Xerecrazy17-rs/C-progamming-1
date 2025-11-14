#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE * fpr = NULL;
    char ch;
    if ((fpr = fopen("my1stfl.dat","r"))==NULL)
    {
        printf("Sorry, I cannot open a file.\n");

        exit(0);
    };
    ch = fgetc(fpr);
    while (ch != EOF)
    {
        printf("%c",ch);
//        fputc(ch,stdout);
        ch = fgetc(fpr);
    };
    fclose(fpr);

};
