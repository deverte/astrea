/**
 * \file lss/data/elements/he2.h
 * Helium (1-ion) ion.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include "./element.h"


namespace lss {


/**
 * Helium (1-ion) ion.
 */
class He2 : public Element {
 public:
  const IElement& resource() override;

 private:
  IElement resource_ =
    #include "../../resources/elements/he2.yaml"
  ;
};


const IElement& He2::resource() {
  return resource_;
}


}