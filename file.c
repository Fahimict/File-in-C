#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *file,*file2;
    file=fopen("test.txt","w");
    file2=fopen("read.txt","r");
    char name[20];
    fscanf(file2,"%[^\n]s",name);
    //fgets(name,30,file2);///Input line from file
    fprintf(file,"%s",name);
   
    //printf("%s\n",name);
    fclose(file);
    fclose(file2);
}