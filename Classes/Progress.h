#ifndef __Progress__
#define __Progress__
#include "cocos2d.h"
USING_NS_CC;

class Progress : public Sprite {
 public:
  bool init(const char* background, const char* fillname);

  /*
  the inputs are SpriteFrame Names.
  Ĭ�ϴ�����е㿪ʼ
  */
  static Progress* create(const char* background, const char* fill);

  void setFill(ProgressTimer* fill) { _fill = fill; }

  void setMidpoint(Point midPoint) { _fill->setMidpoint(midPoint); }

  void setProgress(float percentage) { _fill->setPercentage(percentage); }

  float getPercentage() { return _fill->getPercentage(); }

 private:
  ProgressTimer* _fill;
};
#endif