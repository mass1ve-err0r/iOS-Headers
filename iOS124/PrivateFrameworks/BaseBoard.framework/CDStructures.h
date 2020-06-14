//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct mig_subsystem {
    CDUnknownFunctionPointerType _field1;
    int _field2;
    int _field3;
    unsigned int _field4;
    unsigned long long _field5;
    struct routine_descriptor _field6[1];
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct routine_descriptor {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct *_field5;
    unsigned int _field6;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    id _field2;
    id _field3;
    CDUnknownBlockType _field4;
} CDStruct_7eb2cf46;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    int _field6;
} CDStruct_c91b0553;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

