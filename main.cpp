#include <iostream>


using namespace std;
int x;
int y;
char jugadoractual = 'X';
 

char tabler[3][3]{
{' ', ' ', ' '},
{' ', ' ', ' '},
{' ', ' ', ' '}
};

int main() {
     

    for (int turn=0; turn < 9; turn ++){

    
     for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
               cout << tabler[i][j];
                if (j < 3 - 1) cout << " | ";
            }
            cout << endl;
            if (i < 3 - 1) cout << "---------" << endl;
        }
     








       cout << "JUGADOR " << jugadoractual<< ": Coloque una jugada entre 1-3 Porfavor"<<endl;
       cin  >> x >> y;
       x--;
       y--;
    

        if (tabler[x][y] == ' '){
        tabler[x][y] = jugadoractual;
        }else {
        cout << "La Casilla esta ocupada" << endl;
        }


        if (jugadoractual == 'X'){
            jugadoractual = 'O';
            }else 
             {
             jugadoractual ='X';
            }
    }
   
   
    for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << tabler[i][j];
                if (j < 3 - 1) cout << " | ";
            }
            cout << endl;
            if (i < 3 - 1) cout << "---------" << endl;
        }
     



        
        
return 0;}
