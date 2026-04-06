#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    string studenti[27] = {
        "acierno vito", "alfano andrea", "attrotto giovanni pio", "baroni andrea",
        "belletti davide", "cagnacci dario", "chafqi mohammed", "decataldo samuele",
        "di donna raffaele", "dioguardi gabriele", "el jihad imane", "ezziymy rayane",
        "ferrari luca", "lotierzo gabriele", "martinelli mattia", "niscio paolo",
        "restino marco", "rima lorenzo", "siwek kamil", "tarasco alessandro",
        "tramontana ernesto", "turci luca", "ventura federico", "vicini emilio ruggero",
        "vicini lorenzo", "wang yi nicky", "zarra matteo"
    };
    
    int estratto = rand() % 27;
    
    cout << "numero: " << estratto + 1 << "\n";
    cout << "alunno: " << studenti[estratto] << "\n";
    
    return 0;
}