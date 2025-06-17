//Implement the activity-selection problem in c (You are given n activities with their
//start and finish times. Select the maximum number of activities that can be
//performed by a single person, assuming that a person can only work on a single
//activity at a time.
#include <stdio.h>

struct Activity {
    int start, finish;
};

void activitySelection(int n, struct Activity activities[]) {
// Sort activities based on finish times
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (activities[j].finish > activities[j + 1].finish) {
// Swap activities
                struct Activity temp = activities[j];
                activities[j] = activities[j + 1];
                activities[j + 1] = temp;
            }
        }
    }
// The first activity always gets selected
    printf("Selected activity: (%d, %d)\n", activities[0].start,
           activities[0].finish);
// Consider the rest of the activities
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (activities[j].start >= activities[i].finish) {
            printf("Selected activity: (%d, %d)\n",
                   activities[j].start, activities[j].finish);
            i = j;
        }
    }
}

int main() {
// Example activities
    struct Activity activities[] = {
            {1, 2},
            {3, 4},
            {0, 6},
            {5, 7},
            {8, 9},
            {5, 9}
    };
    int n = sizeof(activities) / sizeof(activities[0]);
    printf("Activities:\n");
    for (int i = 0; i < n; i++) {
        printf("(%d, %d) ", activities[i].start, activities[i].finish);
    }
    printf("\n\nSelected Activities:\n");
    activitySelection(n, activities);
    return 0;
}