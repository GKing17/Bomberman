#include "BonusMap.hpp"

namespace BonusMap
{
  void HeartUp::initialize(void)
  {
    this->texture_ = gdl::Image::load("Textures/heart.png");
  }

  void HeartUp::initialize(float const & x, float const & y, float const & z)
  {
    this->pos_.setPos(x, y, z);
  }

  void HeartUp::update(gdl::GameClock const & gameClock, gdl::Input & input)
  {
    (void) gameClock;
    (void) input;
  }

  void HeartUp::draw(void)
  {
    texture_.bind();
    glPushMatrix();
    glTranslatef(this->pos_.getX(), this->pos_.getY(), this->pos_.getZ());

    glBegin(GL_QUADS);

    glTexCoord2d(0, 0); glVertex3f(-DEMI_UP, DEMI_UP, 0);
    glTexCoord2d(0, 1); glVertex3f(-DEMI_UP, -DEMI_UP, DEMI_UP);
    glTexCoord2d(1, 1); glVertex3f(DEMI_UP, -DEMI_UP, DEMI_UP);
    glTexCoord2d(1, 0); glVertex3f(DEMI_UP, DEMI_UP, 0);

    glTexCoord2d(0, 0); glVertex3f(-DEMI_UP, DEMI_UP, -BORDER_UP);
    glTexCoord2d(0, 1); glVertex3f(-DEMI_UP, -DEMI_UP, BORDER_UP);
    glTexCoord2d(1, 1); glVertex3f(-DEMI_UP, -DEMI_UP, DEMI_UP);
    glTexCoord2d(1, 0); glVertex3f(-DEMI_UP, DEMI_UP, 0);

    glTexCoord2d(0, 0); glVertex3f(DEMI_UP, DEMI_UP, -BORDER_UP);
    glTexCoord2d(0, 1); glVertex3f(DEMI_UP, -DEMI_UP, BORDER_UP);
    glTexCoord2d(1, 1); glVertex3f(-DEMI_UP, -DEMI_UP, BORDER_UP);
    glTexCoord2d(1, 0); glVertex3f(-DEMI_UP, DEMI_UP, -BORDER_UP);

    glTexCoord2d(0, 0); glVertex3f(DEMI_UP, DEMI_UP, 0);
    glTexCoord2d(0, 1); glVertex3f(DEMI_UP, -DEMI_UP, DEMI_UP);
    glTexCoord2d(1, 1); glVertex3f(DEMI_UP, -DEMI_UP, BORDER_UP);
    glTexCoord2d(1, 0); glVertex3f(DEMI_UP, DEMI_UP, -BORDER_UP);

    glTexCoord2d(0, 0); glVertex3f(-DEMI_UP, DEMI_UP, 0);
    glTexCoord2d(0, 1); glVertex3f(-DEMI_UP, DEMI_UP, -BORDER_UP);
    glTexCoord2d(0, 1); glVertex3f(DEMI_UP, DEMI_UP, -BORDER_UP);
    glTexCoord2d(0, 0); glVertex3f(DEMI_UP, DEMI_UP, 0);

    glEnd();
    glPopMatrix();
  }
}
