typedef enum {
    INT,
    FLOAT,
    STRING
} Type;

typedef struct {
    Type type;
    union {
        int intValue;
        float floatValue;
        char* stringValue;
    };
} TaggedUnion;
