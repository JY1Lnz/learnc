/*struct name{};  定义结构
  suruct name test = {};  给test使用结构
  gets（）  = scanf（）;
*/
#include<stdio.h>

struct test_2{
    char first[20];
    char second[20];
};
struct test{
    struct test_2 test;
    char title[40];
    char name[40];
    int value;
};
int main()
{
    struct test book_1 = {
        {"aaa","bbb"},
        .title = "test1",
        .name = "hhh",
    };
    struct test * him;
    him = &book_1;
    book_1.value = 120;
    printf("%s,%s,%d\n",book_1.title,book_1.name,book_1.value);
    printf("%s\n",book_1.test.first);
    printf("%s",him->title);


    return 0;
}
