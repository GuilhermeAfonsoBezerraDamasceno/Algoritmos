#include <iostream>
#include <vector>

using std::vector, std::cout, std::cin, std::endl;

int main() {
    vector<int> vetor;
    int n = 10, num;

    while(n>0){
        cout << "Digite um número: ";
        cin >> num;
        vetor.push_back(num);
        n--;
    }
    for(int v : vetor){
        cout << v << endl;
    }
    return 0;
}
