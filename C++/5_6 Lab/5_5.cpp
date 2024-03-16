#include <iostream>
using namespace std;

void initialize(char** arr, char* cord){

    int coordinats[2] = {(56-int(cord[1])), (49-int(cord[0]))*(-1)};
    arr[(56-int(cord[1]))][(49-int(cord[0]))*(-1)] = 'K';

    for (int i = 0; i < 8; i++){
        for (int j = 7; j > -1; j--){
            if ((i == (coordinats[0]-1)) and (j == coordinats[1]-2)) {
                arr[i][j] = '*';
            } else if ((i == (coordinats[0]-1)) and (j == coordinats[1]+2)) {
                arr[i][j] = '*';
            } else if ((i == (coordinats[0]+1)) and (j == coordinats[1]-2)) {
                arr[i][j] = '*';
            } else if ((i == (coordinats[0]+1)) and (j == coordinats[1]+2)) {
                arr[i][j] = '*';
            } else if ((i == (coordinats[0]-2)) and (j == coordinats[1]-1)) {
                arr[i][j] = '*';
            } else if ((i == (coordinats[0]-2)) and (j == coordinats[1]+1)) {
                arr[i][j] = '*';
            } else if ((i == (coordinats[0]+2)) and (j == coordinats[1]-1)) {
                arr[i][j] = '*';
            } else if ((i == (coordinats[0]+2)) and (j == coordinats[1]+1)) {
                arr[i][j] = '*';
            } else if (coordinats[0] == i and coordinats[1] == j){
                arr[(56-int(cord[1]))][(49-int(cord[0]))*(-1)] = 'K';
            } else {
                arr[i][j] = '.';
            }
        }
    }
    //arr[(56-int(cord[1]))][(49-int(cord[0]))*(-1)] = 'K';
    /*
    if ((58-int(cord[1])) < 8 or (48-int(cord[0]))*(-1) < 8){
        arr[(58-int(cord[1]))][(48-int(cord[0]))*(-1)] = '*';
    }
    if ((54-int(cord[1])) < 8 or (48-int(cord[0]))*(-1) < 8){
        arr[(54-int(cord[1]))][(48-int(cord[0]))*(-1)] = '*';
    }
    if ((58-int(cord[1])) < 8 or (50-int(cord[0]))*(-1) < 8){
        arr[(58-int(cord[1]))][(50-int(cord[0]))*(-1)] = '*';
    }
    if ((56-int(cord[1])) < 8 or (50-int(cord[0]))*(-1) < 8){
        arr[(56-int(cord[1]))][(50-int(cord[0]))*(-1)] = '*';
    }
    if ((57-int(cord[1])) < 8 or (47-int(cord[0]))*(-1) < 8){
        arr[(57-int(cord[1]))][(47-int(cord[0]))*(-1)] = '*';
    }
    if ((55-int(cord[1])) < 8 or (47-int(cord[0]))*(-1) < 8){
        arr[(55-int(cord[1]))][(47-int(cord[0]))*(-1)] = '*';
    }
    if ((55-int(cord[1])) < 8 or (51-int(cord[0]))*(-1) < 8){
        arr[(55-int(cord[1]))][(51-int(cord[0]))*(-1)] = '*';
    }
    if ((57-int(cord[1])) < 8 or (51-int(cord[0]))*(-1) < 8){
        arr[(57-int(cord[1]))][(51-int(cord[0]))*(-1)] = '*';
    }

    PS это мой говно-код :-(
     */
}

void output(char** arr){
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cout.width(2);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void horse_pos(char* cords){
    switch (cords[0]) {
        case 'a':
            cords[0] = '1';
            break;
        case 'b':
            cords[0] = '2';
            break;
        case 'c':
            cords[0] = '3';
            break;
        case 'd':
            cords[0] = '4';
            break;
        case 'e':
            cords[0] = '5';
            break;
        case 'f':
            cords[0] = '6';
            break;
        case 'g':
            cords[0] = '7';
            break;
        case 'h':
            cords[0] = '8';
            break;
    }
}

int main() {
    char** desk = new char* [8];
    for (int i = 0; i < 8; i++){
        desk[i] = new char [8];
    }

    char* cord = new char [2];
    cin >> cord;
    //cout << int('6')
    horse_pos(cord);
    initialize(desk, cord);
    output(desk);
}