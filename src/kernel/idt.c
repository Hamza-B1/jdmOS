#include <stdint.h>

typedef struct {
    uint16_t offset_1;
    uint16_t selector;
    uint8_t ist; // bits 0-2 holds interrupt stack table offset, rest is 0
    uint8_t type_attr;
    uint16_t offset_2;
    uint32_t offset_3;
    uint32_t reserved;

} __attributed__((packed)) idt_gate_t;

