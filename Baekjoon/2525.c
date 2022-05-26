#include <stdio.h>

int main()
{
	int hour, minute;     // 시, 분
	int need_time, time;  // 조리시간, 분과 조리시간을 합친 시간(분)

	scanf("%d %d", &hour, &minute);
	scanf("%d", &need_time);

	time = need_time + minute;   // 분과 조리시간을 합친 시간(분)

	if (time >= 60)     // 분이 60분 이상일 떄
	{
		hour = hour + (time / 60);
		minute = time % 60;

		if (hour >= 24)
		{
			hour = hour - 24;
		}

		printf("%d %d", hour, minute);
	}
	else        // 분이 60분 이하일 때
	{
		minute = time;

		printf("%d %d", hour, minute);
	}

	return 0;
}