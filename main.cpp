/* 
	Nama : Sharashena Chairani
	NPM  : 140810180022
	Kelas: B
	Praktikum Kriptografi - Program Shift Cipher
*/

#include <iostream>
using namespace std;

void enkripsi(){
    string plaintext,ciphertext;
    int k,i;
    char p,text;
    cout << "Input plaintext : ";
    cin.ignore(); 
	getline (cin, plaintext);
    cout << "Input jumlah pergeseran : "; 
	cin >> k;
    ciphertext = " ";

    for(i = 0; i < plaintext.length(); i++){
        p = plaintext[i];
        if(isalpha(plaintext[i])){
            if(isupper(p))
                p = (p+k-65)%26 + 65;
            else
                p = (p+k-97)%26 + 97;
        }
        ciphertext = ciphertext + p;
    }

    cout << "Ciphertext = " << ciphertext <<endl;
}

void dekripsi(){
    string plaintext,ciphertext;
    int k,i;
    char c,text;
    cout << "Input Cipherteks : ";
    cin.ignore(); 
	getline (cin, ciphertext);
    cout << "Input jumlah pergeseran : "; 
	cin >> k;
    plaintext = " ";

    for(i = 0;i < ciphertext.length(); i++){
        c = ciphertext[i];
        if(isalpha(ciphertext[i])){
            if(isupper(c))
                c = (c-k-65)%26 + 65;
            else
                c = (c-k-97)%26 + 97;
        }
        plaintext = plaintext+ c;
    }

    cout << "Plaintext = " << plaintext <<endl;
}

int main()
{
    int x;
    bool stop;
    stop = false;
	cout << "~~~~~~Shift Cipher Program~~~~~~";
    while (!stop)
    {
    	cout << "\n";
        cout << "Pilih menu : " <<endl;
        cout << "1. Enkripsi " <<endl;
        cout << "2. Dekripsi " <<endl;
        cout << "3. Close " <<endl;
        cout << "Input angka : "; cin >> x;
        switch(x){
            case 1 :
			enkripsi();
			break;
            case 2 :
			dekripsi();
			break;
            case 3 :
			stop = true;
			break;
        }
    }
    return 0;
}
