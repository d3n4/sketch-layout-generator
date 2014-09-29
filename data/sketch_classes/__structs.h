#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BCPixel {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct FBBezierCurveData {
    struct CGPoint endPoint1;
    struct CGPoint controlPoint1;
    struct CGPoint controlPoint2;
    struct CGPoint endPoint2;
    char isStraightLine;
    char looksLikeStraightLine;
    double length;
    struct CGRect bounds;
    char isPoint;
    struct CGRect boundingRect;
};

struct FBBezierCurveLocation {
    double _field1;
    double _field2;
};

struct FBRange {
    double minimum;
    double maximum;
};

struct MSModelObject {
    Class _field1;
};

struct MSPresetIteratorStruct {
    long long _field1;
    long long _field2;
    long long _field3;
};

struct MSShapeClickInfo {
    long long _field1;
    long long _field2;
    long long _field3;
};

struct _CHTransformStruct {
    double _field1;
    char _field2;
    char _field3;
    char _field4;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
} CDStruct_f4b747e6;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    char *_field1;
    unsigned int _field2;
    char *_field3;
    char *_field4;
} CDStruct_5b5d1a5d;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
} CDStruct_8727d297;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

#pragma mark -