#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    FILE *fp1, *fp2;

    if (argc != 2) {
        fprintf(stderr, "사용법: %s 파일이름1 파일이름2\n", argv[0]);
        exit(1);
    }
    if ((fp1 = fopen(argv[1], "rb")) == NULL ||
        fp2 = fopen(argv[2], "rb")) == NULL) {

        fprintf(stderr, "파일 열기 오류\n");
        exit(2);
    }

    fseek()

    return 0;
}