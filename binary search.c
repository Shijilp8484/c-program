/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int list[] = {20, 30, 40, 50, 60};
    int size=sizeof(list)/sizeof(list[0]);
    int num, left = 0, right = size - 1, middle,i;
   

    printf("Enter the element to search: ");
    scanf("%d", &num);

    while (left <= right) {
        middle = (left + right) / 2;

        if (list[middle] == num) {
            printf("Element found at index %d\n", middle);
        return 0;
            
        } else if (list[middle] > num) {
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }
        printf("Element not found\n");

    return 0;
}
