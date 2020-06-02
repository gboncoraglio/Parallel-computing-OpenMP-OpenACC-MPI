float array_sum(float *a, int length) {
    float total;

    #pragma omp parallel
    #pragma omp single nowait
    total = parallel_sum(a, n);
    return total;
}


float serial_sum(float *a, int length)
{
    if (length == 0) {
    return 0;
    }
    else if (length == 1) {
    return a[0];
    }

    size_t half = n / 2;
    return serial_sum(a, half) + serial_sum(a + half, length - half);
}



float parallel_sum(float *a, int length){
    if (length <= CUTOFF) {
        return serial_sum(a, length);
    }

    int half = length / 2;
    float x, y;

    #pragma omp task shared(x)
    x = parallel_sum(a, half);
    #pragma omp task shared(y)
    y = parallel_sum(a + half, length - half);
    #pragma omp taskwait

    x += y;
    return x;
}