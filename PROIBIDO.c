#include <stdio.h>
#include <stdlib.h>

int heapSize;

void Heapify(int* A, int i)
{
  int l = 2 * i + 1;
  int r = 2 * i + 2;
  int largest;

  if(l <= heapSize && A[l] > A[i])
    largest = l;
  else
    largest = i;
  if(r <= heapSize && A[r] > A[largest])
    largest = r;
  if(largest != i)
    {
      int temp = A[i];
      A[i] = A[largest];
      A[largest] = temp;
      Heapify(A, largest);
    }
}

void BuildHeap(int* A, int size)
{
  heapSize = size - 1;
  int i;
  for(i = (size - 1) / 2; i >= 0; i--)
    Heapify(A, i);
}

void HeapSort(int* A, int size)
{
  BuildHeap(A, size);
  int i;
  for(i = size - 1; i > 0; i--)
    {
      int temp = A[heapSize];
      A[heapSize] = A[0];
      A[0] = temp;
      heapSize--;
      Heapify(A, 0);
    }
}

int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        // If the element is present at the middle 
        // itself
        if (arr[mid] == x)  
            return mid;
 
        // If element is smaller than mid, then 
        // it can only be present in left subarray
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid-1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid+1, r, x);
   }
 
   // We reach here when element is not 
   // present in array
   return -1;
}

int main(int argc, char const *argv[])
{
	int n, *vetor, numero, i, achou;

	scanf("%d", &n);

	vetor = (int *) malloc(sizeof(int)*n);

	for (i=0; i<n; i++) {
		scanf("%d", &vetor[i]);
	}

	HeapSort(vetor, n);

	while (scanf("%d", &numero) != EOF) {
		printf("%s\n", (binarySearch(vetor, 0, n-1, numero) != -1)?"sim":"nao");
	}

	return 0;
}