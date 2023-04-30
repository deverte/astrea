/**
 * \file astrea/data/elements/h1.h
 * Hydrogen (electrically neutral) atom.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include "./element.h"


namespace astrea {


/**
 * Hydrogen (electrically neutral) atom.
 */
class H1 : public Element {
 public:
  const IElement& resource() override;

 private:
  IElement resource_ =
    #include "../../resources/elements/h1.yaml"
  ;
};


const IElement& H1::resource() {
  return resource_;
}


}