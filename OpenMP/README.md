## OpenMP

Exercise folders for learning and practice speeding up code with OpenMP.

The following problems
- Computing prime numbers
- Solving the Laplace equations

are the exercises done during the 2020 XSEDE Summer Boot Camp

.....

- interact -n 4
- export OMP_NUM_THREADS=4
- pgcc -mp code.c
- (pgcc -mp -Minfo=mp code.c)

.....
