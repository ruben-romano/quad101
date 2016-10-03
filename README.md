# quad101
Very early stage of our planned quadcopter project, which is to be realized by using
the Arduino 101 with its builtin Intel's Curie Module as the main flight controller.

Right now, we are working on the implementation of positional control with a PID controller and different sensor sources
<ul>
<li>Onboard gyro and accelerometer (done)</li>
<li>3axis-magnetometer (done)</li>
<li>Ultrasonic Rangefinder (done)</li>
<li>Pressure sensor (done)</li>
<li>GPS Module</li>
</ul>

We did succed in building the first layer positional controller that stabilizes the pitch and roll rotation of the quad. Next up is a height controller for hovering and takeoff tests.

The main goal is the process of learning and not really the final product. If we can however accomplish to build
a good working prototype, we will consider making a usable quadcopter from it.
