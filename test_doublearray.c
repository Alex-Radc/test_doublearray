#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main(void) {
	int arr[3][3] = {{5,3,2},
					{1,7,4},
					{8,6,9}};

	int index[3] = {0};
	int i = 0;
	int j = 0;
	int min = 0;

	for (j = 0; j < 9; j++)
	{
		int min_index = 0;
		for(i = 0; i < SIZE; i++)
		{
			if (index[i] < SIZE)
			{
				min_index = i;
				min = arr[index[i]][i];
				i++;
				break;
			}
		}

		for(; i < SIZE; i++)
		{
			if (index[i] < SIZE)
			{
				printf("min = %d cur = %d\n", min ,arr[index[i]][i]);
				if(min > arr[index[i]][i])
				{
					min = arr[index[i]][i];
					min_index = i;
				}
			}
		}

		printf("min = %d\n", min);
		if (index[min_index] < SIZE)
		{
			index[min_index]++;
		}
	}

	return EXIT_SUCCESS;
}
