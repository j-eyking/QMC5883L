These are a bit modified versions of dthain's QMC5883L.cpp and QMC5883L.h so they can be interchanged with jarzebski's HMC5883L.cpp and HMC5883L.h. This allows the use of a GY-271 breakout board (and a MPU6500/6050) to get the tilt compensated compass working (https://github.com/jarzebski/Arduino-HMC5883L/blob/master/HMC5883L_compensation_MPU6050/HMC5883L_compensation_MPU6050.ino).

In the mentioned above .ino, change
```
#include <HMC5883L.h>
HMC5883L compass;
```
to
```
#include <QMC5883L.h>
QMC5883L compass;
```
comment the lines for initializing the HMC5883L except the compass.setOffset, and replace them by
```
compass.init();
```
Put the values for offX and offY you've found with HMC5883L_calibrate.ino in the line to set the x- and y-offset, like:
```
compass.setOffset(-10, -850);
```
