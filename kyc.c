#include<stdio.h>
int main()
{
    int choice,id;
    int pan,aadhar,apaar,dl,passport;
    //take stored kyc records as input
    printf("enter stored pan number:\n");
    scanf("%d",&pan);
     printf("enter stored aadhar number:\n");
    scanf("%d",&aadhar);
     printf("enter stored apaar id:\n");
    scanf("%d",&apaar);
     printf("enter stored driving licence:\n");
    scanf("%d",&dl);
     printf("enter stored passport:\n");
    scanf("%d",&passport);
    printf("\n select the id type to verify:\n");
    printf("1.pan number\n");
     printf("2.aadhar number\n");
      printf("3.apaar id\n");
       printf("4.driving licence\n");
        printf("5.passport\n");
        printf("enter your choice(1-5):");
        scanf("%d",&choice);
        if(choice<1||choice>5)
        {
            printf("invalid choice\n");
            return 0;
        }
        printf("enter the id number to verify:\n");
        scanf("%d",&id);
        switch(choice)
        {
            case 1:
            if(id==pan)
            printf("verified:pan number is valid.\n");
            else
            printf("not verified:pan number not found.\n");
            break;
            case 2:
            if(id==aadhar)
            printf("verified:aadhar number is valid.\n");
            else
            printf("not verified:aadhar number not found.\n");
            break;
            case 3:
            if(id==apaar)
            printf("verified:apaar id is valid.\n");
            else
            printf("not verified:apaar id not found.\n");
            break;
            case 4:
            if(id==dl)
            printf("verified:driving licence is valid.\n");
            else
            printf("not verified:driving licence not found.\n");
            break;
            case 5:
            if(id==passport)
            printf("verified:passport is valid.\n");
            else
            printf("not verified:passport not found.\n");
            break;
            default:
            printf("invalid choice! please select numbers between (1-5):");
             }
             return 0;
}