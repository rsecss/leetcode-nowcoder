// BC1 实践出真知
#include <stdio.h>

int main()
{
    printf("Practice makes perfect!");
    return 0;
}

// BC2 我是大V
#include <stdio.h>

int main()
{
    printf("v   v\n");
    printf(" v v\n");
    printf("  v\n");

    // printf("v   v\n v v\n  v\n");
    return 0;
}

// BC3 有容乃大
#include <stdio.h>

int main()
{
    printf("The size of short is %d bytes.\n", sizeof(short));
    printf("The size of int is %d bytes.\n", sizeof(int));
    printf("The size of long is %d bytes.\n", sizeof(long));
    printf("The size of long long is %d bytes.\n", sizeof(long long));

    return 0;
}

// BC6 小飞机
#include <stdio.h>

int main()
{
    printf("     **     \n");
    printf("     **     \n");
    printf("************\n");
    printf("************\n");
    printf("    *  *    \n");
    printf("    *  *    \n");

    return 0;
}

// BC7 缩短二进制
#include <stdio.h>

int main()
{
    printf("%#o %#X\n", 1234, 1234);
    return 0;
}

// BC8 十六进制转十进制
#include <stdio.h>

int main()
{
    int a = 0XABCDEF;
    printf("%15d\n", a);
    return 0;
}

// BC9 printf的返回值
#include <stdio.h>

// 方法一
int main()
{
    int a = printf("Hello world!");
    printf("\n%d", a);
    return 0;
}

// 方法二
int main()
{
    printf("\n%d\n", printf("Hello world!"));
    return 0;
}

// BC10 成绩输入输出
#include <stdio.h>

int main()
{
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to
        printf("score1=%d,score2=%d,score3=%d", a, b, c);
    }
    return 0;
}

// BC11 学生基本信息输入输出
#include <stdio.h>

int main()
{
    int a;
    float b = 0.0, c = 0.0, d = 0.0;
    while (scanf("%d;%f,%f,%f", &a, &b, &c, &d) != EOF)
    { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to
        printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", a, b, c, d);
    }
    return 0;
}

// BC12 字符圣诞树
#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    int i = 1;

    while (i < 6)
    {
        // 打印空格
        for (int j = 5 - i; j > 0; j--)
        {
            printf(" ");
        }
        // 打印字符
        for (int k = 0; k < i; k++)
        {
            printf("%c ", a);
        }
        printf("\n");
        i++;
    }

    return 0;
}

// BC13 ASCII码
#include <stdio.h>

int main()
{
    char arr[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};

    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < sz; i++)
    {
        printf("%c", arr[i]);
    }

    return 0;
}

// BC14 出生日期输入输出
#include <stdio.h>

int main()
{
    int year = 0;
    int month = 0;
    int date = 0;
    scanf("%4d%2d%2d", &year, &month, &date);
    printf("year=%d\n", year);
    printf("month=%02d\n", month);
    printf("date=%02d\n", date);

    return 0;
}

// BC15 按照格式输入并交换输出
#include <stdio.h>

int main()
{
    int a, b, tmp;
    scanf("a=%d,b=%d", &a, &b);

    // 交换
    tmp = a;
    a = b;
    b = tmp;

    printf("a=%d,b=%d", a, b);

    return 0;
}

// BC16 字符转ASCII码
#include <stdio.h>

int main()
{
    char ch = 0;
    ch = getchar();
    printf("%d\n", ch);

    return 0;
}

// BC17 计算表达式的值
#include <stdio.h>

int main()
{
    int a = 40;
    int c = 212;

    printf("%d\n", (-8 + 22) * a - 10 + c / 2);

    return 0;
}

// BC18 计算带余除法
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a / b, a % b);

    return 0;
}

// BC19 反向输出一个四位数
#include <stdio.h>

int main()
{
    int a = 0;
    while (scanf("%d", &a) != EOF)
    { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to
        while (a)
        {
            printf("%d", a % 10);
            a = a / 10;
        }
    }
    return 0;
}

// BC20 kiki算数
#include <stdio.h>

int main()
{
    int a, b;

    // 输入
    scanf("%d %d", &a, &b);

    // 计算
    int sum = (a % 100 + b % 100) % 100;

    // 输出
    printf("%d\n", sum);

    return 0;
}

// BC21 浮点数的个位数字
#include <stdio.h>

int main()
{
    double d = 0;
    // 输入
    scanf("%lf", &d);
    // 计算
    int n = (int)d; // 13.141->13
    // 输出
    printf("%d\n", n % 10);

    return 0;
}

// BC22 你能活多少秒
#include <stdio.h>

int main()
{
    int age = 0;

    // 输入
    scanf("%d", &age);

    // 计算
    long long sec = age * 3.156e7;

    // 输出
    printf("%lld\n", sec);

    return 0;
}

// BC25 计算体重指数
#include <stdio.h>

int main()
{
    int weight = 0;
    int high = 0;
    double BMI = 0;

    // 输入
    scanf("%d %d", &weight, &high);
    // 计算
    BMI = weight / ((high / 100.0) * (high / 100.0));
    // 输出
    printf("%.2lf", BMI);

    return 0;
}

// BC26 计算三角形的周长和面积
#include <math.h>
#include <stdio.h>

int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);

    // 计算
    double circumference = a + b + c;

    double p = (a + b + c) / 2;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    // 输出
    printf("circumference=%.2lf area=%.2lf\n", circumference, area);

    return 0;
}

// BC27 计算球体的体积
#include <math.h>
#include <stdio.h>

int main()
{
    double r = 0.0;
    double pi = 3.1415926;
    // 输入
    scanf("%lf", &r);

    // 计算
    double V = 4 / 3.0 * pi * pow(r, 3);

    // 输出
    printf("%.3lf\n", V);

    return 0;
}

// BC28 大小写转换
#include <stdio.h>

int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        // putchar(ch+32);
        printf("%c\n", ch + 32);
        getchar();
    }
    return 0;
}

// BC29 2的n次方计算
#include <stdio.h>

int main()
{
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        printf("%d\n", 1 << n);
    }
    return 0;
}

// BC35 判断字母
#include <ctype.h>
#include <stdio.h>

int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        // 判断
        if (isalpha(ch))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        // 处理\n
        getchar();
    }
    return 0;
}

// BC38 变种水仙花
#include <stdio.h>

