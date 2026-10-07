#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <windows.h>
#include<locale.h>
#include<conio.h>
#include"add_sum.h"

int main(){
    setlocale(LC_ALL, "zh_CN.UTF-8");
    char d [] = "欢迎使用我的加法计算器";
    char left [100] = {0};
    size_t len = strlen(d);
    size_t step = sizeof(char);
    for(size_t e = 0; e < len; e++){
        memcpy(left + e, d + e, step);
        printf("%s", left);
        for(int j = 0; j < 20; j++){
            if(_kbhit()){
                if(_getch() == '\r'){  // ESC key
                   goto end_anim;
                }
            }
        Sleep(10);
        }
        system("cls");
    }
end_anim:
    printf("\r");
    for(int k = 0; k < 80; k++){
        printf(" ");
    }
    printf("\r");

    int a = 0;  //加数1
    int b = 0;  //加数2
    int i = 0;  //计数器
    printf("请自行输入两个整数,系统将自动计算它们的和,输入5次后程序结束 \n");

    while(i != 5 ){
    scanf("%d %d", &a, &b);
        if(a != 0 && b != 0 && c_(a , b) == 0){
            if(a < 0 || b < 0){
                printf("输入的整数为负数或溢出\n");
                continue;
            }
        int sum = add(a, b);
        printf("您输入的两个整数分别是：%d和%d \n", a, b);
        printf("结果是：%d\t 还剩%d次使用", sum, 5 - i - 1);
        i++;
        printf("\n");
        }
        else{
            printf("已强制退出,");
            break;
        }
    }

    printf("程序结束，感谢试用！\n");
    return 0;
}
/*创造者：“洋阳羊真帅”
      very good    
    我真的太帅了！*/