#include <stdio.h>
#include <stdlib.h>

#define WIDTH 30
#define HEIGHT 5

int ballX = WIDTH/2;
int ballY = HEIGHT/2;
int ballDirX = 1;
int ballDirY = 1;
int paddleY = HEIGHT/2;
void draw(){
    system("clear");
    for(int y=0;y<HEIGHT;y++){
        for(int x=0;x<WIDTH;x++){
            if(x==ballX && y==ballY)
            printf("0");
            else if(x==0 && y==paddleY)
            printf("|");
            else if(y==0 || y==HEIGHT-1)
            printf("#");
            else printf(" ");       
         }
         printf("\n");
    }
}
void moveBall(){
    ballX+=ballDirX;
    ballY+=ballDirY;
    if(ballY==0 || ballY==HEIGHT-1)
    ballDirY=-ballDirY;
    if(ballX==WIDTH-1)
    ballDirX = -ballDirX;
    if(ballX==1 &&ballY==paddleY)
    ballDirX=-ballDirX;
    if(ballX==0){
        ballX=WIDTH/2;
        ballY=HEIGHT/2;
    }
}
void input(){
    char c;
    printf("Move (w/s), quit (q):");
    scanf("%c", &c);
    if(c=='w' && paddleY>1)
    paddleY--;
    if(c=='s' && paddleY<HEIGHT-2)
    paddleY++;
    if(c=='q')
    exit(0);
}
int main(){
    while(1){
        draw();
        input();
        moveBall();
    }
    return 0;
}