int main()
{

    for (int i = 10000; i < 99999; i++)
    {
        int sum = 0;
        for (int j = 10; j <= 10000; j *= 10)
        {
            sum += (i / j) * (i % j);
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

// BC23 时间转换
#include <stdio.h>

int main()
{
    // 输入
    int sec = 0;
    int hour = 0;
    int minute = 0;
    int second = 0;
    scanf("%d", &sec);
    // 计算
    hour = sec / 60 / 60;
    minute = sec / 60 % 60;
    second = sec % 60;
    // 输出
    printf("%d %d %d\n", hour, minute, second);

    return 0;
}

// BC24 总成绩和平均分计算
#include <stdio.h>

int main()
{
    double a, b, c;
    // 输入
    scanf("%lf %lf %lf", &a, &b, &c);
    // 计算
    double sum = a + b + c;
    double average = sum / 3;
    // 输出
    printf("%.2lf %.2lf", sum, average);

    return 0;
}

// BC30 KiKi和酸奶
#include <stdio.h>

int main()
{
    int n = 0;
    int h = 0;
    int m = 0;
    // 输入
    while (scanf("%d %d %d", &n, &h, &m) != EOF)
    {
        // 计算和输出
        if (m % h)
        {
            printf("%d\n", n - m / h - 1);
        }
        else
        {
            printf("%d\n", n - m / h);
        }
    }

    return 0;
}

// BC31 发布信息
#include <stdio.h>

int main()
{
    printf("I lost my cellphone!\n");

    return 0;
}

// BC32 输出学生信息
#include <stdio.h>

int main()
{
    printf("Name    Age    Gender\n");
    printf("---------------------\n");
    printf("Jack    18     man");
    return 0;
}

// BC33 计算平均成绩
#include <stdio.h>

int main()
{
    int number[5] = {0};
    // 输入
    for (int i = 0; i < 5; i++)
    {
        scanf("%d ", &number[i]);
    }
    // 计算
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += number[i];
    }
    // 输出
    printf("%.1lf", sum / 5.0);

    return 0;
}

// BC34 进制A+B
#include <stdio.h>

int main()
{
    int a, b;
    // 输入
    scanf("%x %o", &a, &b);
    int sum = a + b;
    // 输出
    printf("%d\n", sum);
    return 0;
}

// BC36 健康评估
#include <stdio.h>

int main()
{
    double bmi = 0.0;
    double weight = 0.0;
    double high = 0.0;

    // 输入
    scanf("%lf %lf", &weight, &high);

    // 判断
    bmi = weight / (high * high);

    if (bmi >= 18.5 && bmi <= 23.9)
    {
        printf("Normal\n");
    }
    else
    {
        printf("Abnormal\n");
    }

    return 0;
}

// BC37 网购
#include <stdio.h>

int main()
{
    double price = 0.0;
    int month = 0;
    int day = 0;
    int flag = 0;

    // 输入
    scanf("%lf %d %d %d", &price, &month, &day, &flag);
    // 计算
    /*双十一*/
    if (month == 11 && day == 11)
    {
        price *= 0.7;
        if (flag == 1)
        {
            price -= 50;
        }
    }
    else if (month == 12 && day == 12)
    {
        price *= 0.8;
        if (flag == 1)
        {
            price -= 50;
        }
    }

    if (price < 0.0)
    {
        printf("%.2lf\n", 0.0);
    }
    else
    {
        printf("%.2lf\n", price);
    }
}

// BC39 争夺前五名
#include <stdio.h>

// 方法名
int main()
{
    int n;
    int arr[50] = {0};

    // 输入
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 冒泡排序——升序
    for (int i = 0; i < n - 1; i++) // 趟数
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    // 输出
    for (int i = n - 1; i >= n - 5; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

// 方法二
#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *e1, const void *e2)
{
    return *(int *)e1 - *(int *)e2;
}

int main()
{
    int n;
    int arr[50] = {0};

    // 输入
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 快排——调用库函数
    qsort(arr, n, 4, compare_int); // 升序

    // 输出
    for (int i = n - 1; i >= n - 5; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

// BC40 竞选社长
#include <stdio.h>

// 方法一
int main()
{
    char buffer[100] = {0};
    // 输入
    gets(buffer);
    // 统计
    int count_a = 0;
    int count_b = 0;
    int i = 0;
    while (buffer[i] != '0')
    {
        if (buffer[i] == 'A')
        {
            count_a++;
        }
        if (buffer[i] == 'B')
        {
            count_b++;
        }
        i++;
    }
    // 输出
    if (count_a > count_b)
    {
        printf("A\n");
    }
    else if (count_a < count_b)
    {
        printf("B\n");
    }
    else
    {
        printf("E\n");
    }

    return 0;
}

// 方法二

int main()
{
    char buffer[100] = {0};
    // 输入
    gets(buffer);
    // 统计
    int flag = 0;
    int i = 0;
    while (buffer[i] != '0')
    {
        if (buffer[i] == 'A')
        {
            flag++;
        }
        if (buffer[i] == 'B')
        {
            flag--;
        }
        i++;
    }
    // 输出
    if (flag > 0)
    {
        printf("A\n");
    }
    else if (flag < 0)
    {
        printf("B\n");
    }
    else
    {
        printf("E\n");
    }

    return 0;
}

// 方法三
#include <stdio.h>

int main()
{
    // 输入并统计
    int ch = 0;
    int flag = 0;
    while ((ch = getchar()) != '0' && ch != EOF)
    {
        if (ch == 'A')
        {
            flag++;
        }
        if (ch == 'B')
        {
            flag--;
        }
    }

    // 输出
    if (flag > 0)
    {
        printf("A\n");
    }
    else if (flag < 0)
    {
        printf("B\n");
    }
    else
    {
        printf("E\n");
    }

    return 0;
}

// BC41 你是天才吗？
#include <stdio.h>

// 方法一
int main()
{
    int IQ = 0;
    while (scanf("%d", &IQ) != EOF) // EOF是-1
    {
        if (IQ >= 140)
        {
            printf("Genius\n");
        }
    }

    return 0;
}

// 方法二
int main()
{
    int IQ = 0;
    while (~scanf("%d", &IQ)) //~按位取反
    {
        if (IQ >= 140)
        {
            printf("Genius\n");
        }
    }

    return 0;
}

// BC42 完美成绩
#include <stdio.h>

int main()
{
    int score = 0;
    while (scanf("%d", &score) != EOF)
    {
        if (score >= 90 && score <= 100)
        {
            printf("Perfect\n");
        }
    }
    return 0;
}

// BC43 及格分数
#include <stdio.h>

int main()
{
    int score = 0;
    while (scanf("%d", &score) != EOF)
    {
        if (score >= 60)
        {
            printf("Pass\n");
        }
        else
        {
            printf("Fail\n");
        }
    }
}

// BC44 判断整数奇偶性
#include <stdio.h>

int main()
{
    int number = 0;
    while (scanf("%d\n", &number) != EOF)
    {
        if (number % 2)
        {
            printf("Odd\n");
        }
        else
        {
            printf("Even\n");
        }
    }

    return 0;
}

// BC45 最高分数
#include <stdio.h>

// 方法一
void compare(int x, int y, int z)
{
    int max = x > y ? x : y;
    max = max > z ? max : z;

    printf("%d\n", max);
}

int main()
{
    int x, y, z;
    // 输入
    scanf("%d %d %d", &x, &y, &z);
    // 比较和输出
    compare(x, y, z);

    return 0;
}

// 方法二
#include <stdio.h>

int main()
{
    int max = 0;
    int number[3] = {0};
    // 输入
    scanf("%d %d %d", &number[0], &number[1], &number[2]);
    // 比较
    for (int i = 0; i < 3; i++)
    {
        if (number[i] > max)
        {
            max = number[i];
        }
    }
    // 输出
    printf("%d\n", max);

    return 0;
}

// BC46 判断是元音还是辅音
#include <stdio.h>

// 方法一
int main()
{
    char letter = 0;
    char array[] = "AaEeIiOoUu"; // 存放元音字母的数组
    // 输入
    while ((letter = getchar()) != EOF)
    {
        // 判断
        int i = 0;
        for (i = 0; i < 10; i++)
        {
            if (letter == array[i])
            {
                printf("Vowel\n");
                break;
            }
        }
        if (i == 10)
        {
            printf("Consonant\n");
        }

        // 处理\n
        getchar();
    }

    return 0;
}

// 方法二
int main()
{
    char letter = 0;
    char array[] = "AaEeIiOoUu"; // 存放元音字母的数组
    // 输入
    while ((letter = getchar()) != EOF)
    {
        // 判断
        int i = 0;
        for (i = 0; i < 10; i++)
        {
            if (letter == array[i])
            {
                printf("Vowel\n");
                break;
            }
        }
        if (i == 10)
        {
            printf("Consonant\n");
        }

        // 处理\n
        getchar();
    }

    return 0;
}

// BC47 判断是不是字母
// 方法一
#include <stdio.h>

int main()
{
    char ch = 0;
    while (scanf("%c\n", &ch) != EOF)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            printf("%c is an alphabet.\n", ch);
        }
        else
        {
            printf("%c is not an alphabet.\n", ch);
        }
    }

    return 0;
}

// 方法二
#include <ctype.h>
#include <stdio.h>

int main()
{
    char ch = 0;
    while (scanf("%c\n", &ch) != EOF)
    {
        if (isalpha(ch)) // isalpha判断字符是否为字母
        {
            printf("%c is an alphabet.\n", ch);
        }
        else
        {
            printf("%c is not an alphabet.\n", ch);
        }
    }

    return 0;
}

// BC48 字母大小写转换
#include <stdio.h>

// 方法一
int main()
{
    char ch = 0;
    while (scanf("%c\n", &ch) != EOF)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            printf("%c\n", ch + 32);
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            printf("%c\n", ch - 32);
        }
    }

    return 0;
}

// 方法二
#include <ctype.h>
#include <stdio.h>

int main()
{
    char ch = 0;
    while (scanf("%c\n", &ch) != EOF)
    {
        if (isupper(ch))
        {
            printf("%c\n", ch + 32);
        }
        else if (islower(ch))
        {
            printf("%c\n", ch - 32);
        }
    }

    return 0;
}

// 方法三
#include <ctype.h>
#include <stdio.h>

/**
 * isupper -判断字符是否为大写字母
 * islower -判断字符是否为小写字母
 * tolower -将字符转换为小写字母
 * toupper -将字符转换为大写字母
 */
int main()
{
    int ch = 0;
    while (scanf("%c\n", &ch) != EOF)
    {
        if (isupper(ch))
        {
            printf("%c\n", tolower(ch));
        }
        else if (islower(ch))
        {
            printf("%c\n", toupper(ch));
        }
    }

    return 0;
}

// BC49 判断两个数的大小关系
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (a == b)
        {
            printf("%d=%d\n", a, b);
        }
        else if (a > b)
        {
            printf("%d>%d\n", a, b);
        }
        else
        {
            printf("%d<%d\n", a, b);
        }
    }

    return 0;
}

