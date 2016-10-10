/* Hello World program */

#include<stdio.h>

unsigned int get_digit(unsigned int value, unsigned int position);
unsigned int count(unsigned int i);

main()
{
    unsigned int value;
    unsigned int position;
    position = 3;
    value = 231456;
    int digit;
    digit = get_digit(value, position);
    printf("%d", digit);
}

unsigned int get_digit(unsigned int value, unsigned int position) {

    if(count(value) < position){
        return -1;
    }
    unsigned int digit = 0;
    for (int i = 0; i <= position; i++) {
        digit = value % 10;
        value = value / 10;
    }
    return digit;
}

unsigned int count(unsigned int i){
    unsigned int number = 1;
    while(i/=10){
        number++;
    }
    return number;
}