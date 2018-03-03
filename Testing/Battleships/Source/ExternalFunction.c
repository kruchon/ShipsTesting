
#include <math.h>
#include <math.h>
#include <time.h>

#include <scttypes.h>

SDL_Integer getDistance(SDL_Integer xps,SDL_Integer yps,
						SDL_Integer xpf,SDL_Integer ypf)
{
	return (SDL_Integer)floor(sqrt(pow((xpf - xps),2) + pow((ypf - yps),2)));
}
#include <math.h>
#include <math.h>

#include <windows.h>
#include <scttypes.h>
#include "ctypes.h"


void DbgPrint2(SDL_Integer str)
{
	char str2[12];
	sprintf(str2, "%d _ ", str);
	printf(str2);
}


//
// Functions
//
void DbgPrint(SDL_Charstring msg) //(SDL_Integer str)
/*++

Abstract:
    Output debug message

Parameters:
    msg [in] - message string

Returns:
    none
--*/
{
	int messageSize;
	char *message;

	OutputDebugStringA("DbgPrint: ");
    
	message = z_ctypes_32_cstring2cstar(msg);
	if(message == NULL)
	{	
		OutputDebugStringA("Error allocating 'message'");
		return;
	}
	else
	{
		OutputDebugStringA(message);
		printf(message);
		messageSize = strlen(message);
		XFREE(&message, messageSize);
	}
	
	OutputDebugStringA("\n");
}


SDL_Integer getRand4()
{
	srand((unsigned)time(NULL));
	return (SDL_Integer)rand()%4;
}

SDL_Integer sdl_sqrt(SDL_Integer x)
{
	return (SDL_Integer)floor(sqrt(x));
}

SDL_Integer getHeading(void)
{
	return (SDL_Integer)(rand()%8);
}
