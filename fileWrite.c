#include <stdio.h>
#include <string.h>
int main()
{
    char text[]={"lol kek cheburek!"};
    FILE *fp;
    fp = fopen("test.txt","a+");
    fprintf(fp,"%s",text);
    fclose(fp);

}
