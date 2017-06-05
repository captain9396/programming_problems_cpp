/*
 * Author: Marin Shalamanov
 * Date: 14.09.2010
 */

#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <ctime>
#include <conio.h>
#include <queue>
#include <windows.h>
using namespace std;

#define H 30
#define W 30

char scr[H][W];

short int length;
short int i, j;
short int diff;
bool eaten = false;

void init();
void print();
void clear_screen ();
void intro();
void game_over();
void set_diff();
void main_menu();
void play();

class snake{
    public:
    queue<short int> x; 	// coordinates of each piece of the snake
    queue<short int> y; 	// Yes, it would be better if there was a class Coordinate
                            // but I'm too lazy to rewrite it
    void init(){
        x.push(H/2);
        y.push(W/2-1);
        x.push(H/2);
        y.push(W/2);
    }

    void add(){
        scr[x.back()][y.back()] = scr[x.front()][y.front()] = 'X';
    }

    //Movements
    void up(){
        if(x.back()==0) game_over();
        x.push(x.back()-1);
        y.push(y.back());
        if(scr[x.back()][y.back()] == 'X') game_over();
        if(scr[x.back()][y.back()] != 'o'){
            scr[x.front()][y.front()] = ' ';
            x.pop();
            y.pop();
        }else eaten = true;
        scr[x.back()][y.back()] = 'X';
    }
    void down(){
        if(x.back()==H-1) game_over();
        x.push(x.back()+1);
        y.push(y.back());
        if(scr[x.back()][y.back()] == 'X') game_over();
        if(scr[x.back()][y.back()] != 'o'){
            scr[x.front()][y.front()] = ' ';
            x.pop();
            y.pop();
        }else eaten = true;
        scr[x.back()][y.back()] = 'X';
    }
    void left(){
        if(y.back()==0) game_over();
        x.push(x.back());
        y.push(y.back()-1);
        if(scr[x.back()][y.back()] == 'X') game_over();
        if(scr[x.back()][y.back()] != 'o'){
            scr[x.front()][y.front()] = ' ';
            x.pop();
            y.pop();
        }else eaten = true;
        scr[x.back()][y.back()] = 'X';
    }
    void right(){
        if(y.back()==W-1) game_over();
        x.push(x.back());
        y.push(y.back()+1);
        if(scr[x.back()][y.back()] == 'X') game_over();
        if(scr[x.back()][y.back()] != 'o'){
            scr[x.front()][y.front()] = ' ';
            x.pop();
            y.pop();
        }else eaten = true;
        scr[x.back()][y.back()] = 'X';
    }
}sn;


int main(){
    intro();
    main_menu();

    return 0;
}

void main_menu(){
    clear_screen();

    printf("\n\tMAIN MENU 	\n                        \n");
    printf("\t1. Start game         	\n");
    printf("\t2. Exit               	\n");
    printf("\n\n                               	\n\t");

    short int choice;
    scanf("%d", &choice);
    switch(choice){
        case 1: set_diff(); play(); break;
        case 2: exit(0); break;
        default: main_menu();
    }
}

void play(){
    sn.init();
    init();
    sn.add();
    length = 2;

    char key;
    short int foodx, foody; 	//apple's coordinates
    short int moves = 29;

    while(true){
        clear_screen();
        print();
        if(kbhit()) key = getch(); 	//If key is pressed

        switch(key){
            case 'w': sn.up(); break;
            case 's': sn.down(); break;
            case 'a': sn.left(); break;
            case 'd': sn.right(); break;
            case '0': exit(0); break;
        }

        moves++;
        if(moves==30 || eaten){             	//the apple changes its location
            if(!eaten) scr[foodx][foody] = ' ';
            else length++;
            moves = 0;
            foodx = rand()%H;
            foody = rand()%W;
            scr[foodx][foody] = 'o';
            eaten = false;
        }
        Sleep(diff);
    }
}

void init(){
    for(i = 0; i < H; i++)
        for(j = 0; j < W; j++)
            scr[i][j] = ' ';
}

void print(){
    for(i = 0; i < H; i++){
        for(j = 0; j < W; j++) printf("%c ", scr[i][j]);
        printf("\n");
    }
    printf("Length: %d ", length);
    for(j = 5; j < W; j++) printf("  ");
    printf("+");
}

void clear_screen (){                           	//Actually, this func does not clear,
  COORD coord = {0};                                //it just set the cursor at the
  HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );    // top left corner of the screen
  SetConsoleCursorPosition ( h, coord );
}

void intro(){
    clear_screen();
    printf("\n\n\t\tSNAKE\n\n");
    printf("\tControls: WASD\n\n");
    getch();
}

void game_over(){
    clear_screen();
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tGAME OVER!\n\n");
    Sleep(1000);
    main_menu();
}

void set_diff(){
    printf("\n\tDifficulty (1-5): ");
    scanf("%d", &diff);
    diff = (5 - diff)*25;
}
