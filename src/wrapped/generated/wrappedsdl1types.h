/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v1.3.0.12) *
 *******************************************************************/
#ifndef __wrappedsdl1TYPES_H_
#define __wrappedsdl1TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef int64_t (*iFp_t)(void*);
typedef uint64_t (*uFp_t)(void*);
typedef uint64_t (*UFp_t)(void*);
typedef void* (*pFv_t)(void);
typedef void* (*pFp_t)(void*);
typedef int64_t (*iFup_t)(uint64_t, void*);
typedef int64_t (*iFpp_t)(void*, void*);
typedef uint64_t (*uFpW_t)(void*, uint16_t);
typedef uint64_t (*uFpu_t)(void*, uint64_t);
typedef uint64_t (*uFpU_t)(void*, uint64_t);
typedef void* (*pFpi_t)(void*, int64_t);
typedef void* (*pFpp_t)(void*, void*);
typedef int64_t (*iFppi_t)(void*, void*, int64_t);
typedef void* (*pFupp_t)(uint64_t, void*, void*);
typedef void* (*pFpippp_t)(void*, int64_t, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(SDL_KillThread, vFp_t) \
	GO(SDL_SetEventFilter, vFp_t) \
	GO(SDL_UnloadObject, vFp_t) \
	GO(SDL_GetWMInfo, iFp_t) \
	GO(SDL_RemoveTimer, iFp_t) \
	GO(SDL_ReadBE16, uFp_t) \
	GO(SDL_ReadBE32, uFp_t) \
	GO(SDL_ReadLE16, uFp_t) \
	GO(SDL_ReadLE32, uFp_t) \
	GO(SDL_ReadBE64, UFp_t) \
	GO(SDL_ReadLE64, UFp_t) \
	GO(SDL_GetEventFilter, pFv_t) \
	GO(SDL_GL_GetProcAddress, pFp_t) \
	GO(SDL_LoadObject, pFp_t) \
	GO(SDL_SetTimer, iFup_t) \
	GO(SDL_OpenAudio, iFpp_t) \
	GO(SDL_WriteBE16, uFpW_t) \
	GO(SDL_WriteLE16, uFpW_t) \
	GO(SDL_WriteBE32, uFpu_t) \
	GO(SDL_WriteLE32, uFpu_t) \
	GO(SDL_WriteBE64, uFpU_t) \
	GO(SDL_WriteLE64, uFpU_t) \
	GO(SDL_LoadBMP_RW, pFpi_t) \
	GO(SDL_RWFromConstMem, pFpi_t) \
	GO(SDL_RWFromFP, pFpi_t) \
	GO(SDL_RWFromMem, pFpi_t) \
	GO(SDL_CreateThread, pFpp_t) \
	GO(SDL_LoadFunction, pFpp_t) \
	GO(SDL_RWFromFile, pFpp_t) \
	GO(SDL_SaveBMP_RW, iFppi_t) \
	GO(SDL_AddTimer, pFupp_t) \
	GO(SDL_LoadWAV_RW, pFpippp_t)

#endif // __wrappedsdl1TYPES_H_
