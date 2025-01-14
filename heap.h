#include <stdint.h>
#include <stddef.h>
#include <string>
//proj
#include "hashtable.h"
#include "zset.h"

struct HeapItem {
    uint64_t val = 0;
    size_t *ref = NULL;
};

// the structure for the key
struct Entry {
    struct HNode node;
    std::string key;
    std::string val;
    uint32_t type = 0;
    ZSet *zset = NULL;
    // for TTLs
    size_t heap_idx = -1;
};

void heap_update(HeapItem *a, size_t pos, size_t len);