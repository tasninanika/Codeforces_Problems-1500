#include<iostream>
using namespace std;

int main(){
    long long int i, j, f, n, m, x, p, fnd;
    string s;

    while(getline(cin,s)){
        f = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'A' && s[i + 1] == 'B'){
                fnd = i;
                p = 1;
                break;
            }
        }
        if(p == 1){
            for(j = fnd + 2; j < s.size(); j++){
                if(s[j] == 'B' && s[j + 1] == 'A'){
                    f = 1;
                    break;
                }
            }
        }

        if(p == 2){

        }
    }


    return 0;
}
