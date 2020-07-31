//created By Hardik 

# include <stdio.h>
# include <stdlib.h>
# include <time.h>


int snackWaterGun(char you, char comp){
    //return 1 if you win, -1 if you lose and 0 if draw

    if(you==comp){
        return 0;
    }
    
    if(you=='s' && comp=='w'){
        return 1;
    }


    else if(you=='w' && comp=='s'){
        return -1;
    }
    

     if(you=='g' && comp=='s'){
        return 1;
    }
   

   else if(you=='s' && comp=='g'){
        return -1;
    }
    if(you=='g' && comp=='w'){
        return -1;
    }
    else if(you=='w' && comp=='g'){
        return 1;
    }
else{
	printf("▬ Please Select In Above Options ▬");
	printf("▬ Only Play If You Know How To Play This Game  ▬");
}
    


    
}
int main(){

    char you,comp;
     int number;
    srand(time(0));
    number=rand()%100+1;
    //printf("Number is %d",number);

    if(number<33){
        comp='s';
    }
    else if(number>33 && number<66){
        comp='w';
    }
    else{
        comp='g';
    }
    printf("▬ Enter 's' for Snack , 'w' for water and 'g' for gun ▬\n");
    scanf("%c",&you);
    int result=snackWaterGun(you,comp);
     printf("You choose %c and computer choose %c",you , comp);
    if(result==0){
        printf("  ▬ Game Drow ▬\n");
    }
    else if(result==1){
        printf(" ▬ You Win ▬ \n");
    }
    else{
        printf("  ▬ You Lose ▬ \n");
    }
   
    return 0;

}