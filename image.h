#include <stdio.h>
#define HEADERSIZE 8

typedef unsigned char byte;

typedef struct {
    byte data[8];
} png_signature;

int load_signature(FILE*, png_signature*);

int print_signature(const png_signature);

typedef struct {
    unsigned int LENGTH;
    char CHTYPE[4];
    byte* DATA;
    byte CRC[4];
} chunk;

typedef struct {
    unsigned int WIDTH;
    unsigned int LENGTH;
    byte BIT_DEPTH;
    byte COLOR_TYPE;
    byte COMPRESSION_METHOD;
    byte FILTER_METHOD;
    byte INTERLACE_METHOD;
} header_chunk;

typedef struct {
    // TODO
    int placeholder;
} end_chunk;

typedef struct {
    char* NAME;
    png_signature SIGNATURE;
    header_chunk HEADERCHUNK;
    size_t AMTOFCHUNKS;
    chunk* CHUNKARRAY;
    end_chunk ENDCHUNK;
} image;