



#ifndef Vector2_HPP
#define Vector2_HPP

#include <cmath>

class Vec2 {
public :
   double x;
   double y;

   Vec2() : x(0.0),y(0.0) {}
   Vec2(double xval , double yval);
   
   void Set(double xval , double yval);
   Vec2& Normalize();
   
   Vec2& operator*=(double f);
   Vec2& operator+=(const Vec2& v);
   
   inline Vec2 operator-() const {return Vec2(-x,-y);}
   
///   double Magnitude();
   inline double MagnitudeSquared() {
      return x*x + y*y;
   }
   inline double Magnitude() {
      return sqrt(MagnitudeSquared());
   }
   inline Vec2 Right90() const {return Vec2(y,-x);}
   inline Vec2 Left90()  const {return Vec2(-y,x);}
};


inline Vec2 operator+(const Vec2& v1 , const Vec2& v2) {
   return Vec2(v1.x + v2.x , v1.y + v2.y);
}
inline Vec2 operator-(const Vec2& v1 , const Vec2& v2) {
   return Vec2(v1.x - v2.x , v1.y - v2.y);
}


inline Vec2 operator*(const Vec2& v , double f) {
   return Vec2(v.x*f , v.y*f);
}

///double DotProduct(const Vec2& v1 , const Vec2& v2);
inline double DotProduct(const Vec2& v1 , const Vec2& v2) {
   return v1.x*v2.x + v1.y*v2.y;
}

inline Vec2 VectorA(double arad , double l) {return Vec2(l*cos(arad),l*sin(arad));}

Vec2 ScalarProjection(Vec2 A , Vec2 B);



#endif // Vector2_HPP
