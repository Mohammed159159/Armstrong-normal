#include<stdio.h>
#include<stdbool.h>

bool arm(int num);


int main() {

    int num;
    printf(" Enter A number: ");
    scanf_s(" %d", &num);
    if (arm(num))
        printf("\n\n %d is Armstrong", num);
    else printf("\n\n %d is Not Armstrong", num);
}



bool arm(int num) {

    int acc;
    int reslut = 0;
    int c = num;
    while (num > 0) {
        acc = num % 10;
        num = num / 10;
        reslut += acc * acc * acc;
    }


    return (reslut == c) ? true : false;
}