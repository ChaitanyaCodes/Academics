#include <stdio.h>
#include <conio.h>
void create(int[]);
void down_adjust(int[], int);

int main()
{
	int heap[50], n, i, lastElem, temp;

	printf("Enter no. of elements: ");
	scanf("%d", &n);

	printf("\nEnter the elements: ");
	for (i = 1; i <= n; i++)
		scanf("%d", &heap[i]);

	heap[0] = n;
	create(heap);

	while (heap[0] > 1)
	{

		lastElem = heap[0];
		temp = heap[1];
		heap[1] = heap[lastElem];
		heap[lastElem] = temp;
		heap[0]--;
		down_adjust(heap, 1);
	}

	printf("\nSorted array: \n");
	for (i = 1; i <= n; i++)
		printf("%d\t", heap[i]);
	getch();
	return 0;
}

void create(int heap[])
{
	int i, n;
	n = heap[0];

	for (i = n / 2; i >= 1; i--)
		down_adjust(heap, i);
}

void down_adjust(int heap[], int i)
{
	int j, temp, n, flag = 1;
	n = heap[0];

	while (2 * i <= n && flag == 1)
	{
		j = 2 * i;
		if (j + 1 <= n && heap[j + 1] > heap[j])
			j = j + 1;
		if (heap[i] > heap[j])
			flag = 0;
		else
		{
			temp = heap[i];
			heap[i] = heap[j];
			heap[j] = temp;
			i = j;
		}
	}
}
