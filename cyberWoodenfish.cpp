// Reference https://learn.microsoft.com/en-us/previous-versions/dd743680(v=vs.85)
#include <stdio.h>
#include <Windows.h>
#include <Mmsystem.h>
#pragma comment(lib, "Winmm")
// Do not run a cmd window when program startup
#pragma comment(linker,"/subsystem:\"Windows\" /entry:\"mainCRTStartup\"")

int main()
{
    PlaySound(TEXT("woodenfish.wav"), NULL, SND_FILENAME);
    // printf("功德+1\n");
    return 0;
}