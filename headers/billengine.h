#ifndef BILLENGINE_H
#define BILLENGINE_H

#include <iostream>
#include <cmath>
#include "billmaterialpoint.h"



/* ********************************************************************** */



namespace bill {

  class BillEngine {
  public:
    BillEngine();
    BillEngine(BillSetOfPoints& set);
    void step();



  private:
    BillSetOfPoints* set;
    unsigned int starttime;
    unsigned int now;
    double timestep;
  }; // end of class BillEngine

} // end of namespace bill
#endif
