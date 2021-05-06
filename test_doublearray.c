#include <stdio.h>
#include <stdlib.h>

#define ROW 4
#define LINE 5

int main(void) {
	int arr[LINE][ROW] = {{4,3,2,1},
					      {8,6,7,5},
					      {12,11,10,9},
					      {16,15,14,13},
					      {20,18,19,17}};

	int index[4] = {0};
	int i = 0;
	int j = 0;
	int min = 0;

	for (j = 0; j < ROW*LINE; j++)
	{
		int min_index = 0;
		for(i = 0; i < ROW; i++)
		{
			if (index[i] < LINE)
			{
				min_index = i;
				min = arr[index[i]][i];
				i++;
				break;
			}
		}

		for(; i < ROW; i++)
		{
			if (index[i] < LINE)
			{
				//printf("min = %d cur = %d\n", min ,arr[index[i]][i]);
				if(min > arr[index[i]][i])
				{
					min = arr[index[i]][i];
					min_index = i;
				}
			}
		}
		printf("min = %d\n", min);
		if (index[min_index] < LINE)
		{
			index[min_index]++;
		}
	}
	return EXIT_SUCCESS;
}
