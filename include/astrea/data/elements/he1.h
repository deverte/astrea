/**
 * \file astrea/data/elements/he1.h
 * Helium (electrically neutral) atom.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include "./element.h"


namespace astrea {


/**
 * Helium (electrically neutral) atom.
 */
class He1 : public Element {
 public:
  const IElement& resource() override;

 private:
  IElement resource_ =
    #include "../../resources/elements/he1.yaml"
  ;
};


const IElement& He1::resource() {
  return resource_;
}


}