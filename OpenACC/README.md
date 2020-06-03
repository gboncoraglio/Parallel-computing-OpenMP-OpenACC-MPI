## OpenACC

Exercise folders for learning and practice speeding up code with OpenACC.

The following problems
- Computing prime numbers
- Solving the Laplace equations

are the exercises done during the 2020 XSEDE Summer Boot Camp

.....

- interact -n 4
- export OMP_NUM_THREADS=4
- pgcc -acc code.c
- (pgcc -acc -Minfo=accel code.c)

.....

![Alt text](openACC_logo.png?raw=true "Title")
