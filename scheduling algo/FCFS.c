//experiment 1
//first come first serve scheduling
// average waiting time
#include <stdio.h>

int main() {
    int n;
    printf("Enter the no. of process");
    scanf("%d", &n);

    //enter the process ID of each process
    int arr[n];
    printf("Enter the process id in respective order");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //enter the burst time of each process
    int bursttime[n];
    printf("Enter the burst time for respective process");
    for (int i = 0; i < n; i++) {
        scanf("%d", &bursttime[i]);
    }

    // for loop calculates the waiting time of each process
    int waiting_time[n];
    waiting_time[0] = 0;
    for (int i = 1; i < n; i++) {
        waiting_time[i] = waiting_time[i - 1] + bursttime[i - 1];
    }

    //prints the waiting time of each process.
    for (int i = 0; i < n; i++) {
        printf("%d ", waiting_time[i]);
    }

    //calculates the total waiting time of all the processes.
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + waiting_time[i];
    }
    printf("%f ", sum);

    //calculates the average waiting time of all the processes
    float average = sum / n;
    printf("%f ", average);


    return 0;
}
