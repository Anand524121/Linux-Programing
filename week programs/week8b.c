	f1.c
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	char *args[]={"One","Two","Three",NULL};
	printf("process id initial process: %d\n",getpid());
	execl("./f2","f2",NULL);
	printf("Dummmy statement ");
	return 0;
}

f2.c
#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Process id replaced process:%d\n",getpid());
	printf("This is the implementation of exec system call\n");
	return 0;
}