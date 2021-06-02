/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v1.3.0.12) *
 *******************************************************************/
#ifndef __wrappedxml2TYPES_H_
#define __wrappedxml2TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef int64_t (*iFp_t)(void*);
typedef void* (*pFv_t)(void);
typedef void (*vFpp_t)(void*, void*);
typedef void* (*pFpp_t)(void*, void*);
typedef void (*vFppp_t)(void*, void*, void*);
typedef int64_t (*iFppp_t)(void*, void*, void*);
typedef void* (*pFppp_t)(void*, void*, void*);
typedef void (*vFpppp_t)(void*, void*, void*, void*);
typedef int64_t (*iFpppp_t)(void*, void*, void*, void*);
typedef void* (*pFpppi_t)(void*, void*, void*, int64_t);
typedef void* (*pFpppp_t)(void*, void*, void*, void*);
typedef int64_t (*iFppppp_t)(void*, void*, void*, void*, void*);
typedef void* (*pFppppi_t)(void*, void*, void*, void*, int64_t);
typedef void (*vFpppppp_t)(void*, void*, void*, void*, void*, void*);
typedef int64_t (*iFpppppp_t)(void*, void*, void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(xmlSetExternalEntityLoader, vFp_t) \
	GO(xmlParseDocument, iFp_t) \
	GO(xmlGetExternalEntityLoader, pFv_t) \
	GO(xmlHashFree, vFpp_t) \
	GO(xmlHashCopy, pFpp_t) \
	GO(xmlHashScan, vFppp_t) \
	GO(xmlHashScanFull, vFppp_t) \
	GO(xmlSchemaSetParserStructuredErrors, vFppp_t) \
	GO(xmlSchemaSetValidStructuredErrors, vFppp_t) \
	GO(xmlHashRemoveEntry, iFppp_t) \
	GO(xmlXPathRegisterFunc, iFppp_t) \
	GO(xmlNewCharEncodingHandler, pFppp_t) \
	GO(xmlSchemaSetParserErrors, vFpppp_t) \
	GO(xmlSchemaSetValidErrors, vFpppp_t) \
	GO(xmlHashRemoveEntry2, iFpppp_t) \
	GO(xmlHashUpdateEntry, iFpppp_t) \
	GO(xmlRegisterInputCallbacks, iFpppp_t) \
	GO(xmlParserInputBufferCreateIO, pFpppi_t) \
	GO(xmlOutputBufferCreateIO, pFpppp_t) \
	GO(xmlHashRemoveEntry3, iFppppp_t) \
	GO(xmlHashUpdateEntry2, iFppppp_t) \
	GO(xmlSaveToIO, pFppppi_t) \
	GO(xmlHashScan3, vFpppppp_t) \
	GO(xmlHashScanFull3, vFpppppp_t) \
	GO(xmlHashUpdateEntry3, iFpppppp_t)

#endif // __wrappedxml2TYPES_H_
