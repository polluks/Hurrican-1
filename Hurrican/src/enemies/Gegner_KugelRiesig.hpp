#ifndef _GEGNER_KUGELRIESIG_HPP_
#define _GEGNER_KUGELRIESIG_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerKugelRiesig : public GegnerClass {
  public:
    GegnerKugelRiesig(int Wert1,
                      int Wert2,  // Konstruktor
                      bool Light);
    void GegnerExplode() override;  // Gegner explodiert
    void DoKI() override;           // Gegner individuell mit seiner eigenen kleinen KI bewegen
};

#endif
