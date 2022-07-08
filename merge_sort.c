#include <stdio.h>

void sort(int initial, int last);
void print_array(int arr[], int initial, int lastone);
void sort1(int temp[], int init, int last);
void mergeSort1(int temp[], int init, int last);
void print_array2(int arr[], int lastone, char name);

int x[10] = {5,2,8,1,9,7,3,4,0,6};
//int b[11];

int main(void)
{
    print_array(x, 0, 10);
    print_array2(x, 10, 'x');
//	printf("Array: ");
//	for (int i = 0; i < 10; i++)
//	{	
//		printf(" %i ", x[i]);
//	}
//    printf("len: %i\n", (x));

	int initial = 0;
	int lastone = 10;
	int middle;
    
//	sort(initial, lastone);
    printf("\n");
//    int k1[] = {1,2,3,4,5,6,7,8,9,10};
//    print_array(k1, 0, 10);
    print_array(x, 0, 10);
    int temp[11];
    for (int i = 0; i < 10; i++)
    {	
        temp[i] = x[i];
    }
    sort1(temp, 0, 9);
    print_array(temp, 0, 10);
//    print_array(x, 0, 10);
//    print_array(b, 0, 10);
    
}

void sort(int initial, int last)
{
    int middle = (int)(last - initial) / 2;
    if((last - initial) <= 1){
        return;
    }
    else
    {
        sort(initial, middle);
    }
    printf("middle: %i\n", middle);
    
}

void sort1(int *temp, int init, int last)
{
    if (init >= last)
    {
        return;
    }
    else
    {
        int mid = (init + last) / 2;
        sort1(temp, init, mid);
        sort1(temp, mid + 1, last);
        mergeSort1(temp, init, last);
    }
}

void mergeSort1(int *temp, int init, int last)
{
    int index = 0;
    int leftStart = init;
    int leftEnd = (init + last) / 2;
    int rightStart = leftEnd + 1;
    int rightEnd = last;
    int b[last+1];
    
    printf("\n --new cycle: \n \nLS: %i \nLE: %i \nRS: %i \nRE: %i \n", leftStart, leftEnd, rightStart, rightEnd);
    
    while (leftStart <= leftEnd && rightStart <= rightEnd)
    {
        printf("index: %i \n", index);
        print_array2(b, 10, 'b');
        print_array2(temp, 10, 't');
        if (temp[leftStart] <= temp[rightStart])
        {
            b[index] = temp[leftStart];
            leftStart++;
            index++;
        }
        else
        {
            b[index] = temp[rightStart];
            rightStart++;
            index++;
        }
    }
    
    while(leftStart <= leftEnd)
    {
        b[index] = temp[leftStart];
        index++;
        leftStart++;
    }
    
    while(rightStart <= rightEnd)
    {
        b[index] = temp[rightStart];
        index++;
        rightStart++;
    }
    
    printf("\nstatus temp: \n");
    print_array2(temp, 10, 't');   
    printf("status b: \n");
    print_array2(b, 0, 'b');
    
    index--;
    while (index >= 0)
    {
        temp[index + init] = b[index];
        index--;
    }
    
    printf("\nstatus temp: \n");
    print_array2(temp, 10, 't');   
    printf("status b: \n");
    print_array2(b, 0, 'b');
}
    
void print_array(int arr[], int initial, int lastone)
{
    printf("\nStartint printing\n");
    for (int i = initial; i < lastone; i++)
    {
        printf("%i", arr[i]);
    }
    printf("\nEnding printing\n");
}

void print_array2(int arr[], int lastone, char name)
{
    int i = 0;
    printf("print Array %c: ", name);
    while (i < lastone)
    {
        printf(" %i ", arr[i]);
        i++;
    }
    printf("\n");
}
