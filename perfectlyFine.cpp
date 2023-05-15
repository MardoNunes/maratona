#include <bits/stdc++.h>

using namespace std;

int numero(string s){
    if(s[0] == '0' && s[1] == '0'){
        return 0;
    }
    else if(s[0] == '0' && s[1] == '1'){
        return 1;
    }
    else if(s[0] == '1' && s[1] == '0'){
        return 2;
    }
    else if(s[0] == '1' && s[1] == '1'){
        return 3;
    }
    return -1;
}


int main(){
    int input;
    int n;
    int t;
    int min;
    string s;
    
    
    int NOP = -1;

    cin >> input;
    for(int i = 0; i < input; i++){
        
        int menor1 = 1000000;
        int menor2 = 1000000;
        int menor3 = 1000000;
        int time = 0;
        int flag2 = 0;
        int flag = 0;



        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> t;
            cin >> s;
            
            min = numero(s);
            if(min == -1){
                cout << "error" << '\n';
                exit(1);
            }
            else if(min == 3){
                flag = 1;
                if(t < menor3){
                        time = t;
                        menor3 = t;
                    }
                }
                else if(min == 1 && flag == 0){
                    if(t < menor1 ){
                        menor1 = t;
                        time += t;
                    }
                }
                else if(min == 2 && flag == 0){
                    flag2 = 1;
                    if(t < menor2){
                        menor2 = t;
                        time += t;
                    }
            }
            
        }
       if(flag2 == 0 && flag == 0){
            cout << NOP << '\n';
       } 
       else 
         {
              cout << time << '\n';
         }   
   }

    return 0;
}