//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RPHIDTouchEvent : NSObject
{
    int _finger;
    int _phase;
    double _timestampSeconds;
    struct CGPoint _location;
}

@property(nonatomic) double timestampSeconds; // @synthesize timestampSeconds=_timestampSeconds;
@property(nonatomic) int phase; // @synthesize phase=_phase;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) int finger; // @synthesize finger=_finger;

@end

