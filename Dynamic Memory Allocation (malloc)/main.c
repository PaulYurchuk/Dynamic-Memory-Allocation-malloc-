//
//  main.c
//  Dynamic Memory Allocation (malloc)
//
//  Created by Paul Yurchuk on 31.10.16.
//  Copyright © 2016 Paul Yurchuk. All rights reserved.
//
//
//#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    for(int i = 1; i < 7; i++){
//        for(int j = 0; j < i; j++)
//            printf("*", j); //you can put i there and get same result.
//        printf("\n");
//    }
//    return 0;
//}

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int n = 1;
    for(int i = 0; i < 5; i++){
        printf("%d******", (int)pow(n,n+1));
    }
    return 0;
}
