#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool kiemTraNamNhuan(int nam) {
    
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        return true;
    }
    else {
        return false;
    }
}


void displayMenu() {
    cout << "===== MENU =====" << endl;
    cout << "1. Kiem tra SNT" << endl;
    cout << "2. Kiem tra nam nhuan" << endl;
    cout << "3. Exit" << endl;
    cout << "=================" << endl;
    cout << "Options (1/2/3): ";
}

int main() {
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1: {
            int num;
            cout << "Nhap 1 so nguyen duong: ";
            cin >> num;
            if (isPrime(num)) {
                cout << num << " SNT" << endl;
            }
            else {
                cout << num << " khong phai SNT" << endl;
            }
            break;
        }

        case 2:
            int num;
            cout << "Nhap vao 1 nam: ";
            cin >> num;
            if (kiemTraNamNhuan(num)) {
                cout << num << " la nam nhuan\n";
            }
            else
            {
                cout << num << " khong la nam nhuan\n";
            }
        case 3:
            cout << "EXIT!" << endl;
            break;
        default:
            cout << "Chon lai" << endl;
        }
    } while (choice != 3); 
	system("pause");
	return 0;
}