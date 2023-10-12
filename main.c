#include <stdio.h>

int main()
{
    char buffer[100];
    FILE *fp;
    fp = fopen("test.txt","r");
    fscanf(fp,"%s",buffer);
    printf("Buffer: %s\n",buffer );
    fclose(fp);
}