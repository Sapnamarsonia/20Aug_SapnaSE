//Write a program find area of circle, rectangle and triangle.
#include<stdio.h>
#define PI 3.14
main()
{
// area of circle
float radius,area;
printf("enter value of radius\n");
scanf("%f",& radius);
area=PI*radius*radius;
printf("area of circle is:%f\n\n",area);

// area of rectangle
int length,breadth;
printf("enter value of length\n");
scanf("%d",&length);
printf("enter value of breadth\n");
scanf("%d",&breadth);
int areaofrec =length*breadth;
printf("area of rectangle :%d\n\n",areaofrec);

//area of traingle
int base,height;
printf("enter value of base\n");
scanf("%d",&base);
printf("enter value of height\n");
scanf("%d",&height);
int areaoftraingle=(base*height)/2;
printf("area of traingle:%d",areaoftraingle);


} 
