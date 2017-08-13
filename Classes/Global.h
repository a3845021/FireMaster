#ifndef GLOBAL_H_
#define GLOBAL_H_

#include "Bullet.h"

USING_NS_CC;

class Global {
 public:
  Global();
  ~Global();
  static int turn;
  static std::list<Bullet*> bullets;
  static bool winSide;  // 0 ����ʤ�� 1 �Ƴ�ʤ
  static bool isGameover;

  //ȫ��������Ϸ����
  static int smallBullet;
  static int bigBullet;
  // ���µ�ʱ����������������
  static float pressv;
  static int windPower;
  // Tank types enum class , used to choose different type tank before the game
  // start.
  static const enum class TankType { none, blue, yellow };
};

#endif
