//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Named Structures

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

struct FKSession {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    unsigned int _field9;
    char _field10[128];
    struct vImage_Buffer _field11;
    struct vImage_Buffer _field12;
    struct lineseg *_field13;
    int _field14;
    int _field15;
    int _field16;
    struct concomp *_field17;
    int _field18;
    int _field19;
    int _field20;
    int _field21;
    struct sequence *_field22;
    int _field23;
    int _field24;
    int _field25;
    int _field26;
};

struct concomp;

struct lineseg;

struct sequence;

struct vImage_Buffer {
    void *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    int minScale;
    int maxScale;
} CDStruct_74dcf1ab;

#pragma mark Typedef'd Unions

typedef union {
    int seqInd;
    int ccInd;
} CDUnion_a5814135;

