#ifndef __CONFIGURATOR_H__
#define __CONFIGURATOR_H__

#include <map>
#include <string>

#include "detector.h"

namespace floordetection {
  class Configurator {
    public:
      explicit Configurator(Detector &d);

      void show();

      void create_variables();

      void create_trackbars();

      void read_variables();

      struct Variable {
        int value, max;
      };

    private:
      Detector &detector;
      std::map<std::string, Variable> vars;

  };
}

#endif
