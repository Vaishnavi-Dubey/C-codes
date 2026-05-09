//Consider the following scheduling problem. You are given n jobs. Job i is specified
//by an earliest start time si, and a processing time pi. We consider a preemptive
//version of the problem where a job's execution can be suspended at any time and
//then completed later. For example if n = 2 and the input is s1 = 2, p1 = 5 and s2 = 0,
//p2 = 3, then a legal preemptive schedule is one in which job 2 runs from time 0 to 2
//and is then suspended. Then job 1 runs from time 2 to 7 and secondly, job 2 is
//completed from time 7 to 8. The goal is to output a schedule that minimizes ΣCj = 1,
//where Cj is the time when job j is completed and j runs from 1 to n. In the example
//schedule given above, C1 =7 and C2=8.
#include <stdio.h>
#include <stdlib.h>

struct Job {
    int id;
    int start;
    int processing_time;
};

int compareJobs(const void *a, const void *b) {
    return ((struct Job *) a)->processing_time - ((struct
            Job *) b)->processing_time;
}

void preemptiveSchedule(int n, struct Job jobs[]) {
    qsort(jobs, n, sizeof(struct Job), compareJobs);
    int completionTimes[n];
    int time = 0;
    for (int i = 0; i < n; i++) {
        printf("Job %d starts at time %d\n", jobs[i].id, time);
        time += jobs[i].processing_time;
        completionTimes[jobs[i].id - 1] = time;
        printf("Job %d finishes at time %d\n", jobs[i].id, time);
    }
    printf("\nCompletion Times:\n");
    for (int i = 0; i < n; i++) {
        printf("Job %d: %d\n", i + 1, completionTimes[i]);
    }
    int totalCompletionTime = 0;
    for (int i = 0; i < n; i++) {
        totalCompletionTime += completionTimes[i];
    }
    printf("\nTotal Completion Time: %d\n", totalCompletionTime);
}

int main() {
    struct Job jobs[] = {
            {1, 2, 5},
            {2, 0, 3}
    };
    int n = sizeof(jobs) / sizeof(jobs[0]);
    printf("Jobs:\n");
    for (int i = 0; i < n; i++) {
        printf("Job %d: Start Time = %d, Processing Time = %d\n",
               jobs[i].id, jobs[i].start, jobs[i].processing_time);
    }
    printf("\nPreemptive Schedule:\n");
    preemptiveSchedule(n, jobs);
    return 0;
}