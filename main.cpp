#include <windows.h>
#include "CLASS.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
	cout << "Hi world!" << endl;

	Second player;
    //char *buf;
		int n;
		cout << "Press 1 to add player or 2 to read file" << endl;//!!!
		cin >> n;
		if (n == 1) {
            ofstream fs("football.dat", ios::binary | ios::app);

			SetConsoleCP(1251);

            player.set_name();
            player.set_club();
            player.set_PastSpec();
            player.specNow.set_specialization();
            player.specNow.set_nearby_Specialization();
            player.specNow.getSelection.set_criteria();
            player.lvl.set_criteria_ready_lvl();
            player.specNow.getSelection.set_threshold();
            player.specNow.getSelection.set_value();
            player.lvl.set_value_ready_lvl();
            fs.write((char*)&player,sizeof(Second));
            fs.close();
		}
        ////////////////////////
////////////////////////
////////////////////////
////////////////////////
        ////////////////////////
		if (n == 2) {
            ifstream fs("football.dat", ios::binary);
            fs.clear();
            fs.seekg(0, ios_base::beg);
            while (!fs.eof()) {
                fs.read((char*)&player,sizeof(Second));
            }
            fs.close();
		}

    return 0;
}
