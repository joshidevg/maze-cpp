#include <iostream>
#include <math.h>
#include <time.h>
#include <cstring>
#include <stdlib.h>
#include <conio.h>

using namespace std;

char base[102];

void board()
{
    int c = 0;
    printf("\t ");
    for(int i = 0; i<19; i++)
    {
        printf("-");
    }
    printf("\n");
    for(int i = 1; i<11; i++)
    {
        for(int j = 1; j<22; j++)
        {
            if(j == 1 || j == 21)
            {
                if(c == 0)
                    printf(" Start= %c", base[0]);
                else if(c == 100)
                    printf("%c= End", base[101]);
                else
                    printf("|");
            }
            else if(j%2 == 1)
            {
                printf(" ");
            }
            else
            {
                c++;
                printf("%c", base[c]);
                //printf("a");
            }
        }
        printf("\n\t");
    }
    printf(" ");
    for(int i = 0; i<19; i++)
    {
        printf("-");
    }
    printf("\n");
}

void set_board()
{
    for(int i = 0; i<102; i++)
    {
        base[i] = 255;
    }
    base[5] = 'O';
    base[11] = 'O';
    base[13] = 'O';
    base[15] = 'O';
    base[17] = 'O';
    base[19] = 'O';
    base[20] = 'O';
    base[21] = 'O';
    base[24] = 'O';
    base[25] = 'O';
    base[27] = 'O';
    base[32] = 'O';
    base[34] = 'O';
    base[37] = 'O';
    base[38] = 'O';
    base[39] = 'O';
    base[45] = 'O';
    base[48] = 'O';
    base[51] = 'O';
    base[52] = 'O';
    base[53] = 'O';
    base[55] = 'O';
    base[57] = 'O';
    base[60] = 'O';
    base[65] = 'O';
    base[67] = 'O';
    base[69] = 'O';
    base[70] = 'O';
    base[72] = 'O';
    base[73] = 'O';
    base[74] = 'O';
    base[75] = 'O';
    base[77] = 'O';
    base[80] = 'O';
    base[88] = 'O';
    base[88] = 'O';
    base[92] = 'O';
    base[94] = 'O';
    base[96] = 'O';
    base[98] = 'O';
    base[99] = 'O';
}

void victory()
{
    system("color 4F");
    printf("                                   YOU WIN\n\n");
    printf("               ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,, \n");
    printf("               ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n");
    printf("                 ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,,,\n");
    printf("                  ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,,,\n");
    printf("       ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,,,,,,,,,,,,,,\n");
    printf("       ,,*         ,,,,,,,,,,,,,,,,,,,,,,,,,,,,    ,,,,,,         ,,,\n");
    printf("     ,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,,           ,,,\n");
    printf("   ,,,,            ,,,,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,,            ,,,,\n");
    printf(" ,,,,,              ,,,,,,,,,,,,,,,,,,,,,,,,,,.   ,,,,,               ,,,,,\n");
    printf(" ,,,,,               ,,,,,,,,,,,,,,,,,,,,,,,,,    ,,,,,               ,,,,,\n");
    printf("  *,,,,              ,,,,,,,,,,,,,,,,,,,,,,,,,    ,,,,,              ,,,,. \n");
    printf("    ,,,,             ,,,,,,,,,,,,,,,,,,,,,,,,,    ,,,,,             ,,,,\n");
    printf("      ,,,,,          ,,,,,,,,,,,,,,,,,,,,,,,,,    ,,,,,          ,,,,,\n");
    printf("         ,,,,,      ,,,,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,,      ,,,,,\n");
    printf("             ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,,,,,,,,, \n");
    printf("                    *,,,,,,,,,,,,,,,,,,,,,,,,,   .,,,,,*\n");
    printf("                      ,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,\n");
    printf("                       ,,,,,,,,,,,,,,,,,,,,,,   ,,,,,\n");
    printf("                         .,,,,,,,,,,,,,,,,,   ,,,,\n");
    printf("                                ,,,,,,,,,,,,\n");
    printf("                                ,,,,,,,,,,,,\n");
    printf("                                 ,,,,,,,,,,\n");
    printf("                                 ,,,,,,,,,,\n");
    printf("                                 ,,,,,,,,,,\n");
    printf("                                 ,,,,,,,,,,\n");
    printf("                                ,,,,,,,,,,,,\n");
    printf("                              ,,,,,,,,,,,,,,,,\n");
    printf("                          ,,,,,,,,,,,,,,,,,,,,,,,,\n");
    printf("                          ,,,,,,,,,,,,,,,,,,,,,,,,\n");
    printf("                        ############################ \n");
    printf("                        ############################ \n");
    printf("                        ############################ \n");
    printf("                        ############################ \n");
    printf("                        ############################ \n");
    printf("                        ############################ \n");
    printf("                       ||||||||||||||||||||||||||||||\n");

cout<<"\n\n\nPress any key to exit"<<endl;
getch();
}

int main()
{
    set_board();
    int a = 1;
    int pos = 0;
    base[pos] = 248;
    char move;
    while(a==1)
    {
        board();
        cout<<"Where do you want to move?. Use w, a, s, d as arrow keys.\n";
        move = getch();
        switch (move)
        {
        case 'w':
            if(pos>=11)
            {
                if(base[pos - 10] != 'O')
                {
                    base[pos] = 255;
                    base[pos - 10] = 248;
                    pos -= 10;
                }
            }
            break;
        case 'a':
            if(pos%10 != 1 && pos != 0)
            {
                if(base[pos - 1] != 'O')
                {
                    base[pos] = 255;
                    base[pos - 1] = 248;
                    pos--;
                }
            }
            break;
        case 's':
            if(pos<=90 && pos!=0)
            {
                if(base[pos + 10] != 'O')
                {
                    base[pos] = 255;
                    base[pos + 10] = 248;
                    pos += 10;
                }
            }
            break;
        case 'd':
            if(pos%10 != 0 || pos == 0)
            {
                if(base[pos + 1] != 'O')
                {
                    base[pos] = 255;
                    base[pos + 1] = 248;
                    pos++;
                }
            }
            break;
        
        default:
            cout<<"Enter a valid key"<<endl;
            break;
        }
        system("cls");
        if(pos == 100)
        {
            board();
            victory();
            a = 0;
        }
        
    }
    return 0;
}
