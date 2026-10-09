#include <sys/stat.h> //para mkdir();

void __createfiles__(void) {
mkdir("/system", 0755);
mkdir("/sys", 0755);
mkdir("/cfg", 0755);
mkdir("/storage", 0755);
mkdir("/dev", 0755);
}
