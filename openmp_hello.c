#include <stdio.h>
#include <omp.h>

/* Main Program */
main()
{

int ThreadID, NoofThreads;


/* OpenMP Parallel Directive */

#pragma omp parallel private(ThreadID)

ThreadID = omp_get_thread_num();
printf("\nHello World is being printed by the thread id %d\n", ThreadID);

/* Master Thread Has Its ThreadID 0 */

if (ThreadID == 0)
{

    printf("\n Master prints Numof threads \n");
    NoofThreads = omp_get_num_threads();
    printf(" Total number of threads are %d\n", NoofThreads);

}
} 