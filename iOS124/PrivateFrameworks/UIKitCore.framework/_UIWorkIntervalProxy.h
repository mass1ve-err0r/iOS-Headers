//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIWorkIntervalProxy : NSObject
{
    struct work_interval_instance *_instance;
    _Bool _complex;
    _Bool _started;
    double _targetTimestamp;
    double _frameDuration;
}

- (void)dealloc;
- (id)init;

@end

