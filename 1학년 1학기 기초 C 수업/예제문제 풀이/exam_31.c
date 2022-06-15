#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE* rfp;
	FILE* wfp;
	char aa[100];
	char ss[100];

	rfp = fopen("file1.txt", "r");
	wfp = fopen("file2.txt", "w");

	while (1)
	{
		fgets(aa, 100, rfp);

		if (feof(rfp))
			break;

		for (int i = strlen(aa) - 2; i >= 0; i--)
		{
			fprintf(wfp, "%c", aa[i]);
		}
		fprintf(wfp, "\n");

		//fputs(aa, wfp);
	}

	fclose(rfp);
	fclose(wfp);

	return 0;
}