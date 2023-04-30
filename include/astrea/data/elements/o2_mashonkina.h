/**
 * \file astrea/data/elements/o2_mashonkina.h
 * Oxygen (1-ion) ion using Mashonkina data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include "./element.h"


namespace astrea {


/**
 * Oxygen (1-ion) ion using Mashonkina data (from private communication).
 */
class O2Mashonkina : public Element {
 public:
  const IElement& resource() override;

 private:
  IElement resource_ =
    #include "../../resources/elements/o2_mashonkina.yaml"
  ;
};


const IElement& O2Mashonkina::resource() {
  return resource_;
}


}