//Tic Tac Toe By ABSY (IRBI Alternative Development)

#include <iostream>
using namespace std;


char square[10] = {'o','1','2','3','4','5','6','7','8','9'};


//Forward Decleration
int Engine();
void DrawOutline();



int main()
{
	int player = 1,i,option;

    //Acceptin='X' or a 'O'
    char mark;

    do
    {
        DrawOutline();                         
        player=(player%2)?1:2;

        cout << "      Player " << player << ", enter a number:  ";
        cin >> option;

        mark=(player == 1) ? 'X' : 'O';

        if (option == 1 && square[1] == '1')

            square[1] = mark;
        else if (option == 2 && square[2] == '2')

            square[2] = mark;
        else if (option == 3 && square[3] == '3')

            square[3] = mark;
        else if (option == 4 && square[4] == '4')

            square[4] = mark;
        else if (option == 5 && square[5] == '5')

            square[5] = mark;
        else if (option == 6 && square[6] == '6')

            square[6] = mark;
        else if (option == 7 && square[7] == '7')

            square[7] = mark;
        else if (option == 8 && square[8] == '8')

            square[8] = mark;
        else if (option == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout<<"         Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=Engine();

        player++;
    }while(i==-1);
    DrawOutline();
    if(i==1)

        cout<<"==>\a       Player "<<--player<<" win ";
    else
        cout<<"==>\a       Game draw";

    cin.ignore();
    cin.get();
    return 0;
}




/*        GAME STATUS
=====================================
     1  = GAME OVER WITH RESULT
    -1  = GAME IN PROGRESS
     O  = GAME OVER & NO RESULT    */

//Game Engine (Developing Logics behind every moves)
int Engine()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}

//Game Board
void DrawOutline()
{
    system("cls");
    cout << "\n\nTic Tac Toe By ABSY  (Anupam Bhanu Suraj Yudip) Group\n\n";

    cout <<endl<< "      Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "               |     |     " << endl;
    cout << "            " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "          _____|_____|_____" << endl;
    cout << "               |     |     " << endl;

    cout << "            " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "          _____|_____|_____" << endl;
    cout << "               |     |     " << endl;

    cout << "            " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "               |     |     " << endl << endl;
}
