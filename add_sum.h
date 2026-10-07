int add(int x, int y){
    return x + y;
}

int c_(int x, int y){
    long long sum = (long long)x + y;
    if (sum > INT_MAX || sum < INT_MIN) {
        return 1;
    }
    return 0;
}
// c_函数由deepseek帮助编写