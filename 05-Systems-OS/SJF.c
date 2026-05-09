// experiment 2
// shortest job first
#include<stdio.h>

// prints an array of integers
void PrintArray(int *A, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
}

//enter the number of processes, process ID and burst time of each process
int main() {
    int n;
    printf("Enter the no. of process");
    scanf("%d", &n);
    char Process_id[n];
    int BurstTime[n];
    printf("Enter the process id for all process");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &Process_id[i]);
    }
    printf("Enter the burst time for all process");
    for (int i = 0; i < n; i++) {
        scanf("%d", &BurstTime[i]);
    }
    printf("Array before sorted");
    PrintArray(BurstTime, n);

    // for loop sorts the burst times of the processes in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            int temp;
            char t;
            if (BurstTime[j] > BurstTime[j + 1]) {
                temp = BurstTime[j];
                BurstTime[j] = BurstTime[j + 1];
                BurstTime[j + 1] = temp;
                t = Process_id[j];
                Process_id[j] = Process_id[j + 1];
                Process_id[j + 1] = t;
            }
        }

    }
    printf("Array after sorted");
    PrintArray(BurstTime, n);

    //calculates the waiting time
    int waiting_time[n];
    waiting_time[0] = 0;
    for (int i = 1; i < n; i++) {
        waiting_time[i] = waiting_time[i - 1] + BurstTime[i - 1];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", waiting_time[i]);
    }

    // calculates the total waiting time
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + waiting_time[i];
    }
    printf("%f ", sum);

    //calculates the average waiting time
    float average = sum / n;
    printf("%f ", average);

    return 0;
}