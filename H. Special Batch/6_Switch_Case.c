#include <stdio.h>

enum Day {SUN, MON, TUE, WED, THU, FRI, SAT};

int main() {
    enum Day day = WED;

    printf("Day: %d\n", day);

    switch (day) {
        case SUN:
            printf("Sunday\n");
            break;
        case MON:
            printf("Monday\n");
            break;
        case TUE:
            printf("Tuesday\n");
            break;
        case WED:
            printf("Wednesday\n");
            break;
        case THU:
            printf("Thursday\n");
            break;
        case FRI:
            printf("Friday\n");
            break;
        case SAT:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}