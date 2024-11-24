/*
    Exp. No. : 1(b)
    Title: WAP to get students PCM marks from the user and find the average and eligibility
    Name: Mohammed Shayanuddin
    Class & Div: F.E / C
    UIN:241P002
*/
#include<stdio.h>

int main()
{
    printf("\t\t\t***Average And Eligibility***\n\n\n");
    float P,C,M,Av;

    printf("Enter obtained marks in Physics:\t");
    scanf("%f",&P);
    printf("Enter obtained marks in Chemistry:\t");
    scanf("%f",&C);
    printf("Enter obtained marks in Mathematcis:\t");
    scanf("%f",&M);

    Av = (P+C+M)/3;
    printf("Average Marks Obtained:%f\n",Av);

    if(Av>=50 && P>=50 && C>=50 && M>=50)
        printf("Student is eligible for Admission");
    else
        printf("Student is not eligible for Admission");

    return 0;
}

/*
Output:-

                       ***Average And Eligibility***


Enter obtained marks in Physics:        67
Enter obtained marks in Chemistry:      56
Enter obtained marks in Mathematcis:    87
Average Marks Obtained:70.000000
Student is eligible for Admission
Process returned 0 (0x0)   execution time : 12.295 s
Press any key to continue.

*/
