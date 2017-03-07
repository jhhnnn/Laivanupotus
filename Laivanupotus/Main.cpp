#include<iostream>
using namespace std;

int main(){
	const int vaaka = 7;
	const int pysty = 7;
	int lauta[vaaka][pysty] = { 0 };
	
	int rivi[11] = {
		0, 0, 1, 2, 3, 4, 5, 6, 7, 0, 0
	};



	char valinta;
	cout << "Laivanupotuspeli\n================\n" << endl;
	cout << "Valinnat:\n1) Syota laivat\n2) Pelaa\n3) Arvo laivojen sijainnit\nL) Lopeta\n" << endl;
	cout << "Valintasi: ";
	cin >> valinta;

	
	while (valinta != 'l'){
			
		if (valinta == 49){
			cout << "Valitsit laivojen syottamisen\n" << endl;
			//laivojen syöttö

			for (int i = 0; i < vaaka; i++) {
				for (int j = 0; j < pysty; j++) {
					cout << lauta[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			int vaakak=0;
			char koordinaatti[2], suunta;
			cout << "Mihin 5:n pitka laiva laitetaan: ";
			cin >> koordinaatti;
			cout << "Mihin suuntaan? (p=pohjoinen, i=ita jne.. :";
			cin >> suunta;
			lauta[koordinaatti[2] - 96][koordinaatti[1]]=5;

			for (int i = 0; i < vaaka; i++) {
				for (int j = 0; j < pysty; j++) {
					cout << lauta[i][j] << " ";
				}
				cout << endl;
			}
			


			//uudestaan valikko
			cout << "Laivanupotuspeli\n================\n" << endl;
			cout << "Valinnat:\n1) Syota laivat\n2) Pelaa\n3) Arvo laivojen sijainnit\nL) Lopeta\n" << endl;
			cout << "Valintasi: ";
			cin >> valinta;
		}
		if (valinta == 50){
			cout << "Valitsit laivanupotuksen \n" << endl;
			//laivanupotuksen peluu




			//valikko uudestaan
			cout << "Laivanupotuspeli\n================\n" << endl;
			cout << "Valinnat:\n1) Syota laivat\n2) Pelaa\n3) Arvo laivojen sijainnit\nL) Lopeta\n" << endl;
			cout << "Valintasi: ";
			cin >> valinta;
		}
		if (valinta == 51){
			cout << "Valitsit laivojen sijainnin arpomisen\n" << endl;
			//sijainnit arvotaan

			//valikko uudestaan
			cout << "Laivanupotuspeli\n================\n" << endl;
			cout << "Valinnat:\n1) Syota laivat\n2) Pelaa\n3) Arvo laivojen sijainnit\nL) Lopeta\n" << endl;
			cout << "Valintasi: ";
			cin >> valinta;
		}
	}
	cout << "\n----------\nHei hei!\n----------" << endl;



	


	

	system("pause");
	return EXIT_SUCCESS;
}