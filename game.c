#include<stdio.h>
char s[10]={'0','1','2','3','4','5','6','7','8','9'};
int board()
{
 printf("\n***cross Or Zero***\n");
 
 printf("\nplayer1(X)     player2(O)\n");
 
 printf("\t %c | %c | %c \n",s[1],s[2],s[3]);
 printf("\t __  __  __ \n") ;
 printf("\t %c | %c | %c \n",s[4],s[5],s[6]);
 printf("\t __  __  __ \n");
 printf("\t %c | %c | %c \n",s[7],s[8],s[9]);
return 0;
}
int checkwin()
{
      if(s[1]==s[2] && s[2]==s[3]) return 1;
 else if(s[4]==s[5] && s[5]==s[6]) return 1;
 else if(s[7]==s[8] && s[8]==s[9]) return 1;
 else if(s[1]==s[4] && s[4]==s[7]) return 1;
 else if(s[2]==s[5] && s[5]==s[8]) return 1;
 else if(s[3]==s[6] && s[6]==s[9]) return 1;
 else if(s[1]==s[5] && s[5]==s[9]) return 1;
 else if(s[3]==s[5] && s[5]==s[7]) return 1;
 else if(s[1]!='1' && s[2]!='2' && s[3]!='3' && s[4]!='4' && s[5]!='5' && s[6]!='6' && s[7]!='7' && s[8]!='8' && s[9]!='9') return 0; 
 else return -1;

}

int main()
{
 int p=1,ch,i;
 char mark;
do
{
board();
xyz:
p=(p%2)?1:2;
printf("player %d enter your choice",p);
scanf("%d",&ch);

mark=(p==1)?'X':'O';

     if(ch==1 && s[1]=='1')s[1]=mark;
else if(ch==2 && s[2]=='2')s[2]=mark;
else if(ch==3 && s[3]=='3')s[3]=mark;
else if(ch==4 && s[4]=='4')s[4]=mark;
else if(ch==5 && s[5]=='5')s[5]=mark;
else if(ch==6 && s[6]=='6')s[6]=mark;
else if(ch==7 && s[7]=='7')s[7]=mark;
else if(ch==8 && s[8]=='8')s[8]=mark;
else if(ch==9 && s[9]=='9')s[9]=mark;
else
{
 printf("Invalid move");
 goto xyz;
}
i=checkwin();
p++;
}while(i==-1);
board();
if(i==1)
printf("\nplayer %d win",--p);

else 
 printf("\ndraw match");

return 0;
}
