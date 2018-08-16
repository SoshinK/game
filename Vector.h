#ifndef VECTOR_H
#define VECTOR_H
class Vector
  {
  public:
    Vector();
    Vector(const double x, const double y);
    Vector(const Vector & that);                       // unnecessary function
    ~Vector();
    
    Vector & operator = (const Vector & v);       // unnecessary
    double len();


    double X;
    double Y;
  };

Vector operator + (const Vector & v1, const Vector & v2);

Vector operator - (const Vector & v1, const Vector & v2);

Vector operator * (const Vector & that, const double & l);

Vector operator * (const double & l, const Vector & that);

double scalar(const Vector & a, const Vector & b);



#endif
