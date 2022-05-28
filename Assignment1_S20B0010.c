//documentation section
//Name:Viknesvary A/P Rajoo   Date:25/04/2022   
//Desp:Assignment 1 - determine the highest score for each item (depression, anxiety and stress)

//pre-processor section
#include<stdio.h>
#include<string.h>

//global variable section
void userInput (char studentName[5][15], int depressionLevel[5], int anxietyLevel[5], int stressLevel[5]);
char depressionCondition[5][20],anxietyCondition[5][20],stressCondition[5][20];
int depressionHighest = 0;
int anxietyHighest = 0;
int stressHighest = 0;
int i;

char findScoreDepression(int depressionLevel[5])
{
    for(i=0;i<5;i++)
    {
        if (depressionLevel[i] >= 0 && depressionLevel[i] <= 9)
            strcpy(depressionCondition[i], "Normal");
        else if (depressionLevel[i] >= 10 && depressionLevel[i] <= 13)
            strcpy(depressionCondition[i], "Mild");
        else if (depressionLevel[i] >=14 && depressionLevel[i] <= 20)
            strcpy(depressionCondition[i], "Moderate");
        else if (depressionLevel[i] >= 21 && depressionLevel[i] <= 27)
            strcpy(depressionCondition[i], "Severe");
        else if (depressionLevel[i] >= 28)
            strcpy(depressionCondition[i], "Extreme");
        else
            strcpy(depressionCondition[i], "Invalid");
    }
    
}

char findScoreAnxiety(int anxietyLevel[5])
{
    for(i=0;i<5;i++)
    {
        if (anxietyLevel[i] >= 0 && anxietyLevel[i] <= 7)
            strcpy(anxietyCondition[i], "Normal");
        else if (anxietyLevel[i] >= 8 && anxietyLevel[i] <= 9)
            strcpy(anxietyCondition[i], "Mild");
        else if (anxietyLevel[i] >= 10 && anxietyLevel[i] <= 14)
            strcpy(anxietyCondition[i], "Moderate");
        else if (anxietyLevel[i] >= 15 && anxietyLevel[i] <= 19)
            strcpy(anxietyCondition[i], "Severe");
        else if (anxietyLevel[i] >= 20)
            strcpy(anxietyCondition[i], "Extreme");
        else
            strcpy(anxietyCondition[i], "Invalid");
    }
   
}

char findScoreStress(int stressLevel[5])
{
    for(i=0;i<5;i++)
    {
        if (stressLevel[i] >= 0 && stressLevel[i] <= 14)
           strcpy(stressCondition[i], "Normal");
        else if (stressLevel[i] >= 15 && stressLevel[i] <= 18)
            strcpy(stressCondition[i], "Mild");
        else if (stressLevel[i] >= 19 && stressLevel[i] <= 25)
           strcpy(stressCondition[i], "Moderate");
        else if (stressLevel[i] >= 26 && stressLevel[i] <= 33)
            strcpy(stressCondition[i], "Severe");
        else if (stressLevel[i] >= 34)
            strcpy(stressCondition[i], "Extreme");
        else
            strcpy(stressCondition[i], "Invalid");
    }
   
}

int highestScore(int depressionLevel[5], int anxietyLevel[5], int stressLevel[5]);

//main function section
int main()
{
    char studentName[5][15];
    int depressionLevel[5], anxietyLevel[5], stressLevel[5];

    userInput(studentName,depressionLevel,anxietyLevel,stressLevel);
    findScoreDepression(depressionLevel);
    findScoreAnxiety(anxietyLevel);
    findScoreStress(stressLevel);

    printf("Student Name        Depression      Anxiety         Stress\n");

    for(i=0;i<5;i++)
    {
        printf("%s        ",studentName[i]);
        printf("\t    %s",depressionCondition[i]);
        printf("\t    %s",anxietyCondition[i]);
        printf("\t    %s\n",stressCondition[i]);
    }

    printf("\n=======================================================================\n");
    highestScore(depressionLevel,anxietyLevel,stressLevel);
    printf("Highest score: Depression = %d, Anxiety = %d, Stress = %d ",depressionHighest,anxietyHighest,stressHighest);
}

//user-defined section
void userInput (char studentName[5][15], int depressionLevel[5], int anxietyLevel[5], int stressLevel[5])
{
    for(i=0;i<5;i++)
    {
        printf("Enter Student Name %d : ",i+1);
        scanf(" %s", &studentName[i]);
        printf("Student %d Depression Level:  ",i+1);
        scanf(" %d", &depressionLevel[i]);
        printf("Student %d Anxiety Level: ",i+1);
        scanf(" %d", &anxietyLevel[i]);
        printf("Student %d Stress Level: ",i+1);
        scanf(" %d", &stressLevel[i]);
        printf("--------------------------------------\n");
    }
}

int highestScore(int depressionLevel[5], int anxietyLevel[5], int stressLevel[5])
{
    for (i=0;i<5;i++)
    {
        if (depressionLevel[i] > depressionHighest)
        {
            depressionHighest = depressionLevel[i];
        }
    }

    for (i=0;i<5;i++)
    {
        if (anxietyLevel[i] > anxietyHighest)
        {
            anxietyHighest = anxietyLevel[i];
        }
        
    }
    
    for (i=0;i<5;i++)
    {
        if (stressLevel[i] > stressHighest)
        {
            stressHighest = stressLevel[i];
        }
        
    }   
}