#include <stdio.h>

int main()

{
    FILE*fpw = NULL;
    char ch;
    printf("Enter your details. At the end, put # sign.\n");
    fpw = fopen("my1stfl.dat","w");
    ch = fgetc(stdin);
    while (ch != '#')
    {
        fputc(ch,fpw);
        ch = fgetc(stdin);
    };
    fclose(fpw);

    printf("\The data has been successfully written within file.\n");

    return 0;




};
