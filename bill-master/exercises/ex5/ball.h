#ifndef GRASS_H /* Dlaczego grass? */
#define GRASS_H

#include <cmath>
#include <memory>
#include "../../headers/billmaterialpoint.h"
#include "../../headers/billvector.h"



/* ********************************************************************** */



class ball : public bill::BillMaterialPoint {
 public:
  ball(bill::BillIntegrator algorithm, double k, double l,
       bill::vector position = bill::vector({0., 0., 0.}),
       bill::vector velocity = bill::vector({0., 0., 0.}),
       double mass = 1.0, bill::vector color = bill::vector({1.0, 0.0, 0.0}),
       double step = 0.2);
  virtual ~ball(){};

  virtual bill::vector Force();
  virtual void Draw(); // rysowanie punktu i linii



 protected:
  double g; // stała grawitacji
  double beta; // opór ośrodka
}; //end of class ball
#endif
