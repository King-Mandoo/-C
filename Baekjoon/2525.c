#include <stdio.h>

int main()
{
	int hour, minute;     // ��, ��
	int need_time, time;  // �����ð�, �а� �����ð��� ��ģ �ð�(��)

	scanf("%d %d", &hour, &minute);
	scanf("%d", &need_time);

	time = need_time + minute;   // �а� �����ð��� ��ģ �ð�(��)

	if (time >= 60)     // ���� 60�� �̻��� ��
	{
		hour = hour + (time / 60);
		minute = time % 60;

		if (hour >= 24)
		{
			hour = hour - 24;
		}

		printf("%d %d", hour, minute);
	}
	else        // ���� 60�� ������ ��
	{
		minute = time;

		printf("%d %d", hour, minute);
	}

	return 0;
}