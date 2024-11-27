#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int lenght_text(string text);
int main(void)
{
    string text = get_string("请输入文本：");
    int len = lenght_text(text);
}

int lenght_text(string text)
{
 // 初始化计数器
    int num_letters = 0;
    int num_words = 0;
    int num_sentences = 0;

    // 标记是否在单词中
    int in_word = 0;

    // 遍历文本，计算字母、单词和句子的数量
    for (int i = 0, n = strlen(text); i < n; i++) {
        if (isalpha(text[i])) {
            // 是字母
            num_letters++;
            // 如果之前不在单词中，现在开始一个新单词
            if (!in_word) {
                num_words++;
                in_word = 1;
            }
        } else {
            // 不是字母
            if (text[i] == ' ' || text[i] == '\t' || text[i] == '\n') {
                // 是空格、制表符或换行符，离开单词
                in_word = 0;
            }
            if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
                // 是句子的结束标志
                num_sentences++;
            }
        }
    }

    if(num_words == 0){
        printf("文本中没有找到单词。\n");
        return 1;
    }
    // 计算L和S
    float L = ((float)num_letters / num_words) * 100;
    float S = ((float)num_sentences / num_words) * 100;

    // 计算Coleman-Liau指数
    float index = 0.0588 * L - 0.296 * S - 15.8;

    // 四舍五入到最接近的整数
    int grade_level = (int)(index + 0.5);

    // 打印年级水平
    if (grade_level < 1) {
        printf("大约阅读水平：Before Grade 1\n");
    } else if (grade_level >= 16) {
        printf("大约阅读水平：Grade 16+\n");
    } else {
        printf("大约阅读水平：Grade %d\n", grade_level);
    }

    return 0;
}
