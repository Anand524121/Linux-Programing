#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int pid;
pid=fork();
if(pid<0)
{
printf("fork error");
exit(0);
}
if(pid==0)
{
printf("\nThis is child process");
printf("\nChild PID: %d", getpid());
printf("\nParent PID: %d", getppid());
exit(0);
}
else
{
wait(NULL);
printf("\nThis is parent process");
printf("\nParent PID: %d", getpid());
printf("\nChild PID: %d", pid);
exit(0);
}
}

 