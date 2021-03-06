#ifndef _TRIGGER_PARTIKELSPAWNER_HPP_
#define _TRIGGER_PARTIKELSPAWNER_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerPartikelSpawner : public GegnerClass {
  private:
    float Aussetzer;

  public:
    GegnerPartikelSpawner(int Wert1,
                          int Wert2,  // Konstruktor
                          bool Light);
    void GegnerExplode();  // Gegner explodiert
    void DoKI();           // Gegner individuell mit seiner
    // eigenen kleinen KI bewegen
};

#endif
