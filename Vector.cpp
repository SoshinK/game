#include "Vector.h"
#include  <cmath>

Vector::Vector():
  X(0),
  Y(0)
  {}

Vector::Vector(const double x, const double y):
  X(x),
  Y(y)
  {}

Vector::Vector(const Vector & that):
  X(that.X),
  Y(that.Y)
  {}

Vector::~Vector() {}

double Vector::len(){return sqrt(X * X + Y * Y);}

Vector & Vector::operator = (const Vector & src)
  {
  X = src.X;
  Y = src.Y;
  return *this;
  } 

Vector operator + (const Vector & v1, const Vector & v2)
  {
  Vector res;
  res.X = v1.X + v2.X;
  res.Y = v1.Y + v2.Y;
  return res;
  }

Vector operator - (const Vector & v1, const Vector & v2)
  {
  Vector res;
  res.X = v1.X - v2.X;
  res.Y = v1.Y - v2.Y;
  return res;
  }
Vector operator * (const Vector & that, const double & l)
  {
  Vector res;
  res.X = that.X * l;
  res.Y = that.Y * l;
  return res;
  }

Vector operator * (const double & l, const Vector & that)
  {
  Vector res;
  res = that * l;
  return res;
  }


double scalar(const Vector & a, const Vector & b)
  {
  double res = a.X * b.X + a.Y * b.Y;
  return res;
  }

