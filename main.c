#include "image.h"

int main(void) {
    
    image img;
    img.NAME = "image.png";

    FILE* file;

    //HAVE to open it in binary mode xd
    //file is open for reading
    file = fopen(img.NAME, "rb");

    load_signature(file, &img.SIGNATURE);

    print_signature(img.SIGNATURE);

    fclose(file);

    return 0;


}