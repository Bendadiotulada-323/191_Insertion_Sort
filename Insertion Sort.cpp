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