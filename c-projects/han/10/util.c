void add_one(int *x) {
    (*x)++;
}

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}