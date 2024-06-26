//BC1 实践出真知
#include <stdio.h>

int main()
{
    printf("Practice makes perfect!");
    return 0;
}


//BC2 我是大V
#include <stdio.h>

int main() 
{
    printf("v   v\n");
    printf(" v v\n");
    printf("  v\n");

    //printf("v   v\n v v\n  v\n");
    return 0;
}


//BC3 有容乃大
#include <stdio.h>

int main()
 {
    printf("The size of short is %d bytes.\n",sizeof(short));
    printf("The size of int is %d bytes.\n",sizeof(int));
    printf("The size of long is %d bytes.\n",sizeof(long));
    printf("The size of long long is %d bytes.\n",sizeof(long long));

    return 0;
}

//BC6 小飞机
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

//BC7 缩短二进制
#include <stdio.h>

int main()
{
    printf("%#o %#X\n",1234,1234);   
    return 0;
}

//BC8 十六进制转十进制
#include <stdio.h>

int main() {
    int a = 0XABCDEF;
    printf("%15d\n",a);
    return 0;
}

//BC9 printf的返回值
#include <stdio.h>

//方法一
int main()
{
    int a = printf("Hello world!");
    printf("\n%d",a);
    return 0;
}

//方法二
int main()
{
    printf("\n%d\n",printf("Hello world!"));
    return 0;
}


//BC10 成绩输入输出
#include <stdio.h>

int main()
{
    int a, b,c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        printf("score1=%d,score2=%d,score3=%d",a,b,c);
    }
    return 0;
}

//BC11 学生基本信息输入输出
#include <stdio.h>

int main() 
{
    int a;
    float b=0.0,c=0.0,d=0.0;
    while (scanf("%d;%f,%f,%f", &a, &b,&c,&d) != EOF) 
    { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", a ,b,c,d);
    }
    return 0;
}

//BC12 字符圣诞树
#include <stdio.h>

int main() 
{
    char a;
    scanf("%c",&a);
    int i =1;

    while(i<6)
    {
        //打印空格
        for(int j= 5-i;j>0;j--)
        {
            printf(" ");
        }
        //打印字符
        for(int k=0; k<i;k++)
        {
            printf("%c ",a);
        }
        printf("\n");
        i++;
    }

    return 0;
}

//BC13 ASCII码
#include <stdio.h>

int main() 
{
    char arr[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33};

    int i =0;
    int sz = sizeof(arr)/sizeof(arr[0]);

    for(i=0; i<sz; i++)
    {
        printf("%c",arr[i]);
    }

    return 0;
}

//BC14 出生日期输入输出
#include <stdio.h>

int main() 
{
    int year = 0;
    int month = 0;
    int date = 0;
    scanf("%4d%2d%2d",&year,&month,&date);
    printf("year=%d\n",year);
    printf("month=%02d\n",month);
    printf("date=%02d\n",date);

    return 0;
}

//BC15 按照格式输入并交换输出
#include <stdio.h>

int main() 
{
    int a,b,tmp;
    scanf("a=%d,b=%d",&a,&b);
    
    //交换
    tmp=a;
    a=b;
    b=tmp;

    printf("a=%d,b=%d",a,b);

    return 0;
}

//BC16 字符转ASCII码
#include <stdio.h>

int main() {
    char ch = 0;
    ch =getchar();
    printf("%d\n",ch);
    
    return 0;
}

//BC17 计算表达式的值
#include <stdio.h>

int main() 
{
    int a = 40;
    int c = 212;

    printf("%d\n",(-8+22)*a-10+c/2);

    return 0;
}

//BC18 计算带余除法
#include <stdio.h>

int main() 
{
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    printf("%d %d\n",a/b,a%b);
    
    return 0;
}

//BC19 反向输出一个四位数
#include <stdio.h>

int main() 
{
    int a = 0;
    while (scanf("%d", &a) != EOF) 
    { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        while(a)
        {
            printf("%d",a % 10);
            a = a / 10;
        }
    }
    return 0;
}

//BC20 kiki算数
#include <stdio.h>

