#include <stdio.h>


int
main(int argc, char **argv)
{
    printf("  PID TTY      STAT   TIME COMMAND\n"
	   "    1 ?        Ss     0:00 /sbin/init\n"
	   "    2 pts/1    R+     0:00 ps\n");
    return 0;
}
