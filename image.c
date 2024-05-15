#include "image.h"

int load_signature(FILE* file_path, png_signature* sgn) 
{
    //return -1 in case of failure, otherwise 0
    //number of elements to read on a single function call

    const size_t nelem = 1;

    for (int i = 0; i < HEADERSIZE; i++) 
    {
        fread(sgn->data+i, sizeof(byte), 1, file_path);
    }
    return 0;
}

int print_signature(const png_signature sgn) 
{
    for (int i = 0; i < HEADERSIZE; i++) 
    {
        if (printf("%d ", sgn.data[i]) < 0) return -1;
    }

    return 0;
}