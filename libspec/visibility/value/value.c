#include "value.h"
#include "data.h"
#include "attributes.h"

EXPORT int get_value() {
    return g_value;
}

EXPORT void set_value(int v) {
    g_value = v;
}
