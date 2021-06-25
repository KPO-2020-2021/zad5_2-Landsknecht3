#ifndef BLOCK_HH
#define BLOCK_HH

#include "Wektor3D.hh"
#include "Macierz3x3.hh"
#include <fstream>
#include <vector>
#include <memory>

class BLOCK
{
 protected:
 std::shared_ptr<Wektor3D> dim;
 std::vector<Wektor3D> vertex;
 Wektor3D center;
 std::string name;
 public:

  Wektor3D &operator[](int index);
  Wektor3D operator[](int index)const;

 void set_center(Wektor3D center);
 void set_name(std::string name);
 Wektor3D get_center() const;
 std::string get_name() const;

 void move(Wektor3D przes);
 void translacja(Macierz3x3 obr);

 void zapisz();

};





#endif
