//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPMiddleware-Protocol.h>

@class MPModelResponse, NSArray, NSString;

@interface _MPModelShimRequestMiddleware : NSObject <MPMiddleware>
{
    NSArray *_invalidationObservers;
    MPModelResponse *_modelResponse;
}

@property(retain, nonatomic) MPModelResponse *modelResponse; // @synthesize modelResponse=_modelResponse;
@property(retain, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
- (void).cxx_destruct;
- (id)operationsForRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