// BC50 计算单位阶跃函数
#include <stdio.h>

int main()
{
    int t = 0;
    while (scanf("%d", &t) != EOF)
    {
        if (t > 0)
        {
            printf("%d\n", 1);
        }
        else if (t == 0)
        {
            printf("%.1f\n", 0.5);
        }
        else
        {
            printf("%d\n", 0);
        }
    }

    return 0;
}
// BC51 三角形判断
#include <stdio.h>

int main()
{
    int a, b, c;
    // 输入
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        // 判断是否为三角形
        if ((a + b > c) && (a + c > b) && (b + c > a))
        {
            // 如果是三角形
            if (a == b && b == c) // 等边
            {
                printf("Equilateral triangle!\n");
            }
            else if ((a == b && a != c && b != c) || (a == c && a != b && c != b) || (b == c && b != a && c != a)) // 等腰
            {
                printf("Isosceles triangle!\n");
            }
            else // 普通三角形
            {
                printf("Ordinary triangle!\n");
            }
        }
        else
        {
            printf("Not a triangle!\n");
        }
    }
}

// BC52 衡量人体胖瘦程度
#include <stdio.h>

int main()
{
    double bmi = 0.0;
    int weight = 0;
    int high = 0;
    // 输入
    while (scanf("%d %d", &weight, &high) != EOF)
    {
        // 输出BMI
        bmi = weight / ((high / 100.0) * (high / 100.0));

        // 分类
        if (bmi < 18.5)
        {
            printf("Underweight\n");
        }
        else if (bmi >= 18.5 && bmi <= 23.9)
        {
            printf("Normal\n");
        }
        else if (bmi > 23.9 && bmi <= 27.9)
        {
            printf("Overweight\n");
        }
        else
        {
            printf("Obese\n");
        }
    }
    return 0;
}

// BC53 计算一元二次方程
#include <math.h>
#include <stdio.h>

int main()
{
    double a = 0.0, b = 0.0, c = 0.0;
    // 输入
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        if (a == 0)
        {
            printf("Not quadratic equation\n");
        }
        else
        {
            double disc = b * b - 4 * a * c;
            if (disc == 0)
            {
                // 有两个相等的实根
                double mp = -b + sqrt(disc);
                if (mp == 0)
                {
                    printf("x1=x2=%.2lf\n", mp);
                }
                else
                {
                    printf("x1=x2=%.2lf\n", (-b + sqrt(disc)) / (2.0 * a));
                }
            }
            else if (disc > 0)
            {
                // 有两个不相等的实根
                printf("x1=%.2lf;x2=%.2lf\n",
                       (-b - sqrt(disc)) / (2.0 * a), (-b + sqrt(disc)) / (2.0 * a));
            }
            else
            {
                // 有两个虚根
                double real = (-b) / (2 * a);
                double image = sqrt(-disc) / (2 * a);
                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n",
                       real, image, real, image);
            }
        }
    }

    return 0;
}

// BC54 获得月份天数
#include <stdio.h>

int main()
{
    int year = 0;
    int month = 0;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // 输入
    while (scanf("%d %d", &year, &month) != EOF)
    {
        int day = days[month - 1];
        // 判断是否为闰年
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            if (month == 2)
            {
                day += 1;
            }
        }
        printf("%d\n", day);
    }
}

// BC55 简单计算器
#include <stdio.h>

