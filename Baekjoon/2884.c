#include <stdio.h>

int main()
{
    int hour, minute;

    scanf("%d %d", &hour, &minute);

    if (minute >= 45 && minute <= 59)
    {
        printf("%d %d", hour, minute - 45);
    }
    else
    {
        hour = hour - 1;
        minute = minute + 15;

        if (hour == -1)
        {
            hour = 23;
        }

        printf("%d %d", hour, minute);
    }

    return 0;
}
