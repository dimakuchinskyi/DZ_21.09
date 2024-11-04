#include "provider.h"


int main() {
    ReservoirProvider provider;

    provider.AddReservoir(Reservoir("Ozero 1", "Ozero", 10, 50, 30));
    provider.AddReservoir(Reservoir("Sea 1", "Sea", 50, 30, 20));

    provider.PrintReservoirs();
    cout << endl;

    return 0;
}