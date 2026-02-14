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




//6.Write a C program to find all roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,disc,root1,root2;
    printf("Enter a,b,c Values : ");
    scanf("%f %f %f",&a,&b,&c);
    
    disc = b*b-4*a*c;
    if (disc>0)
    {
        root1 = (-b+sqrt(disc))/(2*a);
        root2 = (-b-sqrt(disc))/(2*a);
        printf("The roots are real and unequal = %0.2f and %0.2f",root1,root2);
    } else if (disc==0)
    {
        root1 = (-b/(2*a));
        printf("The roots are real and equal = %0.2f",root1);
    } else 
           printf("The roots are complex and imaginary");
           
          
    return 0;

    }




//7.7.Write a C program to check whether a character is uppercase or lowercase alphabet.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);
    
    if(ch>='A' && ch<='Z')
    {
        printf("This is upper case alphabet");
        
    }else if (ch>='a' && ch<='z')
    {     printf("Lower case alphabet");
    
    }else 
         printf("Invalid input");
     
    return 0;     
}




//8.write a c programme to count total number of notes in given number.
#include<stdio.h>
int main()
{
    int amount,count=0,i;
    int notes[]={1000,500,200,100,50,20,10,5,2,1};
    printf("Enter amount :");
    scanf("%d",&amount);
    
    for(i = 0; i<10; i++)
    {
        count += amount/notes[i];
        amount = amount % notes[i];
    } 
    printf("Total number of notes = %d",count);
    return 0;     
}