int main()
{
    double a, b;
    char operator= 0;

    // 输入
    scanf("%lf%c%lf", &a, &operator, & b);
    // 选择
    switch (operator)
    {
    case '+':
        printf("%.4lf+%.4lf=%.4lf\n", a, b, a + b);
        break;
    case '-':
        printf("%.4lf-%.4lf=%.4lf\n", a, b, a - b);
        break;
    case '*':
        printf("%.4lf*%.4lf=%.4lf\n", a, b, a * b);
        break;
    case '/':
        if (b == 0.0)
        {
            printf("Wrong!Division by zero!\n");
        }
        else
        {
            printf("%.4lf/%.4lf=%.4lf\n", a, b, a / b);
        }
        break;
    default:
        printf("Invalid operation!\n");
        break;
    }

    return 0;
}

// BC56 线段图案
#include <stdio.h>

int main()
{
    int n = 0;
    // 输入
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// BC57 正方形图案
#include <stdio.h>

int main()
{
    int n = 0;
    // 输入
    while (scanf("%d", &n) != EOF)
    {
        // 行
        for (int i = 0; i < n; i++)
        {
            // 列
            for (int j = 0; j < n; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}

// BC58 直角三角形图案
#include <stdio.h>

int main()
{
    int n = 0;
    // 输入
    while (scanf("%d", &n) != EOF)
    {
        // 控制行
        for (int i = 0; i < n; i++)
        {
            // 打印一行
            for (int j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

// BC59 翻转直角三角形图案
#include <stdio.h>

int main()
{
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        for (int i = n; i > 0; i--)
        {
            for (int j = i; j > 0; j--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}

// BC60 带空格直角三角形图案
#include <stdio.h>

int main()
{
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                printf("  "); // 打印两个空格
            }

            for (int k = 0; k <= i; k++)
            {
                printf("* "); // 打印*和空格
            }
            printf("\n");
        }
    }

    return 0;
}

// BC61 金字塔图案
#include <stdio.h>

int main()
{
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                printf(" "); // 打印一个空格
            }

            for (int k = 0; k <= i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}

// BC62 翻转金字塔图案
#include <stdio.h>

int main()
{
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf(" ");
            }

            for (int k = 0; k < n - i; k++)
            {
                printf("* ");
            }

            printf("\n");
        }
    }
}

// BC63 菱形图案
#include <stdio.h>

int main()
{
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        // 打印上半部分
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i; j++)
            {
                printf(" ");
            }

            for (int k = 0; k <= i; k++)
            {
                printf("* ");
            }

            printf("\n");
        }

        // 打印下半部分
        for (int i = 0; i < n + 1; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf(" ");
            }

            for (int k = 0; k < n - i + 1; k++)
            {
                printf("* ");
            }

            printf("\n");
        }
    }

    return 0;
}

// BC64 K形图案
#include <stdio.h>

int main()
{
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        // 上半部分
        for (int i = 0; i < n + 1; i++)
        {
            for (int j = 0; j < n + 1 - i; j++)
            {
                printf("* ");
            }

            printf("\n");
        }

        // 下半部分
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i + 2; j++)
            {
                printf("* ");
            }

            printf("\n");
        }
    }

    return 0;
}

// BC65 箭形图案
#include <stdio.h>

int main()
{
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        /*上半部分*/
        // 控制行数
        for (int i = 0; i < n; i++)
        {
            /*控制每一行*/
            // 输出空格
            for (int j = n; j > i; j--)
            {
                printf("  ");
            }

            // 输出*
            for (int k = 0; k <= i; k++)
            {
                printf("*");
            }

            printf("\n");
        }

        /*下半部分*/
        // 控制行数
        for (int i = 0; i < n + 1; i++)
        {
            /*控制每一行*/
            // 输出空格
            for (int j = 0; j < i; j++)
            {
                printf("  ");
            }

            // 控制输出*
            for (int k = 0; k < n + 1 - i; k++)
            {
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}

// BC66 反斜线形图案
#include <stdio.h>

int main()
{
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        // 控制行数
        for (int i = 0; i < n; i++)
        {
            // 打印空格
            for (int j = 0; j < i; j++)
            {
                printf(" ");
            }

            // 打印*
            printf("*\n");
        }
    }

    return 0;
}

// BC67 正斜线形图案
#include <stdio.h>

int main()
{
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        // 控制行
        for (int i = 0; i < n; i++)
        {
            // 控制每行的空格
            for (int j = 0; j < n - i - 1; j++)
            {
                printf(" ");
            }

            // 打印每行的*并换行
            printf("*\n");
        }
    }

    return 0;
}

// BC68 X形图案
#include <stdio.h>

int main()
{
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        // 控制行数
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j || i == n - 1 - j) //[i,j]是判断正斜线，而[i,n-1-j]是判断反斜线
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}

// BC69 空心正方形图案
#include <stdio.h>

int main()
{
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        // 控制行
        for (int i = 0; i < n; i++)
        {
            // 控制列
            for (int j = 0; j < n; j++)
            {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}

// BC70 空心三角形图案
#include <stdio.h>

int main()
{
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        // 控制行
        for (int i = 0; i < n; i++)
        {
            // 控制列
            for (int j = 0; j < n; j++)
            {
                if (i == j || j == 0 || i == n - 1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}

// BC71 新年快乐
#include <stdio.h>

int main()
{
    printf("Happy New Year*2019*\n");
    return 0;
}

// BC72 平均身高
#include <stdio.h>

double Average(double *number)
{
    double sum = 0.0;
    int i = 0;

    while (i < 5)
    {
        sum += number[i];
        i++;
    }

    return sum / 5.0;
}

int main()
{
    double number[5] = {0};
    int i = 0;

    // 输入
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf ", &number[i]);
    }

    // 计算
    double avg = Average(number);

    // 输出
    printf("%.2lf", avg);

    return 0;
}

// BC73 挂科危险
#include <stdio.h>

int main()
{
    int score = 0;

    // 输入
    scanf("%d", &score);

    // 输出
    if (score >= 10)
    {
        printf("Danger++\n");
    }
    else if (score >= 4 && score < 10)
    {
        printf("Danger\n");
    }
    else if (score >= 0 && score < 4)
    {
        printf("Good\n");
    }
}

// BC74 HTTP状态码
#include <stdio.h>

int main()
{
    int httpCode = 0;

    // 输入
    while (scanf("%d", &httpCode) != EOF)
    {
        switch (httpCode)
        {
        case 200:
            printf("OK\n");
            break;
        case 202:
            printf("Accepted\n");
            break;
        case 400:
            printf("Bad Request\n");
            break;
        case 403:
            printf("Forbidden\n");
            break;
        case 404:
            printf("Not Found\n");
            break;
        case 500:
            printf("Internal Server Error\n");
            break;
        case 502:
            printf("Bad Gateway\n");
            break;
        default:
            break;
        }
    }

    return 0;
}

// BC75 数字三角形
#include <stdio.h>

int main()
{
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        // 控制行数
        for (int i = 0; i < n; i++)
        {
            // 控制每行
            for (int j = 1; j <= i + 1; j++)
            {
                printf("%d ", j);
            }

            printf("\n");
        }
    }

    return 0;
}

// BC76 公务员面试
#include <stdio.h>

// 不能像冒泡排序一样改变数组顺序，只找最大最小值,具体具体我也不知道为什么
int CompareMax(const int arr[], int sz)
{
    int max = arr[0];
    for (int i = 1; i < sz; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int CompareMin(const int arr[], int sz)
{
    int min = arr[0];
    for (int i = 1; i < sz; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[7];
    int sz = sizeof(arr) / sizeof(arr[0]);
    // 多组输入
    while (~scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]))
    {
        int max = CompareMax(arr, sz);
        int min = CompareMin(arr, sz);
        int sum = 0;
        for (int i = 0; i < sz; i++)
        {
            sum += arr[i];
        }
        double average = (double)(sum - max - min) / (sz - 2);
        printf("%.2f\n", average);
    }
    return 0;
}

// BC77 有序序列插入一个数
#include <stdio.h>

// 方法一
int main()
{
    int n = 0;
    int num[50] = {0};
    int x = 0;

    // 输入
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &num[i]);
    }
    scanf("%d", &x);

    // 插入
    num[n] = x;
    for (int j = n - 1; j >= 0; j--)
    {
        if (num[j + 1] < num[j])
        {
            int tmp = num[j];
            num[j] = num[j + 1];
            num[j + 1] = tmp;
        }
    }

    // 输出
    for (int k = 0; k < n + 1; k++)
    {
        printf("%d ", num[k]);
    }

    return 0;
}

// 方法二
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int *arr = NULL;
    int x = 0;

    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * (n + 1)); // 开辟数组空间
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &x);

    int j = n;
    for (j = n; arr[j - 1] > x; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[j] = x;

    // 输出
    for (int k = 0; k < n + 1; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;
}

// BC78 筛选法求素数
#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    int count = 0;

    while (scanf("%d", &n) != EOF)
    {
        int i, j;
        for (i = 2; i <= n; i++)
        {
            for (j = 2; j <= i; j++)
            {
                if (i % j == 0)
                    break;
            }

            if (i == j)
            {
                printf("%d ", i);
                count++;
            }
        }
        printf("\n%d ", n - count - 1);
    }

    return 0;
}

