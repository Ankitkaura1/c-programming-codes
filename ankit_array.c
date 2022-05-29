/*#include<stdio.h>
int main()
{
    int marks[10],i;
    printf ("enter the marks obtained by the student in the exam=>\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",& marks[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("marks obtained by the students in the exam are %d\n",marks[i]);
    }
    return 0;
}                                                                                  */

/*
#include<stdio.h>
int main()
{
    int i,salery[5]={657,987,875,765,568} ;
    for(i=0;i<5;i++)
    {
        printf(" \t the elements of array are %d \n",salery[i]);
    }
    return 0;
}



                                                                                  */
//i am not able to find out my mistake in this code.
/*#include<stdio.h>
int main()
{
    int i,n[5],small,large;
    small=n[0],large=n[0];
    printf("enter the value of numbers \n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
        if(small>= n[i])
          small=n[i];
      if(large<= n[i])
          large=n[i];
    }
    printf("smallest no is %d and largest no is %d",small,large);
    return 0;
}                                                              */




// this code is correct for comparison by array initialisation.
/*#include<stdio.h>
int main()
{
    int i,a[4]={56,67,98,90};
    int small,large;
    small=large=a[0];
    for(i=0;i<4;i++)
    {
      if(small>= a[i])
          small=a[i];
      if(large<= a[i])
          large=a[i];
    }
    printf("smallest no is %d and largest no is %d",small,large);
    return 0;
}
                                                                               */
//inserting a no at its specific position
/*
#include<stdio.h>
#define m 100
int main()
{
    int i,j,n,a[m];
    printf("no of elements in array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("value of %d elements :-",i+1);
        scanf("%d",&a[i]);
    }
    printf("position where to be entered :-");
    scanf("%d",&j);
    for(i=n;i>=j-1;i--)
        a[i+1]=a[i];
    printf("enter value to be inserted :-");
    scanf("%d",&a[j-1]);
    printf("modified array is:- \n");
    for(i=0;i<=n;i++)
        printf("%d \t",a[i]);

    return 0;
}
                                                                             */
