#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("Demo.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gete succesfully created\n");
    }

    return 0;
}