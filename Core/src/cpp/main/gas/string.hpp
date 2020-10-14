#ifndef GAS_STRING_HPP
#define GAS_STRING_HPP

#include "types.hpp"

namespace gas{
    class Utf8String{
    private:
        char_p mBuffer;
        int    mLen;
    public:
        Utf8String(char_cp source);
        Utf8String(const Utf8String& source);
        ~Utf8String();        
        operator char_p()const;
        Utf8String& operator=(const Utf8String& source);
        Utf8String operator+(const Utf8String& right);
        // Utf8String oeprator+=(const Utf8String& str);
        // const Utf8String& operator=(const Utf8String& source)const;
        // copy
        // concatinations
        // manipulations
    };
}

#endif 
