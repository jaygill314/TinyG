/* 
 * test_002_motion.h 
 *
 * Notes:
 *	  -	The character array should be derived from the filename (by convention)
 *	  - Comments are not allowed in the char array, but gcode comments are OK e.g. (g0 test)
 */
const char PROGMEM test_motion[] = "\
(MSG**** Squares and Circles Motion Test [v1] ****)\n\
g00g17g21g40g49g80g90\n\
f500\n\
g0x20\n\
y20\n\
x0\n\
y0\n\
g1x10\n\
y10\n\
x0\n\
y0\n\
g2x10y-10i10\n\
g0x0y0\n\
g3x10y-10i10\n\
g0x0y0\n\
g2x20y0i10\n\
g0x0y0\n\
g3x20y0i10\n\
g0x0y0\n\
g2x0y0i10\n\
g3x0y0i10\n\
g80\n\
m30";
