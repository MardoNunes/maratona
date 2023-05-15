#include <bits/stdc++.h>

using namespace std;





int main(){
    int num;
    int n;
    int b;


    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> n;
        int cont = 0;
        int maior = 0;
        for(int i = 0; i < n; i++){
            cin >> b;
            if(b == 0)
                cont++;
            else if(b == 1)
                cont = 0;

            if(cont > maior)
                maior = cont;
        }
        cout << maior << '\n';
        
    }




    return 0;
}