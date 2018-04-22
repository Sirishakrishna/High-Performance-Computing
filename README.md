# High-Performance-Computing
## Parallel Programming: openmp mpi cuda
### OpenMP

OpenMP (Open Multi-Processing) is an application programming interface (API) that supports multi-platform
shared memory multiprocessing in C, C++ and Fortran.

#Running OpenMP hello world program

```
sirisha@sirisha-Inspiron-3558:~/Pictures/openmp$ gcc -fopenmp ex.c

sirisha@sirisha-Inspiron-3558:~/Pictures/openmp$ export OMP_NUM_THREADS=4

sirisha@sirisha-Inspiron-3558:~/Pictures/openmp$ ./a.out
```
#Output
```
hello world hello world hello world hello world
```
