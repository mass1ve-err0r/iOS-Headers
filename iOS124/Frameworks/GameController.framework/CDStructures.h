//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct GCQuaternion {
    double x;
    double y;
    double z;
    double w;
};

struct IOHIDEventData {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned char _field4;
    unsigned char _field5[3];
};

struct __IOHIDEvent {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned int _field5;
    char *_field6;
    void *_field7;
    void *_field8;
    struct __CFArray *_field9;
    struct __IOHIDEvent *_field10;
    long long _field11;
    long long _field12;
    struct IOHIDEventData _field13[0];
};

#pragma mark Typedef'd Structures

typedef struct {
    float _field1[4];
} CDStruct_212a8bf9;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
    double _field3;
} CDStruct_39925896;

typedef struct {
    double pitch;
    double yaw;
    double roll;
} CDStruct_27cd59c8;

typedef struct {
    double x;
    double y;
    double z;
} CDStruct_31142d93;

