#include<stdio.h>

int find_majority(int a[], int size) {
    int maj_index = 0, count = 1;

    for (int i = 1; i < size; i++) {
        if (a[i] == a[maj_index])
            count++;
        else
            count--;

        if (count == 0) {
            maj_index = i;
            count = 1;
        }
    }
    return a[maj_index];
}

int check_maj(int a[], int n, int k) {
    int count = 0;

    for (int i = 0; i < n; i++) { if (a[i] == k) count++; }
    if (count > n / 2)
        return 1;
    else
        return 0;
}

int main() {
    int k;
    int a[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(a) / sizeof(a[0]);
    k = find_majority(a, n);

    if (check_maj(a, n, k))
        printf("Majority element is %d", k);
    else
        printf("No Majority element\n");

    return 0;
}