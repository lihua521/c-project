#include <stdio.h>
char arr[1000];
int index = 0;
int isMingan(char x)
{
    int count = 0;
    for (int i = 0; i < index; i++)
    {
        if (x == arr[i])
        {
            count++;
        }
    }
    if (count == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{

    printf("mingancixitong\n");

    while (1)
    {
        printf("1---tianjia\n");
        printf("2---shanchu\n");
        printf("3---xianshi\n");
        printf("4---tihuan\n");
        printf("5---tuichu\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("tianjia\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
            arr[index] = m;
            index++;
            printf("dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("shanchuzifu\n");
            index--;
            printf("dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 3)
        {
            printf("xianshiminganzifu\n");

            for (int i = 0; i < index; i++)
            {
                printf("%c\n",arr[i]);
            }
            printf("dianjihuichejixu\n");
            char x
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            printf("tihuanzifu\n");
            char neirong[1000];
            scanf("%s", neirong);

            for (int i 0; 1; i++)
            {
                if (neirong[i] == '\0')
                {
                    break;
                }
                if (isMingan(neirong[i]) == 1)
                {
                    neirong[i] = '*';
                }
                printf("%c", neirong[i]);
            }

            printf("\n");

            printf("dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 5)
        {
            printf("tuichu")
            break;
        }
    }
    return 0;
}