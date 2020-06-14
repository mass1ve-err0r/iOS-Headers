//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

#import <MediaPlaybackCore/MPCMediaRemoteMiddlewareModelObjectsProviding-Protocol.h>
#import <MediaPlaybackCore/MPMiddlewareAutomaticDependencyOperation-Protocol.h>

@class MPCFuture, MPCMediaRemoteMiddleware, MPCPlayerRequest, MPSectionedCollection, NSArray, NSError, NSIndexPath, NSMapTable, NSString;

@interface MPCMediaRemoteMiddlewareMetadataOperation : MPAsyncOperation <MPCMediaRemoteMiddlewareModelObjectsProviding, MPMiddlewareAutomaticDependencyOperation>
{
    CDUnknownBlockType _invalidationHandler;
    NSArray *_invalidationObservers;
    struct NSMapTable *_inputOperations;
    MPCMediaRemoteMiddleware *_middleware;
    MPCPlayerRequest *_playerRequest;
    MPCFuture *_playQueueIdentifiersFuture;
    MPCFuture *_playingIdentifierFuture;
    MPCFuture *_queueIdentifierFuture;
}

@property(retain, nonatomic) MPCFuture *queueIdentifierFuture; // @synthesize queueIdentifierFuture=_queueIdentifierFuture;
@property(retain, nonatomic) MPCFuture *playingIdentifierFuture; // @synthesize playingIdentifierFuture=_playingIdentifierFuture;
@property(retain, nonatomic) MPCFuture *playQueueIdentifiersFuture; // @synthesize playQueueIdentifiersFuture=_playQueueIdentifiersFuture;
@property(retain, nonatomic) MPCPlayerRequest *playerRequest; // @synthesize playerRequest=_playerRequest;
@property(retain, nonatomic) MPCMediaRemoteMiddleware *middleware; // @synthesize middleware=_middleware;
@property(retain, nonatomic) NSMapTable *inputOperations; // @synthesize inputOperations=_inputOperations;
@property(readonly, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void).cxx_destruct;
- (id)_itemGenericObjectPropertySetForContentItem:(id)arg1 propertySet:(id)arg2;
- (id)_genericObjectPropertySetForContentItem:(id)arg1 preferredRelationships:(id)arg2 propertySet:(id)arg3;
- (id)_sectionGenericObjectPropertySetForContentItem:(id)arg1 propertySet:(id)arg2;
- (struct _MSVSignedRange)rangeFromTracklistRange:(CDStruct_339ad95e)arg1;
@property(readonly, nonatomic) NSArray *outputProtocols;
@property(readonly, nonatomic) NSArray *inputsProtocols;
- (id)timeoutDescription;
- (void)execute;
- (void)_loadPlayingIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadItemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2;
@property(readonly, nonatomic) MPSectionedCollection *sourceContentItems;
@property(readonly, nonatomic) MPSectionedCollection *modelObjects;
@property(readonly, copy, nonatomic) NSIndexPath *playingIndexPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

