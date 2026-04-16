//https://atcoder.jp/contests/abc231/tasks/abc231_b

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

    int n;
    cin >> n;
    
    unordered_map<string, int> map;
    
    string nome_vencedor = "";
    int votos = 0;
    
    for(int i = 0; i < n; i++){
        string nova_string;
        cin >> nova_string;
        
        map[nova_string]++;
        
        if(map[nova_string] > votos){
            nome_vencedor = nova_string;
            votos = map[nova_string];
        }
    }

    cout << nome_vencedor << endl;
    
    return 0;
}