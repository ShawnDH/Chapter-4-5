/* Caesar Ciphar
04/17/2018
Author: ShawnD Herrick*/
#include <iostream>
#include <fstream>
using namespace std;

void encryption(char *w, char *e, int key){

	char *ptemp = w;


	while (*ptemp){

		if (isalpha(*ptemp)){

			if (*ptemp >= 'a'&&*ptemp <= 'z')
			{
				*ptemp -= 'a';
				*ptemp += key;
				*ptemp %= 26;
				*ptemp += 'A';
			}


		}
		ptemp++;
	}

	w = e;

}

void decryption(char *e, char *w, int key){
	char *ptemp = e;


	while (*ptemp){

		if (isalpha(*ptemp))
		{

			if (*ptemp >= 'A'&&*ptemp <= 'Z')
			{
				*ptemp -= 'A';
				*ptemp += 26 - key;
				*ptemp %= 26;
				*ptemp += 'a';
			}


		}
		ptemp++;
	}

	e = w;

}

void Caesar(char *inputFile, char *outputFile, int key, int mode)
{
	ifstream input;
	ofstream output;
	char buf, buf1;
	input.open(inputFile);
	output.open(outputFile);
	buf = input.get();
	while (!input.eof())
	{
		if (mode == 1){
			encryption(&buf, &buf1, key);
		}
		else{
			decryption(&buf1, &buf, key);
		}
		output << buf;
		buf = input.get();
	}
	input.close();
	output.close();
}

int main(){

	int key, mode;
	key = 3;
	cout << "1 or 0: ";
	cin >> mode;
	Caesar("test.txt", "coded.txt", key, mode);
	system("pause");
}