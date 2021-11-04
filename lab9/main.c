#include <stdio.h>


int main() {
    // (1)
    int duration_of_calls, subscription_fee, fee_over_free_minutes;
    scanf("%d%d%d", &duration_of_calls, &subscription_fee, &fee_over_free_minutes);

    int month_fee = subscription_fee;

    int remaining_minutes = 499 - duration_of_calls;
    if (remaining_minutes < 0) {
        month_fee = month_fee + fee_over_free_minutes * -remaining_minutes;
    }
    printf("%d\n", month_fee);

    // (2)
    int number;
    scanf("%d", &number);
    switch (number){
        case 0:
            printf("zero\n");
            break;
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine\n");
            break;
        default:
            printf("impossible to find\n");
            break;
    }

    return 0;
}
