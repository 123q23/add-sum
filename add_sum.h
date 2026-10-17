#include <limits.h>

long long add(long long x, long long y){
    return x + y;
}

// 判断 x + y 是否会超出 long long 的范围。
// 这里用“先比较再相加”的写法，避免 x + y 本身就已经溢出（有符号溢出是未定义行为）。
int c_(long long x, long long y){
    if (y > 0 && x > LLONG_MAX - y) {
        return 1;   // 正溢出
    }
    if (y < 0 && x < LLONG_MIN - y) {
        return 1;   // 负溢出
    }
    return 0;
}
// c_函数由deepseek帮助编写