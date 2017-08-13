#include "Bullet.h"
#include <string>

using namespace cocos2d;

Bullet::Bullet() {}

Bullet::~Bullet() {}

//���ݺ���������������Ҫ�ĳ���frame�����й���
Bullet* Bullet::create(const std::string& filename, int t_hurt) {
  Bullet* pSprite = new Bullet();

  if (pSprite->initWithSpriteFrameName(filename)) {
    pSprite->autorelease();
    pSprite->initOptions();
    pSprite->setHurtness(t_hurt);
    return pSprite;
  }

  CC_SAFE_DELETE(pSprite);
  return nullptr;
}

void Bullet::initOptions() {
  // do things here like setTag(), setPosition(), any custom logic.
  //������Ҫ������������������ˣ�λ������Ӧ����tank������ȥ����
  this->setPhysicsBody(PhysicsBody::createBox(
      this->getContentSize(), PhysicsMaterial(1.0f, 0.0f, 0.001f)));

  this->getPhysicsBody()->setCategoryBitmask(2);
  this->getPhysicsBody()->setCategoryBitmask(2);
  this->getPhysicsBody()->setCollisionBitmask(2);
  this->getPhysicsBody()->setContactTestBitmask(2);
  this->getPhysicsBody()->setAngularVelocityLimit(3);
  this->getPhysicsBody()->setRotationEnable(true);
}

int Bullet::getHurtness() const { return this->m_hurt; }

void Bullet::setHurtness(const int t_hurt) { m_hurt = t_hurt; }
