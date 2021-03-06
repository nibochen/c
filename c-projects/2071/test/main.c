#include <stdio.h>

int getLen(char* s) {
    int len = 0;
    int i = 0;
    while(s[i] != 0) {
        // 遍历从0到i-1都没有出现s[i]
        for (int j = 0; j < i; j++) {
            if (s[j] == s[i]) {
                // 重复了，终止计算
                return len;
            }
        }
        len++;
        i++;
    }
    return len;
}

int lengthOfLongestSubstring(char * s){
    int max = 0;
    while(*s != 0) {
        // 对于每个s，找到从它开始的不重复字符串的长度
        int curr = getLen(s);
        if (curr > max)
            max = curr;
        s++;
    }
    return max;
}

int main() {
    char* s = "";
    printf("%d\n", lengthOfLongestSubstring(s));
    return 0;
}

#if 0
int main(int argc, const char * argv[]) {
    int i = 0, no;
    int x = 1;
    printf("请输入一个正整数：");
    scanf("%d", &no);
    while(x <= no){
        printf("pow(2,%d) = %d\n",i,x);
        x = x * 2;
        i++;
        //printf("pow(2,%d) = %g\n",i,pow(2,i));
    }
    return 0;
}
#endif
