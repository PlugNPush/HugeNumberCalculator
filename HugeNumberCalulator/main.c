//
//  main.c
//  HugeNumberCalulator
//
//  Created by PlugN on 5.10.20..
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    for (int i = 1; i <= 100; i++) {
        if (i % 15 == 0) {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }
    return EXIT_SUCCESS;
}
