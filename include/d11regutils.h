#ifndef D11REGUTILS_H_
#define D11REGUTILS_H_

#define wreg32(r, v)    (*(volatile uint32*)(r) = (uint32)(v))
#define rreg32(r)       (*(volatile uint32*)(r))
#define wreg16(r, v)    (*(volatile uint16*)(r) = (uint16)(v))
#define rreg16(r)       (*(volatile uint16*)(r))
#define wreg8(r, v)     (*(volatile uint8*)(r) = (uint8)(v))
#define rreg8(r)        (*(volatile uint8*)(r))

#define BCM_REFERENCE(data) ((void)(data))

#define W_REG(osh, r, v) do { \
    BCM_REFERENCE(osh); \
    switch (sizeof(*(r))) { \
    case sizeof(uint8): wreg8((void *)(r), (v)); break; \
    case sizeof(uint16):    wreg16((void *)(r), (v)); break; \
    case sizeof(uint32):    wreg32((void *)(r), (v)); break; \
    } \
} while (0)

#define R_REG(osh, r) ({ \
    __typeof(*(r)) __osl_v; \
    BCM_REFERENCE(osh); \
    switch (sizeof(*(r))) { \
    case sizeof(uint8): __osl_v = rreg8((void *)(r)); break; \
    case sizeof(uint16):    __osl_v = rreg16((void *)(r)); break; \
    case sizeof(uint32):    __osl_v = rreg32((void *)(r)); break; \
    } \
    __osl_v; \
})

#endif
