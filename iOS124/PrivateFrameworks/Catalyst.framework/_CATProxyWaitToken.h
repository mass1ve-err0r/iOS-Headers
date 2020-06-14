//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _CATProxyWaitToken : NSObject
{
    _Atomic _Bool mFinished;
    NSObject<OS_dispatch_group> *mGroup;
    _Bool _isExclusive;
    id _resourceProxy;
}

@property(readonly, nonatomic) id resourceProxy; // @synthesize resourceProxy=_resourceProxy;
@property(readonly, nonatomic) _Bool isExclusive; // @synthesize isExclusive=_isExclusive;
- (void).cxx_destruct;
- (void)invalidate;
- (void)cancel;
- (void)notifyWithResourceProxy:(id)arg1;
- (void)dealloc;
- (id)initWithExclusive:(_Bool)arg1 group:(id)arg2;

@end

