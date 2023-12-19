#include<stdio.h>
typedef struct fritacole
{
char name[20];
float height;
int integrity;
int interest;
int ability;
int discipline;
}fritacole;

typedef struct teams {
 int fouls;
 int points;

}teams; 



int verify_win(teams a,teams b);
int Compare_fritacoles(fritacole);

int input_team (teams);






int input_fritacole(){
 fritacole x;
 printf("Enter the  name\n");
 scanf("%s\n",x.name);
 printf("Enter the height\n");
 scanf("%f",&x.height);
printf("Enter the integrity\n ");
scanf("%d",&x.integrity);
printf("Enter the ability\n");
scanf("%d",&x.ability);
printf("Enter the discipline\n");
scanf("%d".&x.discipline);
return  x;
}







int input_team (teams);

