//1.Write a C program to check whether a character is alphabet or not.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Alphabet : ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <='z') {
        printf("This is Alphabet");
   } else
        printf("This is Not Alphabet");

    return 0;
}


//2.Write a C program to check whether a year is leap year or not.

#include<stdio.h>
int main()
{
    int year;
    printf("Enter A Year: ");
    scanf("%d",&year);

    if((year % 4==0 && year % 100 !=0) || (year %400==0))
        printf("Leap Year");
    else
        printf("Not Leap Year");

    return 0;
}

//3.Write a C program to check whether a number is divisible by 5 and 11 or not.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num % 5==0 && num % 11==0)
        printf("Divisible by both");
    else
        printf("No");

    return 0;
}

//4.Write a C program to input any alphabet and check whether it is vowel or consonant.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a chearecter: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='z')
      {

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
        printf("This is vowel");
        else
        printf("This is Consonant");
    }
    else
    {
        printf("Not valid");
    }

    return 0;
}

//5.Write a C program to input any character and check whether it is alphabet, digit or special character.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='z')
    {
        printf("This is alphabet");
    }else if (ch>='0' && ch<='9') {
     printf("Number");
    } else {
    printf("Special Character");
    }

    return 0;
}










