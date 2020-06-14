//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XCTKVOExpectation;
@protocol OS_dispatch_queue;

@interface _XCKVOExpectationImplementation : NSObject
{
    XCTKVOExpectation *_expectation;
    id _observedObject;
    NSString *_keyPath;
    id _expectedValue;
    unsigned long long _options;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _hasCleanedUp;
}

@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) id expectedValue; // @synthesize expectedValue=_expectedValue;
@property(readonly, copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly) id observedObject; // @synthesize observedObject=_observedObject;
- (void).cxx_destruct;
- (void)cleanup;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(copy) CDUnknownBlockType handler;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2 expectedValue:(id)arg3 expectation:(id)arg4 options:(unsigned long long)arg5;
- (void)dealloc;

@end

