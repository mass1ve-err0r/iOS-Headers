//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TKKeyPathObserver : NSObject
{
    CDUnknownBlockType _block;
    NSMutableArray *_observations;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserving;
- (void)observe:(id)arg1 keyPath:(id)arg2;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

