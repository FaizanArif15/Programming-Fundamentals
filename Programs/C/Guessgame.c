//WAP to make guess no. game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num,g,nguess=0;
    srand(time(0));
    num=rand()%100+1;  //+1 becz we want number between 1 to 100
    printf("Welcome to no. guess game\n");
    printf("Enter a number between 1 to 100: ");
  
   
  
    while(g!=num)
    {scanf("%d",&g);
    if (g>num)
    printf("Enter a small value: \n");
   else if (g<num)
    printf("Enter a large value: \n");
    else
    printf("You have gussed it in %d attempts\n",nguess);
  nguess++;
    }
    printf("Thank you for playing");
return 0;
  }
