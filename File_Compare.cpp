#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXLINE 1024
int main(int argc, char *argv[]){
    system("chcp 65001");
    //声明两个文件指针
    FILE *fp1,*fp2;
    //声明两个字符串数组来存储文件内容
    char str1[MAXLINE],str2[MAXLINE];
    //记录行数
    int line_num = 1;
    //检查命令行参数是否正确(判断是否为两个文件)
    if (argc != 3) {
        printf("用法: %s file1 file2\n", argv[0]);
        return 1;
    }
    //打开两个文件
    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "r");
    //检查文件是否成功打开
    if(fp1 == NULL || fp2 == NULL) {
        printf("无法打开文件\n");
        return 1;
    }
    //读取文件内容
    while(true){
        //
        char *res1 = fgets(str1, MAXLINE, fp1);
        char *res2 = fgets(str2, MAXLINE, fp2);
        //如果两个文件都读到末尾，退出循环
        if(res1 == NULL && res2 == NULL) {
            break;
        }
        //如果一个文件读到末尾而另一个没有，说明文件不同
        if(res1 == NULL || res2 == NULL|| strcmp(str1, str2) != 0) {
            printf("第%d行不同：\n", line_num);
            printf("文件1: %s", res1 ? str1 : "EOF\n");
            printf("文件2: %s", res2 ? str2 : "EOF\n");
            break;
        }
        line_num++;
    }
    //关闭文件
    fclose(fp1);
    fclose(fp2);
    return 0;
}