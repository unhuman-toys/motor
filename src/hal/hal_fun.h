#include <cstddef>

namespace hal {

    void atomic_memcpy(void *dest, const void *src, size_t n);
    float fsat(float value, float limit);

}