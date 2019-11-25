#include<stdio.h>
void main(void) {
    // for 64-bit system
    struct fool1 {
        char *p;    
        char c;     
        long x;     
    } fool1;
    printf("size of fool: \t\t%ld\n", sizeof(fool1));

    struct fool1_add {
        char *p;    /* size: 8 byte */
        char c;     /* size: 1 byte */
        char pad[7];/* size: 7 byte */
        long x;     /* size: 8 byte */
    } fool1_add;
    printf("size of fool1_add: \t%ld\n", sizeof(fool1_add));

    struct foo2 {
        char c;      /* 1 byte */
        char pad[7]; /* 7 bytes */
        char *p;     /* 8 bytes */
        long x;      /* 8 bytes */
    } foo2;
    printf("size of fool2: \t\t%ld\n", sizeof(foo2));

    printf("\n");















    struct foo3 {
        char *p;     
        char c;      
    } foo3;
    printf("size of fool3: \t\t%ld\n", sizeof(foo3));



    struct foo3_add {
        char *p;     /* 8 bytes */
        char c;      /* 1 byte */
        char pad[7]; /* 7 byte */
    } foo3_add;
    printf("size of fool3_add: \t%ld\n", sizeof(foo3_add));

    printf("\n");















    struct foo4 {
        short s;     
        char c;      
    } foo4;
    printf("size of fool4: \t\t%ld\n", sizeof(foo4));



    struct foo4_add {
        short s;     /* 2 bytes */
        char c;      /* 1 byte */
        char pad[1]; /* 1 byte */
    } foo4_add;
    printf("size of fool4_add: \t%ld\n", sizeof(foo4_add));

    printf("\n");















    struct foo5 {
        char c;
        struct foo5_inner {
            char *p;
            short x;
        } inner;
    } foo5;
    printf("size of fool5: \t\t%ld\n", sizeof(foo5));



    struct foo5_add {
        char c;           /* 1 byte*/
        char pad1[7];     /* 7 bytes */
        struct foo5_inner2 {
            char *p;      /* 8 bytes */
            short x;      /* 2 bytes */
            char pad2[6]; /* 6 bytes */
        } inner2;
    } foo5_add;
    printf("size of fool5_add: \t%ld\n", sizeof(foo5_add));
}