int main() 
{
    int a ,b;

    //输入
    scanf("%d %d",&a,&b);

    //计算
    int sum = (a%100+b%100)%100;
    
    //输出
    printf("%d\n",sum);
    
    return 0;
}

//BC21 浮点数的个位数字
#include <stdio.h>

int main() 
{
    double d = 0;
    //输入
    scanf("%lf",&d);
    //计算
    int n = (int)d;     //13.141->13
    //输出
    printf("%d\n",n%10);

    return 0;
}

//BC22 你能活多少秒
#include <stdio.h>

int main() 
{
    int age = 0;

    //输入
    scanf("%d",&age);

    //计算
    long long sec = age*3.156e7;

    //输出
    printf("%lld\n",sec);

    return 0;
}

//BC25 计算体重指数
#include <stdio.h>

int main() 
{
    int weight = 0;
    int high = 0;
    double BMI = 0;

    //输入
    scanf("%d %d", &weight, &high);
    //计算
    BMI = weight / ((high / 100.0) * (high / 100.0));
    //输出
    printf("%.2lf", BMI);

    return 0;
}

//BC26 计算三角形的周长和面积
#include <math.h>
#include <stdio.h>

int main() 
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    //计算
    double circumference = a+b+c;

    double p = (a+b+c)/2;
    double area = sqrt(p*(p-a)*(p-b)*(p-c));
    //输出
    printf("circumference=%.2lf area=%.2lf\n",circumference,area);

    return 0;
}

//BC27 计算球体的体积
#include <math.h>
#include <stdio.h>

int main() 
{
    double r = 0.0;
    double pi = 3.1415926;
    //输入
    scanf("%lf",&r);

    //计算
    double V = 4/3.0*pi*pow(r, 3);

    //输出
    printf("%.3lf\n",V);

    return 0;
}

//BC28 大小写转换
#include <stdio.h>

int main() 
{
    int ch = 0;
    while((ch = getchar()) != EOF)
    {
       // putchar(ch+32);
        printf("%c\n",ch+32);
        getchar();
    }
    return 0;
}

//BC29 2的n次方计算
#include <stdio.h>

int main() 
{
    int n = 0;

    while(scanf("%d",&n) != EOF)
    {
        printf("%d\n",1<<n);
    }
    return 0;
}

//BC35 判断字母
#include <ctype.h>
#include <stdio.h>

