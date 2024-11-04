#include "provider.h"

ReservoirProvider::ReservoirProvider() 
{
    _count = 0;
    _reservoirs = new Reservoir[_count + 1];
}

ReservoirProvider::ReservoirProvider(int count) 
{
    _count = count;
    _reservoirs = new Reservoir[count];
}

void ReservoirProvider::AddReservoir(const Reservoir& reservoir) 
{
    Reservoir* temp = new Reservoir[_count + 1];
    for (int i = 0; i < _count; i++) {
        temp[i] = _reservoirs[i];
    }
    temp[_count] = reservoir;
    delete[] _reservoirs;
    _reservoirs = temp;
    _count++;
}

void ReservoirProvider::PrintReservoirs() const
{
    for (int i = 0; i < _count; i++) {
        _reservoirs[i].Print();
        cout << "-------------------" << endl;
    }
}

ReservoirProvider::~ReservoirProvider()
{
    delete[] _reservoirs;
}