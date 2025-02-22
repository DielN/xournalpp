#include "SizeTAttribute.h"

#include <glib.h>

SizeTAttribute::SizeTAttribute(const char* name, size_t value): XMLAttribute(name) { this->value = value; }

SizeTAttribute::~SizeTAttribute() = default;

void SizeTAttribute::writeOut(OutputStream* out) {
    char* str = g_strdup_printf("%zu", value);
    out->write(str);
    g_free(str);
}
