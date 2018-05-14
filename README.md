This QMC5883L.cpp and QMC5883L.h are a bit modified so they can be used for jarzebski's code for a tilt compensated compass (https://github.com/jarzebski/Arduino-HMC5883L/blob/master/HMC5883L_compensation_MPU6050/HMC5883L_compensation_MPU6050.ino) with a chinese QMC5883L (as found on break-out board GY-271).

In the mentioned above .ino comment the lines for initializing the HMC5883L, except the compass.setOffset, and replace them by

```
compass.init();
```

Put the values for offX and offY you've found with HMC5883L_calibrate.ino in the line to set the x- and y-offset. For instance:
```
compass.setOffset(-10, -850);
```
