#include <stdio.h>


void main()
{
    int i,j,k=0,row1,col1;   
    printf("Player 1: X\nPlayer 2: O");
    char a[4][4] = {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'};
    printf("\nINSTRUCTIONS: Enter the ROW and COLUMN number to place your choice.\n");   
    for(row1=1;row1<4;row1++) {
                for( col1=1;col1<4;col1++){
                    printf("-\t",a[row1][col1]);
                }
                printf("\n");
    }


        while(k<=3)
        {
            
            {
            printf("\nPlayer 1 turn:\n");
            printf("\nEnter row and column:\n");
            scanf("%d %d",&row1,&col1);
            a[row1][col1]='X';
            for(i=1;i<4;i++) {
                for(j=1;j<4;j++){
                    if((a[1][1]=='X' && a[2][2]=='X' && a[3][3]=='X') || (a[1][1]=='X' && a[2][1]=='X' && a[3][1]=='X') || (a[1][2]=='X' && a[2][2]=='X' && a[3][2]=='X') || (a[1][3]=='X' && a[2][3]=='X' && a[3][3]=='X') || (a[3][1]=='X' && a[3][2]=='X' && a[3][3]=='X') || (a[2][1]=='X' && a[2][2]=='X' && a[2][3]=='X') || (a[1][1]=='X' && a[1][2]=='X' && a[1][3]=='X') || (a[1][3]=='X' && a[2][2]=='X' && a[3][1]=='X'))
                {            
                         printf("\n\nPlayer 1 WINS!!!\n\n");
                         goto x;
                }
                }   
                
                
        }
        printf("\n");
                            for(int m=1;m<4;m++) {
                        for(int n=1;n<4;n++)
                            printf("%c\t",a[m][n]);
                        printf("\n");
                    }

    }
            
            printf("\nPlayer 2 turn:\n");
            printf("\nEnter row and column:\n");
            scanf("%d %d",&row1,&col1);
            a[row1][col1]='O';
            
            k=k+1;
            
             for(i=1;i<4;i++) {
                for(j=1;j<4;j++){
                        
                    if((a[1][1]=='O' && a[2][2]=='O' && a[3][3]=='O') || (a[1][1]=='O' && a[2][1]=='O' && a[3][1]=='O') || (a[1][2]=='O' && a[2][2]=='O' && a[3][2]=='O') || (a[1][3]=='O' && a[2][3]=='O' && a[3][3]=='O') || (a[3][1]=='O' && a[3][2]=='O' && a[3][3]=='O') || (a[2][1]=='O' && a[2][2]=='O' && a[2][3]=='O') || (a[1][1]=='O' && a[1][2]=='O' && a[1][3]=='O') || (a[1][3]=='O' && a[2][2]=='O' && a[3][1]=='O') )
                    {
             
                        printf("\n\nPlayer 2 WINS!!!\n\n");
                        goto x;
                    }

                }
             
            }
            printf("\n");
            for(int g=1;g<4;g++) {
                            for(int h=1;h<4;h++) {
                            printf("%c\t",a[g][h]); }
                        printf("\n");
                    }
        }
        x:
         for(int g=1;g<4;g++) {
                            for(int h=1;h<4;h++) {
                            printf("%c\t",a[g][h]); }
                        printf("\n");
                    }
        printf("\nGAME OVER!!!\n");
     
            
        }