// BC79 图像相似度
#include <stdio.h>

int main()
{
    int row = 0;
    int col = 0;
    int arr1[100][100] = {0};
    int arr2[100][100] = {0};

    // 输入
    scanf("%d %d", &row, &col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d ", &arr1[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d ", &arr2[i][j]);
        }
    }

    int count = 0; // 计数

    // 比较
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr1[i][j] == arr2[i][j])
                count++;
        }
    }

    // 输出
    printf("%.2lf\n", 100.0 * count / (row * col));

    return 0;
}

// BC80 登录验证
#include <stdio.h>
#include <string.h>

int main()
{
    char name[20] = {0};
    char password[20] = {0};
    char ueser_name[] = "admin";
    char user_password[] = "admin";

    while (scanf("%s %s", name, password) != EOF)
    {
        if (strcmp(name, ueser_name) == 0 && strcmp(password, user_password) == 0)
        {
            printf("Login Success!\n");
        }
        else
        {
            printf("Login Fail!\n");
        }
    }
    return 0;
}

// BC81 学好C++
#include <stdio.h>

int main()
{
    printf("I will learn C++ well!\n");

    return 0;
}

// BC82 (a+b-c)*d的计算问题
#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    while (scanf("%d %d %d %d", &a, &b, &c, &d) != EOF)
    {
        printf("%d\n", (a + b - c) * d);
    }

    return 0;
}

// BC83 被5整除问题
#include <stdio.h>

int main()
{
    int number = 0;

    while (scanf("%d", &number) != EOF)
    {
        if (number % 5 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

// BC84 计算y的值
#include <stdio.h>

int main()
{
    int number = 0;

    while (scanf("%d", &number) != EOF)
    {
        if (number % 5 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

// BC85 包含数字9的数
#include <stdio.h>

int main()
{
    int count = 0;

    for (int i = 1; i <= 2019; i++)
    {
        int ret = i;
        while (ret > 0)
        {
            if (ret % 10 == 9)
            {
                count++;
                break;
            }
            else
            {
                ret /= 10;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}

// BC86 奇偶统计
#include <stdio.h>

int main()
{
    int n = 0;
    int count1 = 0;
    int count2 = 0;

    while (scanf("%d", &n) != EOF)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
    }
    printf("%d %d", count2, count1);

    return 0;
}

// BC87 统计成绩
#include <stdio.h>

int main()
{
    int n = 0;
    double arr[100] = {0};

    // 输入
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lf ", &arr[i]);
    }

    double max = arr[0];
    double min = arr[0];
    double sum = 0.0;
    // 计算
    for (int i = 0; i < n; i++)
    {
        // 求最大值
        if (arr[i] > max)
        {
            max = arr[i];
        }

        // 求最小值
        if (arr[i] < min)
        {
            min = arr[i];
        }

        // 求和
        sum += arr[i];
    }

    printf("%.2lf %.2lf %.2lf", max, min, sum / n);

    return 0;
}

// BC88 有序序列插入一个数
#include <stdio.h>

int main()
{
    int n = 0;
    int number = 0;
    int arr[50] = {0};

    // 输入
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &number);

    // 排序
    for (int i = n - 1; i >= 0; i--)
    {
        if (number > arr[i])
        {
            arr[i + 1] = number;
            break;
        }
        else
        {
            arr[i + 1] = arr[i];
            arr[i] = number;
        }
    }

    // 输出
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// BC89 密码验证
#include <stdio.h>
#include <string.h>

int main()
{
    char password1[20] = {0};
    char password2[20] = {0};

    // 输入
    scanf("%s %s ", password1, password2);

    // 判断
    if (strcmp(password1, password2))
    {
        printf("different\n");
    }
    else
    {
        printf("same\n");
    }

    return 0;
}

// BC90 矩阵计算
#include <stdio.h>

int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);
    int arr[10][10] = {0};
    int sum = 0;

    // 输入和计算
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > 0)
            {
                sum += arr[i][j];
            }
        }
    }

    // 输出
    printf("%d\n", sum);

    return 0;
}

// BC91 成绩输入输出问题
#include <stdio.h>

int main()
{
    int arr[10] = {0};

    // 输入输出
    for (int i = 0; i < 10; i++)
    {
        scanf("%d ", &arr[i]);
        printf("%d ", arr[i]);
    }

    return 0;
}

// BC92 逆序输出
#include <stdio.h>

int main()
{
    int arr[10] = {0};

    // 输入
    for (int i = 0; i < 10; i++)
    {
        scanf("%d ", &arr[i]);
    }

    // 输出
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// BC93 统计数据正负个数0
#include <stdio.h>

int main()
{
    int arr[10] = {0};
    int positive = 0;
    int negative = 0;

    // 输入
    for (int i = 0; i < 10; i++)
    {
        scanf("%d ", &arr[i]);
    }

    // 判断
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
        else
        {
            continue;
        }
    }

    // 输出
    printf("positive:%d\nnegative:%d", positive, negative);

    return 0;
}

// BC94 N个数之和
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;

    // 输入和计算
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
        sum += arr[i];
    }

    // 输出
    printf("%d\n", sum);

    return 0;
}

