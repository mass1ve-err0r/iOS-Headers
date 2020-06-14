//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/AVVideoCompositing-Protocol.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface NUVideoCompositor : NSObject <AVVideoCompositing>
{
    _Bool _shouldCancelAllRequests;
    NSObject<OS_dispatch_queue> *_renderingQueue;
}

- (void).cxx_destruct;
- (void)failVideoCompositionRequest:(id)arg1 error:(id)arg2;
- (id)videoFramesFromRequest:(id)arg1;
- (void)fulfillVideoCompositionRequest:(id)arg1;
- (void)cancelAllPendingVideoCompositionRequests;
@property(readonly, nonatomic) _Bool supportsWideColorSourceFrames;
- (void)renderContextChanged:(id)arg1;
- (void)startVideoCompositionRequest:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property(readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

