#include <iostream>
#include <string>
#include <vector>

using namespace std;

void show(int a [6][7]) {
    for (int i = 0; i < 6; i++){
        
        std::cout << "| ";
        for (int j = 0; j < 7; j++){
        
            switch (a[i][j]) {
            case 0:
                cout << " ";
                break;
            case 1:
                cout << "X";
                break;
            case 2:
                cout << "O";
                break;
            default:
                break;
            }
            cout << " ";
        }
        cout << "|" << endl << "|---------------|" << endl;
    }
    cout << "  1 2 3 4 5 6 7  " << endl << endl;
}

int main() {
     
    srand(time(NULL));
    int tab[6][7] = { 0 };
    show(tab);
    
    /* test random
    for (int i = 0; i < 6; i++) {
        
        for (int j = 0; j < 7; j++) {
            tab[i][j] = (rand() % 2) + 1;
        }
        
    } */
    
    int colonne;
    bool j1 = true;
    while(1) {
        cout << (j1?"tour j1":"tour j2");
        cout << ", entrez un numéro de colonne : ";
        cin >> colonne;
        colonne--;
        for (int i = 5; i >= 0; i--) {
            
            if (tab[i][colonne] == 0) {
                if(j1) {
                    tab[i][colonne] = 1;
                }
                else {
                    tab[i][colonne] = 2;
                    
                }
                //system("cls");
                j1 = !j1;
                break;
            }
            else if(i == 0) {
                cout<<"Colonne pleine!" << endl;
            }

        }
        show(tab);
        
    }

    return 0;
}
