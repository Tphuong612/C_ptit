#include <stdio.h>
int main(void){
    
    int arr[6] = {1, 3, 4, 5};
    
    printf("Mang ban dau:\n");
    for(short i = 0; i < 6; i++) printf("%d ", arr[i]);

   
    arr[4] = 4;
    arr[5] = 8;

    printf("\nMang sau khi them phan tu:\n");
    for(short i = 0; i < 6; i++) printf("%d ", arr[i]);
}
