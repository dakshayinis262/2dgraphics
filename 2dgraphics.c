#include<stdio.h>
#define rows 30
#define columns 30
char canvas[rows][columns];
void initializeCanvas(){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            canvas[i][j]=' ';
        }
    }
}
void displayCanvas()
{
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%c",canvas[i][j]);
        }
        printf("\n");
    }
}
void drawRectangle(int row,int col,int height,int width){
    int i;
    for(i=col;i<col+width;i++){
        canvas[row][i]='*';
        canvas[row+height-1][i]='*';
    }
    for(i=row;i<row+height;i++){
        canvas[i][col]='*';
        canvas[i][col+width-1]='*';
    }
}
void drawLine(int row1,int col1,int row2,int col2){
    int i,start,end;
    if(row1==row2)
    {
        start=col1;
        end=col2;
    }
    else 
    {
        start=col2;
        end=col1;
    }
    for(i=start;i<=end;i++)
      canvas[row1][i]='*';
    }