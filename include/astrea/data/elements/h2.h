/**
 * \file astrea/data/elements/h2.h
 * Hydrogen (1-ion) ion.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include "./element.h"


namespace astrea {


/**
 * Hydrogen (1-ion) ion.
 */
class H2 : public Element {
 public:
  const IElement& resource() override;

 private:
  const IElement resource_ =
    #include "../../resources/elements/h2.yaml"
  ;
};


inline const IElement& H2::resource() {
  return resource_;
}


}