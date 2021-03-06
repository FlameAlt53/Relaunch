#ifndef MAIN_H
#define MAIN_H

#define POWERTEXT_DS	"POWER - Poweroff"
#define POWERTEXT		"POWER - Reboot/[+held] Poweroff"

extern char titleName[32];

extern int screenMode;

extern bool appInited;

extern bool arm7SCFGLocked;
extern bool isRegularDS;

extern bool applaunch;

extern void setFontTop();
extern void setFontSub();

#endif //MAIN_H
