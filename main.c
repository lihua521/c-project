#include <stdio.h>
char arr[1000];
int index = 0;
int isMingan(char x)
{
    int count = 0;
    for (int i = 0;i<index;i++)
    {
        if(x == arr[i])
        {
            count++;
        }
    }
    if(count == 0)
    {
        return 0;
    }else{
        return 1;
    }
}
int main(){

    printf("mingancixitong\n");

    while(1){
        printf("1---tianjia\n");
        printf("2---shanchu\n");
        printf("3---xianshi\n");
        printf("4---tihuan\n");
        printf("5---tuichu\n");
        int code;
        scanf("%d",&code);
        
        if(code == 1){
        }
        if(code == 2){
            
        }
        if(code == 3){
            
        }
        if(code == 4){
            
        }
        if(code == 5){
            
        }
    }
    return 0;

}