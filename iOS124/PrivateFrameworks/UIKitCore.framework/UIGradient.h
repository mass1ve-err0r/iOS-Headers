//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIGradient : NSObject
{
    CDStruct_d83abbfb *_values;
    double _height;
    struct CGShading *_shader;
}

- (void)dealloc;
- (void)fillRect:(struct CGRect)arg1;
- (void)fillRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)initVerticalWithValues:(CDStruct_d83abbfb *)arg1;

@end