// BC95 最高分与最低分之差
#include <stdio.h>

int main()
{
    int n = 0;

    // 输入
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    // 找最大值和最小值
    int max = arr[0];
    int min = arr[0];
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }

        if (arr[j] < min)
        {
            min = arr[j];
        }
    }

    // 输出
    printf("%d\n", max - min);

    return 0;
}

// BC96 有序序列判断
#include <stdbool.h>
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int flag1 = 1; // 升序
    int flag2 = 1; // 降序

    // 输入
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 判断
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            if (arr[i] > arr[i - 1])
            {
                flag1 = 0;
            }
            else if (arr[i] < arr[i - 1])
            {
                flag2 = 0;
            }
        }
    }

    // 输出
    if (flag1 || flag2)
    {
        printf("sorted\n");
    }
    else
    {
        printf("unsorted\n");
    }

    return 0;
}

// BC97 有序序列插入一个整数
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n); // 输入第一行
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    } // 输入第二行
    int val = 0;
    scanf("%d", &val); // 输入第三行

    // 插入后1排序
    for (int i = n - 1; i >= 0; i--)
    {
        if (val > arr[i])
        {
            arr[i + 1] = val;
            break;
        }
        else
        {
            arr[i + 1] = arr[i];
            arr[i] = val;
        }
    }

    // 输出
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// BC98 序列中删除指定数字
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n); // 输入第一行
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    } // 输入第二行
    int deleteVal = 0;
    scanf("%d", &deleteVal); // 输入第三行

    // 删除
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == deleteVal)
        {
            continue;
        }
        printf("%d ", arr[i]);
    }

    return 0;
}

// BC99 序列中整数去重
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        // 输入
        scanf("%d", &arr1[i]);

        // 去重
        for (int j = 0; j < i; j++)
        {
            if (arr2[j] == arr1[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            // 说明此时为非重复元素
            arr2[k] = arr1[i];
            k++;
        }
    }

    // 打印数组
    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}

// BC100 有序序列合并
#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    int arr1[n];
    int arr2[m];
    int i, j;

    // 输入
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr1[i]);
    }

    for (i = 0; i < m; i++)
    {
        scanf("%d ", &arr2[i]);
    }

    // 合并排序
    i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
        }
        else
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }

    // 打印剩余的部分
    while (j < m)
    {
        printf("%d ", arr2[j]);
        j++;
    }

    while (i < n)
    {
        printf("%d ", arr1[i]);
        i++;
    }

    return 0;
}

// BC101 班级成绩输入输出
#include <stdio.h>

int main()
{
    int n = 0;
    double arr[5][5] = {0};

    // 输入
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%lf ", &arr[i][j]);
        }
    }

    // 计算和输出
    for (int i = 0; i < 5; i++)
    {
        double sum = 0;

        for (int j = 0; j < 5; j++)
        {
            sum += arr[i][j];
            printf("%lf ", arr[i][j]);
        }
        printf("%.1lf\n", sum); // 打印每行末尾的和
    }

    return 0;
}

// BC102 矩阵元素定位
#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    int arr[n + 1][m + 1];
    int x = 0, y = 0;

    // 输入
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
    scanf("%d %d", &x, &y);

    // 输出
    printf("%d\n", arr[x][y]);

    return 0;
}

// BC103 序列重组矩阵
#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    // 输入同时输出
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d ", &arr[i][j]);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// BC104 最高身高
#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[MAX_ROWS][MAX_COLS];
    int x = 0, y = 0;

    // 读取输入到数组中
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);

            // 找到最大值
            if (arr[i][j] > arr[x][y])
            {
                x = i;
                y = j;
            }
        }
    }

    // 输出（以1为起始）
    printf("%d %d", x + 1, y + 1);

    return 0;
}

// BC105 矩阵相等判定
#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    int arr1[MAX_ROWS][MAX_COLS] = {0};
    int arr2[MAX_ROWS][MAX_COLS] = {0};
    int x = 0, y = 0;

    // 输入arr1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    // 输入arr2并判断
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d ", &arr2[i][j]);

            if (arr1[i][j] != arr2[i][j])
            {
                printf("No\n");
                return 0;
            }
        }
    }
    printf("Yes\n");

    return 0;
}

// BC106 上三角矩阵判定
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n][n];

    // 输入
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }

    // 判断并输出
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i][j] != 0)
            {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");

    return 0;
}

// BC107 矩阵转置
#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    // 输入
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}

// BC108 矩阵交换
#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    // 输入
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int k = 0; // 统计次数
    char t = 0;
    int before = 0, after = 0; // 变换的行（列）号
    scanf("%d", &k);

    // 判断并转换
    while (k > 0)
    {
        int tmp = 0;
        // 这里有一个坑，就是在%c之前必须加一个空格，确保读取字符时跳过换行符或空格。
        scanf(" %c %d %d", &t, &before, &after);

        if (t == 'r')
        {
            if (before <= n && before <= n)
            {
                for (int j = 0; j < m; j++)
                {
                    // 交换after和before行，列不变
                    tmp = arr[before - 1][j];
                    arr[before - 1][j] = arr[after - 1][j];
                    arr[after - 1][j] = tmp;
                }
            }
        }
        if (t == 'c')
        {
            if (before <= m && after <= m)
            {
                for (int i = 0; i < n; i++)
                {
                    // 交换after和before列，行不变
                    tmp = arr[i][before - 1];
                    arr[i][before - 1] = arr[i][after - 1];
                    arr[i][after - 1] = tmp;
                }
            }
        }
        k--;
    }

    // 打印
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// BC109 杨辉三角
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n][n];

    // 输入
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // 计算
            if (j == 0 || i == j)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
            // 输出
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// BC110 井字棋
#include <stdio.h>

int main()
{
    char board[3][3] = {0};
    char flag = 0;

    // 输入
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf(" %c", &board[i][j]);
        }
    }

    // 判断输赢
    for (int i = 0; i < 3; i++)
    {
        // 行
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != 'O')
        {
            flag = board[i][2];
            break;
        }
        // 列
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != 'O')
        {
            flag = board[2][i];
            break;
        }
    }
    // 正对角线
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != 'O')
    {
        flag = board[2][2];
    }
    // 反对角线
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != 'O')
    {
        flag = board[2][0];
    }

    if (flag == 'K')
    {
        printf("KiKi wins!\n");
    }
    else if (flag == 'B')
    {
        printf("BoBo wins!\n");
    }
    else
    {
        printf("No winner!\n");
    }

    return 0;
}

// BC111 小乐乐与进制转换
#include <stdio.h>

// 转换方法
void print(int x)
{
    if (x > 5)
    {
        print(x / 6);
    }
    printf("%d", x % 6);
}

int main()
{
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        print(n);
    }

    return 0;
}

// BC112 小乐乐求和
#include <stdio.h>

int main()
{
    long long n = 0;
    long long sum = 0;

    // 求和
    while (scanf("%lld", &n) != EOF)
    {
        sum += (1 + n) * n / 2;
    }

    // 输出
    printf("%lld", sum);

    return 0;
}

