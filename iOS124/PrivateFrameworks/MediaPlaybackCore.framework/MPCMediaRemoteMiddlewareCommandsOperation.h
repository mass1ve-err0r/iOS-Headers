//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

#import <MediaPlaybackCore/MPMiddlewareOperation-Protocol.h>

@class MPCFuture, MPCMediaRemoteMiddleware, MPCPlayerRequest, NSArray, NSError, NSString;

@interface MPCMediaRemoteMiddlewareCommandsOperation : MPAsyncOperation <MPMiddlewareOperation>
{
    CDUnknownBlockType _invalidationHandler;
    NSArray *_invalidationObservers;
    MPCMediaRemoteMiddleware *_middleware;
    MPCPlayerRequest *_playerRequest;
    MPCFuture *_supportedCommandsFuture;
}

@property(retain, nonatomic) MPCFuture *supportedCommandsFuture; // @synthesize supportedCommandsFuture=_supportedCommandsFuture;
@property(retain, nonatomic) MPCPlayerRequest *playerRequest; // @synthesize playerRequest=_playerRequest;
@property(retain, nonatomic) MPCMediaRemoteMiddleware *middleware; // @synthesize middleware=_middleware;
@property(readonly, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void).cxx_destruct;
- (id)timeoutDescription;
- (void)execute;
- (id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

