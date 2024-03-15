#include <stdio.h>

union person
{
    int roolnum;
    int age;
    int pincode;
    int weight;
    int hight;
};

int main()
{
    union person per, pp, weight1, hight1;

    per.roolnum = 101;
    printf("%d\n", per.roolnum);

    pp.age = 20;
    printf("%d\n", pp.age);

    weight1.weight = 10;
    printf("%d\n", weight1.weight);

    hight1.hight = 35;
    printf("%d",hight1.hight);

    
}
