#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long movimentos = 0;
    long long atual;
    long long anterior;

    cin >> anterior;

    for(int i = 1; i < n; i++) {
        cin >> atual;
        if(atual < anterior) {
            movimentos += (anterior - atual);
        } else {
            anterior = atual;
        }
    }

    cout << movimentos << endl;

    return 0;
}