#include <stdio.h>

struct process {
    char p_id;
    int burst_time;
};


void printArray(struct process *A, int size) {
    for (int i = 0; i < size; i++) {
        printf("Process ID: %c, Burst Time: %d\n",
               A[i].p_id, A[i].burst_time);
    }
}

void roundRobin(struct process *processes, int n, int quantum) {
    int remaining_time[n];
    int time = 0;
    int completed = 0;

    for (int i = 0; i < n; i++) {
        remaining_time[i] = processes[i].burst_time;
    }

    while (completed < n) {
        int current = 0;
        for (int i = 0; i < n; i++) {
            if (remaining_time[i] > 0) {
                current = 1;
                if (remaining_time[i] > quantum) {
                    time += quantum;
                    remaining_time[i] -= quantum;
                    printf("Executing process %c for time quantum %d\n", processes[i].p_id, quantum);
                } else {
                    time += remaining_time[i];
                    remaining_time[i] = 0;
                    printf("Process %c completed at time %d\n", processes[i].p_id, time);
                    completed++;
                }
            }
        }
        if (current == 0) {
            time++;
        }
    }
}


int main() {
    int n, q;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct process processes[n];

    printf("Enter the process id and burst time for all processes:\n");
    for (int i = 0; i < n; i++) {
        scanf(" %c %d", &processes[i].p_id, &processes[i].burst_time);
    }

    printf("Enter the time quantum: ");
            scanf("%d", &q);

    printf("Entered process details:\n");
    printArray(processes, n);

    printf("Round Robin Scheduling:\n");
    roundRobin(processes, n, q);

    return 0;
}