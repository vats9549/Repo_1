#include<stdio.h>
void readArray(int* arr,int size)
{
	int i = 0, x;
	scanf_s("%d", &x);
	for (i = 0; i < x; i++)
	{
		scanf_s("%d", &arr[i]);
	}
}

void printArray(int* arr, int size)
{
	int  i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
	printf("End\n");
}

int main()
{
	int arr[100], size;
	printf("Enter size of array");
	scanf_s("%d", &size);
	readArray(arr, size);
	printArray(arr, size);
	mergeSort(arr,0,size-1);
	printArray(arr, size);

}
void mergeSort(int arr, int l, int r) {
    int m;
	while (l < r) {
		m = (l + r - 1)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr,l,m,r);
	}
	printf("End\n");
}
void merge(int* arr, int l, int m, int r)
{
    int i=0, j=0, k=1;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;}
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
    printf("End\n");

}
