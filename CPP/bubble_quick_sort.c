#include <stdio.h>
#include <time.h>
#include <pthread.h>


void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1); 
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
    pthread_t thread_id1, thread_id2;
	int arr[] = { 12, 1, 4, 2, 8, 3, 5, 7, 8, 6, 20, 19, 17, 18, 15, 16, 11, 13, 14, 9, 10, 30, 25, 26, 24, 23, 22, 27, 21, 28, 29, 35, 34, 33, 32, 31, 39, 40, 38, 36, 37};
	int size = sizeof(arr) / sizeof(arr[0]);
    clock_t start_time_b_sort = clock() ;
    pthread_create(&thread_id, NULL, bubbleSort, arr, size);
    pthread_join(thread_id, NULL);
	//bubbleSort(arr, size);
	printf("Sorted array with Bubble sort algorithm is : \n");
	printArray(arr, size);
    clock_t end_time_b_sort  = clock() ;
    double bubble_sort_elapsed_time = (end_time_b_sort-start_time_b_sort)/(double)CLOCKS_PER_SEC ;
    printf("Total profiling time taken by Bubble sort to sort 40 elements = %lf seconds\n", bubble_sort_elapsed_time);
    clock_t start_time_q_sort = clock() ;
	quickSort(arr, 0, size - 1);
	printf("Sorted array with Quick sort algorithm is: \n");
	printArray(arr, size);
    clock_t end_time_q_sort  = clock() ;
    double quick_sort_elapsed_time = (end_time_q_sort-start_time_q_sort)/(double)CLOCKS_PER_SEC ;
    printf("Total profiling time taken by Quick sort to sort 40 elements = %lf seconds\n", quick_sort_elapsed_time);
	return 0;
}
