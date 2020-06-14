//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFPendingPromise, SXLayoutOptions;
@protocol SXComponent;

@interface SXPendingLayoutInvalidation : NSObject
{
    id <SXComponent> _component;
    NFPendingPromise *_pendingPromise;
    SXLayoutOptions *_layoutOptions;
    struct CGSize _suggestedSize;
}

@property(readonly, nonatomic) SXLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(readonly, nonatomic) NFPendingPromise *pendingPromise; // @synthesize pendingPromise=_pendingPromise;
@property(readonly, nonatomic) struct CGSize suggestedSize; // @synthesize suggestedSize=_suggestedSize;
@property(readonly, nonatomic) id <SXComponent> component; // @synthesize component=_component;
- (void).cxx_destruct;
- (id)initWithComponent:(id)arg1 suggestedSize:(struct CGSize)arg2 pendingPromise:(id)arg3 layoutOptions:(id)arg4;

@end

