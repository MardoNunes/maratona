#include <bits/stdc++.h>

using namespace std;


int contagem(string s){
    string aux = "codeforces";
    int cont = 0;

    for(int i = 0; i < 10; i++){
        if(s[i] != aux[i]){
            cont++;
        }
    }
    return cont;
}


int main(){
    int n;
    string s;
    int cont = 0;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        cont = contagem(s);
        cout << cont << '\n';
    }

    return 0;
}