// BC113 小乐乐定闹钟
#include <stdio.h>

int main()
{
    int hour = 0;
    int minute = 0;
    int k = 0;

    while (scanf("%d:%d %d", &hour, &minute, &k) != EOF)
    {
        // 计算
        int remainingMinutes = (k + minute) % 60;
        int actualHour = (hour + (k + minute) / 60) % 24;

        printf("%02d:%02d\n", actualHour, remainingMinutes);
    }

    return 0;
}

// BC114 小乐乐排电梯
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    // 计算并输出
    if (n >= 0 && n < 12)
    {
        printf("%d\n", 2);
    }
    else if (n >= 12)
    {
        printf("%d\n", 4 * (n / 12) + 2);
    }

    return 0;
}

// BC115 小乐乐与欧几里得
#include <stdio.h>

int main()
{
    long long n = 0;
    long long m = 0;
    long long commonDivisors = 0;      // 保存公约数
    long long commonMultiples = n * m; // 保存公倍数

    while (scanf("%lld %lld", &n, &m) != EOF)
    {
        long long num = n * m; // 存放两个整数相乘的值
        while ((commonDivisors = n % m) != 0)
        {
            // 辗转相除法求最大公约数，当ret=0时m就是最大公约数
            n = m;
            m = commonDivisors; // m就是最大公约数
        }
        commonMultiples = num / m; // 两个数的乘积= 最大公约数*最小公倍数
        printf("%lld\n", m + commonMultiples);
    }

    return 0;
}

// BC116 小乐乐改数字
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ret = 0;
    int placeValue = 1; // 用于构建结果的位数权重，从1开始

    while (n > 0)
    {
        int digit = n % 10;

        // 根据奇偶性设置当前位的值
        if (digit % 2 == 0)
        {
            ret += 0 * placeValue;
        }
        else
        {
            ret += 1 * placeValue;
        }

        // 更新位数权重
        placeValue *= 10;

        // 去掉已经处理的最后一位
        n /= 10;
    }
    printf("%d\n", ret);

    return 0;
}

// BC118 小乐乐与序列
#include <stdio.h>
#include <stdlib.h>

int compare(const void *e1, const void *e2)
{
    return *(int *)e1 - *(int *)e2;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int count = 0;

    // 输入
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 排序
    qsort(arr, n, sizeof(int), compare);

    // 输出
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            continue;
        }
        printf("%d ", arr[i]);
    }

    return 0;
}

// BC119 小乐乐与字符串
#include <stdio.h>
/*
可以先找到所有的C然后用所有的C去匹配所有的H，找到所有的CH之后再用所有CH匹配N组合成CHN
例如：
CHNNCCHN:
你先找到所有的C：总共有3个-->之后用这3个C去找H：一个C可对应2个H则3个C可对应出6个CH
用你找到的6个CH去匹配N-->一个CH对应可对应3个N 则6个CH可对应出18个CHN所以可以找到18个CHN
*/
int main()
{
    long long c = 0;
    long long ch = 0;
    long long chn = 0;
    char arr[8001] = {0};
    scanf("%s", arr);
    char *p = arr;

    while (*p)
    {
        if (*p == 'C')
        {
            c++;
        }
        else if (*p == 'H')
        {
            ch += c;
        }
        else if (*p == 'N')
        {
            chn += ch;
        }
        p++;
    }
    printf("%lld", chn);

    return 0;
}

// BC120 小乐乐与二段数
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 判断一个数是否为二段数并且是n的倍数
int is_binary_segmented_number(int num, int n)
{
    char num_str[20];
    sprintf(num_str, "%d", num); // 将数字转换为字符串
    int len = strlen(num_str);

    // 检查数字是否恰好包含两种不同的数字
    char s = num_str[0];
    char t = num_str[0];
    for (int i = 0; i < len; ++i)
    {
        if (num_str[i] != s && num_str[i] != t)
        {
            t = num_str[i];
            break;
        }
    }
    if (s == t)
    {
        return 0; // 不是二段数
    }

    // 确保所有的s出现在所有的t之前
    for (int i = 0; i < len; ++i)
    {
        if (num_str[i] == t)
        {
            return 0; // 发现t在s之前，不是二段数
        }
    }

    // 检查是否是n的倍数
    if (num % n != 0)
    {
        return 0;
    }

    return 1; // 是二段数并且是n的倍数
}

// 寻找大于n且是n的倍数的最小二段数
int find_next_binary_segmented_number(int n)
{
    int condidate = n + 1;
    while (1)
    {
        if (is_binary_segmented_number(condidate, n))
        {
            return condidate;
        }
        condidate++;
    }
}

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        if (n == 0)
        {
            break;
        }
        int result = find_next_binary_segmented_number(n);
        printf("%d: %d\n", n, result);
    }

    return 0;
}

// BC121 小乐乐学编程
#include <stdio.h>

int main()
{
    printf("Practice makes perfect!\n");
}

// BC122 小乐乐算平均分
#include <stdio.h>

int main()
{
    double arr[3] = {0.0};
    double sum = 0.0;

    // 输入并计算
    for (int i = 0; i < 3; i++)
    {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    // 输出
    printf("%.2lf %.2lf", sum, sum / 3.0);

    return 0;
}

// BC123 小乐乐找最大数
#include <stdio.h>

int main()
{
    int arr[4] = {0};
    int max = arr[0];

    // 输入
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // 输出
    printf("%d\n", max);

    return 0;
}

// BC124 小乐乐是否被叫家长
#include <stdio.h>

int main()
{
    int arr[3] = {0};
    int sum = 0;

    // 输入
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // 判断并输出
    if (sum / 3 >= 60)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}

// BC125 小乐乐转换成绩
#include <stdio.h>

int main()
{
    int score = 0;
    int num = 0;

    // 输入
    scanf("%d", &score);

    // 判断并输出
    if (score >= 0 && score <= 100)
    {
        switch (score / 10)
        {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("E\n");
            break;
        default:
            break;
        }
    }
    else
    {
        printf("F\n");
    }

    return 0;
}

// BC126 小乐乐算多少人被请家长
#include <stdio.h>

int main()
{
    int n = 0;
    int count = 0;
    scanf("%d", &n);

    // 输入并判断
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int score = 0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%d ", &score);
            sum += score;
        }
        if (sum / 3 < 60)
        {
            count++;
        }
    }

    // 输出
    printf("%d\n", count);

    return 0;
}

// BC127 小乐乐算最高分
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];

    // 输入并判断
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // 输出
    printf("%d", max);

    return 0;
}

// BC128 小乐乐计算求和
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    // 计算
    int factorial = 1, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i; // 暂存，然后依次相加
        sum += factorial;
    }

    // 输出
    printf("%d\n", sum);

    return 0;
}

// BC129 小乐乐计算函数
#include <stdio.h>

// 求三个数的最大值
int max3(int a, int b, int c)
{
    if (a > b)
    {
        b = a;
    }

    return b > c ? b : c;
}

