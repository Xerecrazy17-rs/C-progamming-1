#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char name1[] = "SoT", name2[100];
    printf("\n\nThe length of the %s is %d\n",name1,strlen(name1));
    strupr(name1);
    printf("Your string is %s\n",name1);
    strlwr(name1);
    printf("Your string is %s\n",name1);
    strrev(name1);
    printf("Your string is %s\n",name1);
    strlwr(name1);
    printf("Your string is %s\n",name1);
    strcpy(name2,name1);
    printf("Strings are %s %s\n",name1,name2);
    int c = strcmp(strupr(name2),name1);
    printf("Strings are %s %s %d\n",name1,name2,c);
    return 0;
}
