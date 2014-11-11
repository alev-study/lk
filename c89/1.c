int main(void) {
    int i, y, z;
    printf("%d\n", 5 < 6 ? i = 0, y++, printf("wow\n"), z = i + y : 0);
    // Gets error:
    // printf("%d\n", 5 < 6 ? i = 0, y++, printf("wow\n"), z = i + y : y = 5, i = 1);

    i = 4;

    if(y = 5, i*y > 19) {
        printf("Yahoo\n");
    }

    return 0;
}

