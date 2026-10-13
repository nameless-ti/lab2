#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    for (int i = 1; i <= 3; i++) {
        string filename = "file" + to_string(i) + ".txt";
        ofstream fout(filename);

        if (!fout.is_open()) {
            cerr << "Не удалось открыть " << filename << endl;
            return 1;
        }

        for (int j = 0; j < 10; j++) {
            int num = rand() % 10 + 1; // [1..10]
            fout << num;
            if (j < 9) fout << " ";
        }
        fout << endl;
        fout.close();
        cout << "Создан " << filename << endl;
    }

    return 0;
}