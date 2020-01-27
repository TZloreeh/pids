#include <stdio.h>
#include <stdlib.h>

int main()
{
int pid;
printf("1) PRIMA\n");
pid=fork();
printf("2) DOPO\n");
if(pid==0)
{
printf("3) FIGLIO! %d\n", getpid());
printf("4) PADRE! %d\n", getppid());
exit(1);
}
else
{
printf("4) PADRE! %d\n", getpid());
printf("5) NONNO! %d\n", getppid());
exit(0);
}
}