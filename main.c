#ifndef WIN32_CONSOLE_MODE
#define WIN32_CONSOLE_MODE
#endif
#ifndef WINVER
#define WINVER 0x0500
#elif WINVER < 0x0500
#undef WINVER
#define WINVER 0x0500
#endif
#include <windows.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	(void)printf("WINVER is %lx\n", (unsigned long)WINVER);
	(void)printf("_WIN32_WINNT is %lx\n", (unsigned long)_WIN32_WINNT);
	return 0;
}
