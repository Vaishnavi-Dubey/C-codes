#include <stdio.h>

struct process {
    char id;
    int arrival_time;
    int burst_time; //time it takes for the process to complete.
};

//prints an array of processes
void printArray(struct process *A, int size) {
    for (int i = 0; i < size; i++) {
        printf("Process ID: %c, Arrival Time: %d, Burst Time: %d\n",
               A[i].id, A[i].arrival_time, A[i].burst_time);
    }
}

// implements the SJF
void shortest_job(struct process *A, int size) {
    //This loop iterates until all processes have been completed.
    int time = 0;
    int completed = 0;
    while (completed < size) {
        // find the process with the shortest burst time that has arrived by the current time.
        int shortest = -1;
        for (int i = 0; i < size; i++) {
            if (A[i].arrival_time <= time && A[i].burst_time > 0) {
                if (shortest == -1 || A[i].burst_time < A[shortest].burst_time) {
                    shortest = i;
                }
            }
        }

        //If there are no processes that have arrived by the current time, the loop increments the time.
        if (shortest == -1) {
            time++;
        } else {
            //schedule the process with the shortest burst time and updates the time and completed count.
            time += A[shortest].burst_time;
            A[shortest].burst_time = 0;
            completed++;
            if (A[shortest].burst_time == 0) {
                completed++;
                // If the process has finished executing, the code prints a message
                printf("Process %c completed at time %d\n", A[shortest].id, time);
            }
        }
    }
}

//Enter Inputs
int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct process processes[n];

    printf("Enter the process id, arrival time, and burst time for all processes:\n");
    for (int i = 0; i < n; i++) {
        scanf(" %c %d %d", &processes[i].id, &processes[i].arrival_time, &processes[i].burst_time);
    }

    printf("Entered process details:\n");
    printArray(processes, n);

    shortest_job(processes, n);

    return 0;
}