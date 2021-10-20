#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "windows.h"
//------------------------------------------宣告------------------------------------------
int flag = 0;

float   height,                                 //身高 
        weight,                                 //體重
        need_weight,                            //需求體重
        bmi;
//------------------------------------------函式------------------------------------------
void Algorithm_function()                   //算法副程式
{
    bmi = weight/pow(height/100,2);             //BMI算法      體重(KG)  / 身高(M)^2
    need_weight = pow(height/100,2)*35;         //需求體重算法  35       x 身高(M)^2
}
void Divider()                              //分隔函式
{
    printf("\n--------------------\n");
}
//-----------------------------------------主程式-----------------------------------------
int main()
{

    while(flag==0)
    {
        printf("請輸入身高:");  scanf("%f",&height);
        printf("請輸入體重:");  scanf("%f",&weight);
        Algorithm_function();
        printf("你的BMI為:%.2f\n",bmi);
        if(bmi>=35)
        {
            printf("已達標");Divider();
        }
        else 
        {
            printf("需求體重為:%.2f\n",need_weight);
            printf("還差 %.2fkg",need_weight-weight);Divider();
        }
    }

    return 0;

}
