//decleration of pointer variable.
/*
#include<stdio.h>
int main()
{
    char a=5,b=6;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("memory location of %d and %d is %p and %p",a,b,p1,p2);
    return 0;
}
                                                            */


//assigning the terms of an array by the pointer.
/*
#include<stdio.h>
int main()
{
    int a[10],i;
    int *p1,*p2;
    printf("enter the value of the elements of the array ==> ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    p1=&a[4];
    p2=&a[8];
    printf("address of a=%p ,address of b=%p ,difference of their address is %p ",p1,p2,(p1-p2));
    return 0;
}
                                                                   */
//pointer comparison

/*#include<stdio.h>
int main()
{
    int a;
    int *p1,*p2;
    p1=&a;p2=&a;
    if(p1==p2)
        printf("both the pointer points to same element");
    else
        printf("both pointer points to different elements");
    return 0;
}
                                                                       */
