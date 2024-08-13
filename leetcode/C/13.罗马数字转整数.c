/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
int romanToInt(char *s)
{
    int result = 0;
    int value0 = 0; // 前一个字符的值

    for (int i = strlen(s) - 1; i >= 0; i--) // 从后往前遍历
    {
        int value1 = 0; // 当前字符的值

        switch (s[i])
        {
        case 'I':
            value1 = 1;
            break;
        case 'V':
            value1 = 5;
            break;
        case 'X':
            value1 = 10;
            break;
        case 'L':
            value1 = 50;
            break;
        case 'C':
            value1 = 100;
            break;
        case 'D':
            value1 = 500;
            break;
        case 'M':
            value1 = 1000;
            break;
        default:
            break;
        }
        if (value1 < value0)
        {
            result -= value1;
        }
        else
        {
            result += value1;
        }
        value0 = value1;
    }
    return result;
}
// @lc code=end
