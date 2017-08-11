#ifndef YELLOWTANK_H_
#define YELLOWTANK_H_
#include "BaseTank.h"

class YellowTank : public BaseTank
{
public:
    YellowTank();
    ~YellowTank();
    static YellowTank* create();

    // ��ʼ������������������Ϣ
    void initOptions();
    virtual void setDefaultProperty();

    virtual int getBulletHurt() const;
    virtual Vec2 getBulletVelocity() const;
    virtual Animate* getAttackAnimate() const;
    virtual Animate* getAfterAttackAnimate() const;

private:
    // 不同的坦克可以使用不同的子弹图片
    const std::string default_bullet_name = "bullet1.png";
};

#endif