#include <stdio.h>
int  main ()
{
    double attendence,quiz1,quiz2,quiz3,quiz_avarege,presentation,assignment,mid,final,total;
    int i;
    for(i=1;i<=1;i++)
    {
        printf("Enter The Mark of Attendence = ");
        scanf("%lf",&attendence);
        if(attendence>7 || attendence<0)
        {
            printf("Not valid\n");
            i--;
            continue;
        }
    }
    
    for(i=1;i<=1;i++)
    {
        printf("Enter The Mark of Quiz 1 = ");
        scanf("%lf",&quiz1);
        if(quiz1>15 || quiz1<0)
        {
            printf("Not valid\n");
            i--;
            continue;
        }
    }
    
    for(i=1;i<=1;i++)
    {
        printf("Enter The Mark of Quiz 2 = ");
        scanf("%lf",&quiz2);
        if(quiz2>15 || quiz2<0)
        {
            printf("Not valid\n");
            i--;
            continue;
        }
    }
    
    for(i=1;i<=1;i++)
    {
        printf("Enter The Mark of Quiz 3 = ");
        scanf("%lf",&quiz3);
        if(quiz3>15 || quiz3<0)
        {
            printf("Not valid\n");
            i--;
            continue;
        }
    }
    
    quiz_avarege=(quiz1+quiz2+quiz3)/3;
    

    for(i=1;i<=1;i++)
    {
        printf("Enter The Mark of Presentation = ");
        scanf("%lf",&presentation);
        if(presentation>8 || presentation<0)
        {
            printf("Not valid\n");
            i--;
            continue;
        }
    }
        for(i=1;i<=1;i++)
    {
        printf("Enter The Mark of Assignment = ");
        scanf("%lf",&assignment);
        if(assignment>5 || assignment<0)
        {
            printf("Not valid\n");
            i--;
            continue;
        }
    }
    
    for(i=1;i<=1;i++)
    {
        printf("Enter The Mark of Midterm = ");
        scanf("%lf",&mid);
        if(mid>25 || mid<0)
        {
            printf("Not valid\n");
            i--;
            continue;
        }
    }
    
    for(i=1;i<=1;i++)
    {
        printf("Enter The Mark of Finalterm = ");
        scanf("%lf",&final);
        if(final>40 || final <0)
        {
            printf("Not valid\n");
            i--;
            continue;
        }
    }
   
    printf("\n\n");
    printf("QUIZ 1 : %.2lf\n",quiz1);
    printf("QUIZ 2 : %.2lf\n",quiz2);
    printf("QUIZ 3 : %.2lf\n",quiz3);
    printf("QUIZ AVARAGE : %.2lf\n",quiz_avarege);
    printf("\n");
    printf("PRESENTETION : %.2lf\n",presentation);
    printf("ASSIGNMENT : %.2lf\n",assignment);
    printf("ATTENDENCE : %.2lf\n",attendence);
    printf("\n");
    printf("MID : %.2lf\n",mid);
    printf("\n");
    printf("FINAL : %.2lf\n",final);
    printf("\n");
    total=attendence+quiz_avarege+presentation+assignment+mid+final;
    printf("TOTAL MARKS : %.2lf",total);
    printf("\n\n");
    if(total>=80)
    {
        printf("GRADE : A+\t GRADE P0INT : 4.00\n");
    } 
    else if(total>=75){
        printf("GRADE : A\t GRADE P0INT : 3.75\n");
    }
    else if(total>=70){
        printf("GRADE : A-\t GRADE P0INT : 3.50\n");
    }
    else if(total>=65){
        printf("GRADE : B+\t GRADE P0INT : 3.25\n");
    }
    else if(total>=60){
        printf("GRADE : B\t GRADE P0INT : 3.00\n");
    }
    else if(total>=55){
        printf("GRADE : B-\t GRADE P0INT : 2.75\n");
    }
    else if(total>=50){
        printf("GRADE : C+\t GRADE P0INT : 2.50\n");
    }
    else if(total>=45){
        printf("GRADE : C\t GRADE P0INT : 2.25\n");
    }
    else if(total>=40){
        printf("GRADE : D\t GRADE P0INT : 2.00\n");
    }
    else{
        printf("GRADE : F\t GRADE P0INT : 0.00\n");
    }
    return 0;
} 
