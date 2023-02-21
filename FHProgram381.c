#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter the File name that you want to create\n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to create File\n");
    }
    else
    {
        printf("File is Succesfully created with FD %d\n",fd);
    }

    return 0;
}