int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    // 输出
    printf("%.2lf", (double)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c)));

    return 0;
}

// BC130 小乐乐查找数字
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x = 0;
    scanf("%d", &x);

    // 查找
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    // 输出
    printf("%d", count);

    return 0;
}

// BC131 KiKi学程序设计基础
#include <stdio.h>

int main()
{
    printf("printf(\"Hello world!\\n\");\n");
    printf("cout << \"Hello world!\" << endl;");
    return 0;
}

// BC132 KiKi算期末成绩
#include <stdio.h>

int main()
{
    int experiment_grade = 0;
    int class_grade = 0;
    int process_grade = 0;
    int computer_lab_grade = 0;
    scanf("%d %d %d %d", &experiment_grade, &class_grade, &process_grade, &computer_lab_grade);

    // 输出
    printf("%.1f\n", experiment_grade * 0.2 + class_grade * 0.1 + process_grade * 0.2 + computer_lab_grade * 0.5);

    return 0;
}

// BC133 KiKi说祝福语
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    while (n--)
    {
        printf("Happy new year!Good luck!\n");
    }

    return 0;
}

// BC134 KiKi的最高分
#include <stdio.h>

int main()
{
    int arr[3] = {0};

    // 输入并判断
    int max = arr[0];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // 输出
    printf("%d", max);

    return 0;
}

// BC135 KiKi求质数个数
#include <stdio.h>

int main()
{
    int count = 0;

    // 计算并统计
    for (int i = 100; i < 1000; i++)
    {
        int flag = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            count++;
        }
    }

    // 输出
    printf("%d\n", count);

    return 0;
}

// BC136 KiKi去重整数并排序(同BC118)
#include <stdio.h>
#include <stdlib.h>

int compare(const void *e1, const void *e2)
{
    return *(int *)e1 - *(int *)e2;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 排序
    qsort(arr, n, sizeof(int), compare);

    // 输出
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            continue;
        }
        printf("%d ", arr[i]);
    }

    return 0;
}

// BC137 KiKi判断上三角矩阵(同BC106)
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n][n];

    // 输入
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }

    // 判断并输出
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i][j] != 0)
            {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");

    return 0;
}

// BC138 KiKi学结构体和指针
#include <stdio.h>
#include <stdlib.h>

typedef int SLDataType;

// 创建结构体
typedef struct Node
{
    SLDataType data;
    struct Node *next;
} Node;

// 初始化链表，返回头节点指针
Node *init_link_list()
{
    Node *head = (Node *)malloc(sizeof(Node));

    // 初始化头节点指针指向NULL
    head->next = NULL;

    return head;
}

// 在链表末尾插入节点
void insert_node(Node *head, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = newNode;
}

// 删除链表中所有值为target的节点
void delete_node(Node *head, int target)
{
    Node *prev = head;
    Node *cur = head->next;

    while (cur != NULL)
    {
        if (cur->data == target)
        {
            prev->next = cur->next;
            free(cur);
            cur = prev->next;
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }
}

// 打印链表
void print_link_list(Node *head)
{
    Node *p = head->next; // 跳过头节点head

    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// 释放链表空间
void free_link_list(Node *head)
{
    Node *p = head;

    while (p != NULL)
    {
        Node *tmp = p;
        p = p->next;
        free(tmp);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    // 初始化链表
    Node *head = init_link_list();

    // 输入数据建立链表
    for (int i = 0; i < n; ++i)
    {
        SLDataType data;
        scanf("%d", &data);
        insert_node(head, data);
    }

    // 输入要删除的数据m
    int m = 0;
    scanf("%d", &m);

    // 删除链表中所有值为m的节点
    delete_node(head, m);

    // 计算删除后的链表长度并输出
    int length = 0;
    Node *p = head->next; // 跳过头结点
    while (p != NULL)
    {
        length++;
        p = p->next;
    }
    printf("%d\n", length);

    // 输出删除数据后的链表
    print_link_list(head);

    // 释放链表空间
    free_link_list(head);

    return 0;
}

// BC139 KiKi定义电子日历类
#include <stdio.h>

struct Date
{
    int year;
    int month;
    int day;
} date;

int main()
{
    scanf("%d%d%d", &date.year, &date.month, &date.day);

    printf("%d/%d/%d\n", date.day, date.month, date.year);

    return 0;
}

// BC140 KiKi设计类继承
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int r;
    scanf("%d", &c);
    int d;
    scanf("%d", &d);

    printf("%d\n", a * b);
    printf("%g\n", 3.14 * (r * r));
    printf("%d\n", d * d);

    return 0;
}

// BC141 圣诞树
#include <stdio.h>

int main()
{
    // 一、先打印上面“树叶”部分
    int high = 0; // 层数
    scanf("%d", &high);

    int m = 3 * high;
    for (int i = 1; i <= high; i++)
    {
        // 打印第i层的第一行
        int space1 = m - 1;
        for (int j = 0; j < space1; j++)
        {
            printf(" ");
        }

        // 打印每层三角形的第一行
        for (int k = 0; k < i; k++)
        {
            printf("*     ");
        }
        printf("\n");

        // 打印第i层的第二行
        int space2 = m - 2;
        for (int j = 0; j < space2; j++)
        {
            printf(" ");
        }

        // 打印每层三角形的第二行
        for (int k = 0; k < i; k++)
        {
            printf("* *   ");
        }
        printf("\n");

        // 打印第i层的第三行
        int space3 = m - 3;
        for (int j = 0; j < space3; j++)
        {
            printf(" ");
        }

        // 打印每层三角形的第三行
        for (int k = 0; k < i; k++)
        {
            printf("* * * ");
        }
        printf("\n");

        m -= 3; // 每层少打3个空格
    }

    // 二、底部
    for (int i = 0; i < high; i++)
    {
        for (int j = 0; j < 3 * high - 1; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}

// BC142 超级圣诞树
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i, j, k;
    int row = 3;
    int col = 5;
    // 行数 = 3 * pow(2,n-1) 列数 = 5 * pow(2,n-1)
    char ch[400][800] = {"  *  ", " * * ", "* * *"};
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < row; j++)
        {
            for (k = 0; k < col; k++)
            {
                ch[j + row][k] = ch[j][k]; // 左下角的图形复制
                ch[j + row][k + 1 + col] = ch[j][k];
            }
        }
        // 清空原来的三角位置
        for (j = 0; j < row; j++)
        {
            for (k = 0; k < col; k++)
                ch[j][k] = ' ';
        }
        // 将左下角的三角复制到两个中间去
        for (j = 0; j < row; j++)
        {
            for (k = 0; k < col; k++)
            {
                ch[j][k + row] = ch[j + row][k];
            }
        }
        row *= 2;          // 当前的行数
        col = col * 2 + 1; // 当前的列数
    }
    // 打印出来
    for (j = 0; j < row; j++)
    {
        for (k = 0; k < col; k++)
        {
            if (ch[j][k] == '*')
            {
                printf("%c", ch[j][k]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    // 打印树干
    for (j = 0; j < n; j++)
    {
        for (k = 0; k < row - 1; k++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}