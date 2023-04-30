/**
 * \file astrea/data/elements/o1_mashonkina.h
 * Oxygen (electrically neutral) atom using Mashonkina data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include "./element.h"


namespace astrea {


/**
 * Oxygen (electrically neutral) atom using Mashonkina data (from private
 * communication).
 */
class O1Mashonkina : public Element {
 public:
  const IElement& resource() override;

 private:
  IElement resource_ =
    #include "../../resources/elements/o1_mashonkina.yaml"
  ;
};


const IElement& O1Mashonkina::resource() {
  return resource_;
}


}