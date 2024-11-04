#include "reservoir.h"

Reservoir::Reservoir()
{
    _name = "NONE";
    _type = "NONE";
    _width = 0;
    _length = 0;
    _maxDepth = 0;
}

Reservoir::Reservoir(string name) : Reservoir() {
    SetName(name);
}

Reservoir::Reservoir(string name, string type) : Reservoir(name) {
    SetType(type);
}

Reservoir::Reservoir(string name, string type, double width, double length, double maxDepth) : Reservoir(name, type) {
    SetWidth(width);
    SetLength(length);
    SetMaxDepth(maxDepth);
}

Reservoir::Reservoir(Reservoir& reservoir) {
    _name = reservoir._name;
    _type = reservoir._type;
    _width = reservoir._width;
    _length = reservoir._length;
    _maxDepth = reservoir._maxDepth;
}

void Reservoir::SetName(string name)
{
    _name = name;
}
void Reservoir::SetType(string type)
{
    _type = type;
}
void Reservoir::SetWidth(double width)
{
    _width = width;
}
void Reservoir::SetLength(double length)
{
    _length = length;
}
void Reservoir::SetMaxDepth(double maxDepth)
{
    _maxDepth = maxDepth;
}

inline string Reservoir::GetName() const
{
    return _name;
}
inline string Reservoir::GetType() const
{
    return _type;
}
inline double Reservoir::GetWidth() const
{
    return _width;
}
inline double Reservoir::GetLength() const
{
    return _length;
}
inline double Reservoir::GetMaxDepth() const
{
    return _maxDepth;
}

double Reservoir::SurfaceArea() const
{
    return _width * _length;
}

double Reservoir::Volume() const
{
    return _width * _length * _maxDepth;
}

void Reservoir::Print() const
{
    cout << "Name: " << _name << endl;
    cout << "Type: " << _type << endl;
    cout << "Width: " << _width << endl;
    cout << "Length: " << _length << endl;
    cout << "Max Depth: " << _maxDepth << endl;
    cout << "SurfaceArea: " << SurfaceArea() << endl;
    cout << "Volume: " << Volume() << endl;
}