int main() 
{
    int ch = 0;
    while ((ch = getchar()) != EOF) {
        //判断
        if (isalpha(ch)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        //处理\n
        getchar();

    }
    return 0;
}

//BC38 变种水仙花
#include <stdio.h>

int main() 
{
    
    for(int i =10000;i<99999;i++)
    {
        int sum = 0;
        for(int j = 10; j <=10000; j*=10)
        {
            sum += (i/j)*(i%j);
        }

        if(sum == i)
        {
            printf("%d ",i);
        }
    }

    return 0;
}

//BC23 时间转换
#include <stdio.h>

int main() 
{
    //输入
    int sec = 0;
    int hour = 0;
    int minute = 0;
    int second = 0;
    scanf("%d",&sec);
    //计算
    hour = sec/60/60;
    minute =sec/60%60;
    second = sec%60; 
    //输出    
    printf("%d %d %d\n",hour,minute,second);
    
    return 0;
}

//BC24 总成绩和平均分计算
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

//BC30 KiKi和酸奶
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

//BC32 输出学生信息
#include <stdio.h>

int main() 
{
    printf("Name    Age    Gender\n");
    printf("---------------------\n");
    printf("Jack    18     man");
    return 0;
}

//BC33 计算平均成绩
#include <stdio.h>

int main() 
{
    int number[5] ={ 0 };
    //输入
    for(int i=0; i<5; i++)
    {
        scanf("%d ",&number[i]);
    }
    //计算
    int sum = 0;
    for(int i = 0; i<5; i++)
    {
        sum += number[i];
    }
    //输出
    printf("%.1lf",sum/5.0);

    return 0;
}

//BC34 进制A+B
#include <stdio.h>

int main() 
{
    int a,b;
    //输入
    scanf("%x %o",&a,&b);
    int sum = a+b;
    //输出
    printf("%d\n",sum);
    return 0;
}

//BC37 网购
#include <stdio.h>

int main()
{
    double price = 0.0;
    int month = 0;
    int day = 0;
    int flag = 0;

    //输入
    scanf("%lf %d %d %d",&price,&month,&day,&flag);
    //计算
    /*双十一*/
    if(month == 11 && day == 11)
    {
        price *= 0.7;
        if(flag == 1)
        {
            price -= 50; 
        }
    }
    else if(month == 12 && day == 12)
    {
        price *= 0.8;
        if(flag == 1)
        {
            price -= 50; 
        }
    }

    if(price < 0.0)
    {
        printf("%.2lf\n",0.0);
    }
    else 
    {
        printf("%.2lf\n",price);
    }
    
}

//BC39 争夺前五名
#include <stdio.h>

//方法名
int main()
{
    int n;
    int arr[50] = {0};

    //输入
    scanf("%d\n",&n);
    for(int i = 0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //冒泡排序——升序
    for(int i =0; i<n-1;i++)//趟数
    {
        for(int j =0; j<n-1-i;j++)
        {
            if(arr[j] >arr[j+1])
            {
                int tmp =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    //输出
    for(int i =n-1;i>=n-5;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

//方法二
#include <stdio.h>
#include <stdlib.h>

int compare_int(const void* e1,const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}

int main()
{
    int n;
    int arr[50] = {0};

    //输入
    scanf("%d\n",&n);
    for(int i = 0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //快排——调用库函数
    qsort(arr, n, 4,compare_int);   //升序

    //输出
    for(int i =n-1;i>=n-5;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

//BC40 竞选社长
#include <stdio.h>

//方法一
int main()
{
    char buffer[100]={0};
    //输入
    gets(buffer);
    //统计
    int count_a = 0;
    int count_b = 0;
    int i =0;
    while (buffer[i] != '0') 
    {
        if(buffer[i] == 'A')
        {
            count_a++;
        }
        if(buffer[i] == 'B')
        {
            count_b++;
        }
        i++;
    }
    //输出
    if(count_a > count_b)
    {
        printf("A\n");
    }
    else if(count_a <count_b)
    {
        printf("B\n");
    }
    else 
    {
        printf("E\n");
    }

    return 0;
}

//方法二

int main()
{
    char buffer[100]={0};
    //输入
    gets(buffer);
    //统计
    int flag = 0;
    int i =0;
    while (buffer[i] != '0') 
    {
        if(buffer[i] == 'A')
        {
            flag++;
        }
        if(buffer[i] == 'B')
        {
            flag--;
        }
        i++;
    }
    //输出
    if(flag>0)
    {
        printf("A\n");
    }
    else if(flag<0)
    {
        printf("B\n");
    }
    else 
    {
        printf("E\n");
    }

    return 0;
}

//方法三
#include <stdio.h>

int main()
{
    //输入并统计
    int ch = 0;
    int flag = 0;
    while ((ch = getchar()) != '0' && ch != EOF) 
    {
        if(ch == 'A')
        {
            flag++;
        }
        if(ch == 'B')
        {
            flag--;
        }
    }

    //输出
    if(flag>0)
    {
        printf("A\n");
    }
    else if(flag<0)
    {
        printf("B\n");
    }
    else 
    {
        printf("E\n");
    }

    return 0;
}

//BC41 你是天才吗？
#include <stdio.h>

//方法一
int main()
{
    int IQ = 0;
    while (scanf("%d",&IQ) != EOF) //EOF是-1
    {
        if(IQ >= 140)
        {
            printf("Genius\n");
        }
    }

    return 0;
}

//方法二
int main()
{
    int IQ = 0;
    while (~scanf("%d",&IQ)) //~按位取反
    {
        if(IQ >= 140)
        {
            printf("Genius\n");
        }
    }

    return 0;
}

//BC42 完美成绩
#include <stdio.h>

int main()
{
    int score = 0;
    while(scanf("%d",&score) != EOF)
    {
        if(score >= 90 && score <= 100)
        {
            printf("Perfect\n");
        }
    }
    return 0;
}

//BC43 及格分数
#include <stdio.h>

int main()
{
    int score = 0;
    while(scanf("%d",&score) != EOF)
    {
        if(score >= 60)
        {
            printf("Pass\n");
        }
        else 
        {
            printf("Fail\n");
        }
    }
}

//BC44 判断整数奇偶性
#include <stdio.h>

int main()
{
    int number = 0;
    while (scanf("%d\n",&number) != EOF) 
    {
        if(number%2)
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

//BC45 最高分数
#include <stdio.h>

//方法一
void compare(int x,int y ,int z)
{
    int max = x>y?x:y;
    max = max>z?max:z;

    printf("%d\n",max);
}

int main()
{
    int x,y,z;
    //输入
    scanf("%d %d %d",&x,&y,&z);
    //比较和输出
    compare(x,y,z);

    return 0;
}

//方法二
#include <stdio.h>

int main()
{
    int max = 0;
    int number[3] = {0};
    //输入
    scanf("%d %d %d",&number[0],&number[1],&number[2]);
    //比较
    for(int i =0; i<3;i++)
    {
        if(number[i]>max)
        {
            max = number[i];
        }
    }
    //输出
    printf("%d\n",max);

    return 0;
}

//BC46 判断是元音还是辅音
#include <stdio.h>

//方法一
int main()
{
    char letter =0;
    char array[] ="AaEeIiOoUu"; //存放元音字母的数组
    //输入
    while((letter=getchar()) != EOF)
    {
        //判断
        int i =0;
        for(i =0; i<10;i++)
        {
            if(letter == array[i])
            {
                printf("Vowel\n");
                break;
            }
        }
        if(i == 10)
        {
            printf("Consonant\n");
        }

        //处理\n
        getchar();
    }

    return 0;
}

//方法二
int main()
{
    char letter =0;
    char array[] ="AaEeIiOoUu"; //存放元音字母的数组
    //输入
    while((letter=getchar()) != EOF)
    {
        //判断
        int i =0;
        for(i =0; i<10;i++)
        {
            if(letter == array[i])
            {
                printf("Vowel\n");
                break;
            }
        }
        if(i == 10)
        {
            printf("Consonant\n");
        }

        //处理\n
        getchar();
    }

    return 0;
}

//BC47 判断是不是字母
//方法一
#include <stdio.h>

int main()
{
    char ch  = 0;
    while(scanf("%c\n",&ch) != EOF)
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            printf("%c is an alphabet.\n",ch);
        }
        else 
        {
            printf("%c is not an alphabet.\n",ch);
        }
    }

    return 0;
}

//方法二
#include <ctype.h>
#include <stdio.h>

int main()
{
    char ch  = 0;
    while(scanf("%c\n",&ch) != EOF)
    {
        if(isalpha(ch))//isalpha判断字符是否为字母
        {
            printf("%c is an alphabet.\n",ch);
        }
        else 
        {
            printf("%c is not an alphabet.\n",ch);
        }
    }

    return 0;
}

//BC48 字母大小写转换
#include <stdio.h>

//方法一
int main()
{
    char ch = 0;
    while(scanf("%c\n",&ch) != EOF)
    {
        if (ch >= 'A' && ch <= 'Z') 
        {
            printf("%c\n",ch+32);
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            printf("%c\n",ch-32);
        }
    }

    return 0;
}

//方法二
#include <ctype.h>
#include <stdio.h>

int main()
{
    char ch = 0;
    while(scanf("%c\n",&ch) != EOF)
    {
        if (isupper(ch)) 
        {
            printf("%c\n",ch+32);
        }
        else if(islower(ch))
        {
            printf("%c\n",ch-32);
        }
    }

    return 0;
}

//方法三
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
    while(scanf("%c\n",&ch) != EOF)
    {
        if (isupper(ch)) 
        {
            printf("%c\n",tolower(ch));
        }
        else if(islower(ch))
        {
            printf("%c\n",toupper(ch));
        }
    }

    return 0;
}