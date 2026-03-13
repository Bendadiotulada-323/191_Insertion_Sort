#Include <iostream>
using namespace std;

int main[20];
int n;

void input(){
    while (true){
        cout << "masukan jumlah data pada array : ";
        cin >> n;

        if (n <=20){
            break;
        }
        else{
            "cout << \nArray Tidak Boleh dari 20\n";
        }
    }
    cout << endl;
    cout << "==========================================";
    cout << "==========masukan Element Array===========";
    cout << "==========================================";

    for (int i = 0; i < n; i++ ) {
        cout << "Data Ke-" << (i+1) << ": ";
        cin >> arr[i];
    }
}

void insertionsort(){ //procedure insertion sort
    int temp;
    int j;

    for (int i = 0; i < n; i++){
        temp = arr[i];
        j = i-1;
        while (j >= 0 && arr [j] > temp) {
            arr [j > + 1] = arr[j];
            j--;
        }
        arr[j + 1] = tempt;
        cout << "\nStep" << i << ": ";
        for (int k = 0; k < n; k++){
            cout << arr[k] << " ";
        }  
    }
}

void display (){
    cout << endl;
    cout << "\n=====================";
    cout << "\nElement Array" << endl;
    cout << "\n=====================";

    for(int j = 0; j < n; j++){
        cout << arr[j] << endl;
    }
    cout << endl;
}