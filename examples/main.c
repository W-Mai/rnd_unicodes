//
// Created by W-Mai on 2023/8/27.
//

#include "../src/library.h"
#include "stdio.h"

#define BUF_LEN 1024

utf8_t chars[BUFSIZ];

int main() {
    int len = random_utf8_chars(chars, BUF_LEN, ALPHANUM_AND_CJK_TABLE, ALPHANUM_AND_CJK_TABLE_LEN, 256);

    printf("LEN: %d\n%s\n", len, chars);
    return 0;
}
