//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBKStoreURLBagContext;

__attribute__((visibility("hidden")))
@interface SBKRequestHandler : NSObject
{
    SBKStoreURLBagContext *_bagContext;
}

@property(readonly, nonatomic) SBKStoreURLBagContext *bagContext; // @synthesize bagContext=_bagContext;
- (void).cxx_destruct;
- (void)cancel;
- (void)timeout;
- (id)initWithBagContext:(id)arg1;

@end

