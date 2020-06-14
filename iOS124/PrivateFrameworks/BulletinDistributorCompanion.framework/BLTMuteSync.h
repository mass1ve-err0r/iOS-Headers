//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSManager, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface BLTMuteSync : NSObject
{
    NSMutableDictionary *_mutedSectionIdentifiersForDay;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)removeSectionIdentifiers:(id)arg1;
- (void)addSectionIdentifiers:(id)arg1;
- (_Bool)isMutedForTodaySectionIdentifier:(id)arg1;
@property(readonly, nonatomic) NSSet *mutedForTodaySectionIdentifiers;
- (void)_queue_sync;
- (void)_loadMutedSectionIdentifiers;
- (void)_cleanMuteIdentifiers;
- (void)_updateObservers;
- (void)dealloc;
- (id)init;

@end

