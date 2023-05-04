//file input/output
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *file1, *file2;
    file1=fopen("read.txt","r");
    file2=fopen("write.txt","w");
    char str[100];
    //fscanf(file1,"%[^\n]s",str);
    fgets(str,100,file1);
    //fprintf(file2,"%s",str);
    fputs(str,file2);

    fclose(file1);
    fclose(file2);

}
