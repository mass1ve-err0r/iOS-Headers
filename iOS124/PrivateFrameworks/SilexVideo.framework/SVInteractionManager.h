//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVInteractionManager-Protocol.h>
#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class NSMapTable, NSMutableSet, NSString;

@interface SVInteractionManager : NSObject <SVInteractionManager, SVVideoTransitionObserver>
{
    NSMutableSet *_interactions;
    NSMapTable *_registeredHandlers;
    NSMapTable *_registeredObservers;
    NSMapTable *_interactionHandlers;
    NSMapTable *_interactionHandlerFactories;
    NSMapTable *_interactionObservers;
    NSMapTable *_interactionObserverFactories;
}

@property(readonly, nonatomic) NSMapTable *interactionObserverFactories; // @synthesize interactionObserverFactories=_interactionObserverFactories;
@property(readonly, nonatomic) NSMapTable *interactionObservers; // @synthesize interactionObservers=_interactionObservers;
@property(readonly, nonatomic) NSMapTable *interactionHandlerFactories; // @synthesize interactionHandlerFactories=_interactionHandlerFactories;
@property(readonly, nonatomic) NSMapTable *interactionHandlers; // @synthesize interactionHandlers=_interactionHandlers;
@property(readonly, nonatomic) NSMapTable *registeredObservers; // @synthesize registeredObservers=_registeredObservers;
@property(readonly, nonatomic) NSMapTable *registeredHandlers; // @synthesize registeredHandlers=_registeredHandlers;
@property(readonly, nonatomic) NSMutableSet *interactions; // @synthesize interactions=_interactions;
- (void).cxx_destruct;
- (void)configureInteraction:(id)arg1 withHandler:(id)arg2 observer:(id)arg3;
- (id)interactionObserverForInteraction:(id)arg1 withVideo:(id)arg2;
- (id)interactionHandlerForInteraction:(id)arg1 withVideo:(id)arg2;
- (void)configureInteractionManagementForVideo:(id)arg1;
- (void)registerInteraction:(id)arg1 withInteractionObserverFactory:(id)arg2;
- (void)registerInteraction:(id)arg1 withInteractionHandlerFactory:(id)arg2;
- (void)registerInteraction:(id)arg1 withInteractionObserver:(id)arg2;
- (void)registerInteraction:(id)arg1 withInteractionHandler:(id)arg2;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

