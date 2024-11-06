//ƒано л≥терний р€док, €кий м≥стить посл≥довн≥сть символ≥в s0, Е, sn, Е .
//1 ѕ≥драхувати загальне число входжень символ≥в У + Ф, УЦФ, У = Ф в ц≥й посл≥довност≥.
//2. «ам≥нити кожний ≥з символ≥в У + Ф, УЦФ, У = Ф парою з≥рочок У * *Ф.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


int Count(char* str) {
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '=') {
            k++;
        }
    }
    return k;
}


char* Change(char* str) {
    size_t len = strlen(str);
    char* tmp = new char[len * 2 + 1];
    char* t = tmp;

    for (size_t i = 0; i < len; i++) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '=') {
            strcat(t, "**"); 
            t[0] = '*'; 
            t[1] = '*';
            t += 2;
        }
        else {
            *t++ = str[i]; 
        }
    }
    *t = '\0'; 
    strcpy(str, tmp); 
    return tmp;
}  

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    
    cout << "String contained " << Count(str) << " occurrences of '+', '-', or '='." << endl;

    
    char* dest = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    delete[] dest; 
    return 0;
}

