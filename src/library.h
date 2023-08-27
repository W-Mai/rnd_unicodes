#ifndef RND_UNICODES_LIBRARY_H
#define RND_UNICODES_LIBRARY_H

#include <stdint.h>

typedef uint32_t unicode_t;
typedef uint8_t utf8_t;

extern uint32_t ALPHANUM_AND_CJK_TABLE[];
extern const uint32_t ALPHANUM_AND_CJK_TABLE_LEN;

extern uint32_t ONLY_CJK_TABLE[];
extern const uint32_t ONLY_CJK_TABLE_LEN;

extern uint32_t ALPHANUM_TABLE[];
extern const uint32_t ALPHANUM_TABLE_LEN;

int random_utf8_chars(utf8_t *buf, int buf_len, unicode_t *ranges, uint32_t range_num, int char_num);

#endif //RND_UNICODES_LIBRARY_H
