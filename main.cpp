#include <iostream>

int main() {

    const char *langStrings [3] =
    {
        "English",
        "French",
        "German"
    };

    char eLangAr[20] = "English";
    char fLangAr[20] = "French";
    char gLangAr[20] = "German";

    char* eLangPtr = eLangAr;
    char* fLangPtr = fLangAr;
    char* gLangPtr = gLangAr;


    char **langStrings2 [3]=
            {
                    &eLangPtr,
                    &fLangPtr,
                    &gLangPtr
            };

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
