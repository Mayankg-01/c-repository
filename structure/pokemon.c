#include<stdio.h>
#include<string.h>
int main()
{
  typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[10];
  }pokemon;

  pokemon arr[2];

  strcpy(arr[0].name,"Pikachu");
  arr[0].hp=100;
  arr[0].speed=150;
  arr[0].attack=200;
  arr[0].tier='A';

  strcpy(arr[1].name,"Mewto");
  arr[1].hp=90;
  arr[1].speed=130;
  arr[1].attack=1600;
  arr[1].tier='B';

  strcpy(arr[0].name,"Charizard");
  arr[0].hp=110;
  arr[0].speed=190;
  arr[0].attack=130;
  arr[0].tier='A';

  for(int i=0;i<=2;i++)
  {
    printf("Name: %s\n",arr[i].name);
    printf("HP: %d\n",arr[i].hp);
    printf("Attack: %d\n",arr[i].attack);
    printf("Tier: %c\n",arr[i].tier);
  }

  


return 0;
}