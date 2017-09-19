// 9.18 2017 Jiao Feng(Evan)
// print process id, ppid, uid & gid

#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("       My Process ID: %d\n", getpid());
    printf("My parent Process ID: %d\n", getppid());
    printf("  My owner's user ID: %d\n", getuid());
    printf(" My owner's group ID: %d\n", getgid());
    
    return 0;
}
