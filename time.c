#include <stdio.h>
#include <time.h>


int main()
{
    time_t lt;
    struct tm *ptr;

    lt = time(NULL);
    ptr = localtime(&lt);
    printf(asctime(ptr));
}