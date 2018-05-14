#ifndef QMC5883L_H
#define QMC5883L_H
#ifndef VECTOR_STRUCT_H
#define VECTOR_STRUCT_H
struct Vector
{
  float XAxis;
  float YAxis;
  float ZAxis;
};
#endif

class QMC5883L {
public:
  void init();
  void reset();
  int  ready();
  void reconfig();
  int readHeading();
  void resetCalibration();
  void setSamplingRate( int rate );
  void setRange( int range );
  void setOversampling( int ovl );
  Vector readRaw(void);
  Vector readNormalize(void);
  void setOffset(int xo, int yo);
  
private:
  int16_t xhigh, xlow;
  int16_t yhigh, ylow;
  uint8_t addr;
  uint8_t mode;
  uint8_t rate;
  uint8_t range;
  uint8_t oversampling;
  
  float mgPerDigit;
  Vector v;
  int xOffset, yOffset;
};

#endif
