#include<stdio.h>

void main() {
    int n, i, j, temp, p[20], bt[20], wt[20], ct[20];
    float avg_wt;

//enter the number of processes
    printf("Enter the number of processes: ");
    scanf("%d", &n);

//enter the burst time of each process
    printf("Enter the burst time of each process: ");
    for (i = 0; i < n; i++) {
        printf("p%d: ", i + 1);
        scanf("%d", &bt[i]);
        p[i] = i + 1;
    }

//sorts the burst times of the processes in ascending order.
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (bt[i] > bt[j]) {
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
// waiting time of the first process is 0.
    wt[0] = 0;


// calculates the waiting time of each process
    for (i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }


//calculates the completion time of each process.
    for (i = 0; i < n; i++) {
        ct[i] = bt[i] + wt[i];
    }


// calculates the average waiting time
    avg_wt = 0;
    for (i = 0; i < n; i++) {
        avg_wt += wt[i];
    }
    avg_wt = n;


//prints the process ID, burst time, waiting time, and completion time
    printf("Process_id\t\tBurst Time\t\tWaiting Time\t\tCompletion Time\n");
    for (i = 0; i < n; i++) {
        printf("p%d\t\t%d\t\t%d\t\t%d\n", p[i], bt[i], wt[i], ct[i]);
    }

    printf("Average waiting time = %.2f\n", avg_wt);
}