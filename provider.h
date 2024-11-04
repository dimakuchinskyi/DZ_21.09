#ifndef PROVIDER_H
#define PROVIDER_H

#include "reservoir.h"

class ReservoirProvider {
private:
    Reservoir* _reservoirs = nullptr;
    int _count;

public:
    ReservoirProvider();
    explicit ReservoirProvider(int count);

    void AddReservoir(const Reservoir& reservoir);

    void PrintReservoirs() const;

    ~ReservoirProvider();
};

#endif 