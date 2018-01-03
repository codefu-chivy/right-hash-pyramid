#include <stdio.h>
#include <cs50.h>

// declare make_pyramid function
void make_pyramid(int size);

int main(void) {
    int height;
    // re-prompt while input is less than 0 or greater than 23
    do {
        printf("Enter pyramid height: ");
        height = get_int();
    }
    while (height < 0 || height > 23);
    make_pyramid(height);
}

void make_pyramid(int size) {
    int spaces = size - 1;
    int hash = 2;
    for (int i = 0; i < size; i++) {
        // print spaces, whose number will decrease every iteration of i
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        // print hashes, whose number will increase every iteration of i
        for (int k = 0; k < hash; k++) {
            printf("#");
        }
        printf("\n");
        spaces--;
        hash++;
    }
}