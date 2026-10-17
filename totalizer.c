#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <windows.h>
#include<locale.h>
#include<conio.h>
#include <limits.h>
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

    long long a = 0;  //加数1
    long long b = 0;  //加数2
    int i = 0;  //计数器
    printf("请自行输入两个整数,系统将自动计算它们的和,输入5次后程序结束 \n");

    while(i != 5 ){
        int rc = scanf("%lld %lld", &a, &b);
        if(rc == EOF){          //输入结束(如 Ctrl+Z)，退出循环
            break;
        }
        if(rc != 2){            //输入的不是两个整数，清空本行后重新输入
            int ch;
            while((ch = getchar()) != '\n' && ch != EOF);
            printf("输入格式有误,请重新输入两个整数 \n");
            continue;
        }
        {                       //只取本行的前两个整数，丢弃本行多余的内容
            int ch;             //否则多输的第3个数会留到下一轮，和下次输入配对
            while((ch = getchar()) != '\n' && ch != EOF);
        }
        if(a == 0 || b == 0){   //输入 0 视为强制退出
            printf("已强制退出,");
            break;
        }
        if(a < 0 || b < 0){     //负数不接受
            printf("输入的整数为负数 \n");
            continue;
        }
        if(c_(a, b) != 0){      //相加会超出 long long，提示溢出
            printf("输入的整数溢出 \n");
            continue;
        }
        long long sum = add(a, b);
        printf("您输入的两个整数分别是：%lld和%lld \n", a, b);
        i++;
        printf("结果是：%lld\t 已用%d次", sum, i);
        printf("\n");
    }

    printf("程序结束，感谢试用！\n");
    return 0;
}
/*创造者：“洋阳羊真帅”
      very good    
    我真的太帅了！*/