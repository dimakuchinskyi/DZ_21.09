#include "libs.h"

#ifndef RESERVOIR_H
#define RESERVOIR_H

class Reservoir {
private:
    string _name;
    string _type;
    double _width;
    double _length;
    double _maxDepth;
public:
    Reservoir();
    explicit Reservoir(string name);
    explicit Reservoir(string name, string type);
    explicit Reservoir(string name, string type, double width, double length, double maxDepth);

    Reservoir(Reservoir& reservoir);

    void SetName(string name);
    void SetType(string type);
    void SetWidth(double width);
    void SetLength(double length);
    void SetMaxDepth(double maxDepth);

    inline string GetName() const;
    inline string GetType() const;
    inline double GetWidth() const;
    inline double GetLength() const;
    inline double GetMaxDepth() const;

    double SurfaceArea() const;

    double Volume() const;

    void Print() const;
};

#endif
