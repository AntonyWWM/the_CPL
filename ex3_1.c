#include <stdio.h>
#include <time.h>

int binsearch(int x, int v[], int n){
    int low, high, mid;
    low = 0;
    high = n-1;

    while(low <= high){
        mid = (low + high)/2;
        if(x == v[mid]){
            return mid;
        }
        else if(x < v[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}
int main(){
    int v[10000];
    int n = 10000;
    int x = 5999;

    clock_t start_time = clock();
    int result = binsearch(x,v,n);
    clock_t end_time = clock();

    if (result != -1){
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    double elapsed_time = (double)(end_time - start_time)/CLOCKS_PER_SEC;
    printf("Elapsed time: %f seconds\n", elapsed_time);
    return 0;

}