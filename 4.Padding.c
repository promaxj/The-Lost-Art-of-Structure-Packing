#include<stdio.h>
void main(void) {
    /*for 64-bit machine*/
    struct fool1 {
        char *p;
        char c;
        int x;
    } fool1;
    printf("size of fool: \t\t%ld\n", sizeof(fool1));
    struct fool1_add {
        char *p;      /* 4 or 8 bytes */
        char c;       /* 1 byte */
        char pad[3];  /* 3 bytes */
        int x;        /* 4 bytes */
    } fool1_add;
    printf("size of fool: \t\t%ld\n\n", sizeof(fool1_add));




    struct fool2 {
        char *p;
        char c;
        short x;
    } fool2;
    printf("size of fool2: \t\t%ld\n", sizeof(fool2));
    struct fool2_add {
        char *p;    /* 8 bytes */
        char c;     /* 1 byte */
        char pad[5];/* 5 byte */
        short x;    /* 2 byte */
    } fool2_add;
    printf("size of fool2_add: \t%ld\n\n", sizeof(fool2_add));




    struct fool3 {
        char *p;
        char c;
        long x;
    } fool3;
    printf("size of fool3: \t\t%ld\n", sizeof(fool3));
    struct fool3_add {
        char *p;     /* 8 bytes */
        char c;      /* 1 byte */
        char pad[7]; /* 7 bytes */
        long x;      /* 8 bytes */
    } fool3_add;
    printf("size of fool3_add: \t%ld\n\n", sizeof(fool3_add));




    struct fool4 {
        char c;
        char *p;
        int x;
    } fool4;
    printf("size of fool4: \t\t%ld\n", sizeof(fool4));
    struct fool4_add {
        char c;     /* 1 bytes */
        char pad[7];/* 7 bytes */
        char *p;    /* 8 bytes */
        int x;      /* 4 bytes */
        int x_pad;  /* 4 bytes */   
    } fool4_add;
    printf("size of fool4_add: \t%ld\n\n", sizeof(fool4_add));
}

