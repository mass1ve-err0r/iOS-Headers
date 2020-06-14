//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBKUniversalPlaybackPositionTransactionContext-Protocol.h"

@class ML3MusicLibrary, NSMutableSet, NSString;

@interface SBDPlaybackPositionTransaction : NSObject <SBKUniversalPlaybackPositionTransactionContext>
{
    ML3MusicLibrary *_musicLibrary;
    unsigned long long _lastSyncedEntityRevision;
    unsigned long long _transactionEntityRevision;
    NSString *_lastSyncedDomainVersion;
    NSMutableSet *_ubiquitousIdentifiersToSync;
}

@property(retain, nonatomic) NSMutableSet *ubiquitousIdentifiersToSync; // @synthesize ubiquitousIdentifiersToSync=_ubiquitousIdentifiersToSync;
@property(copy) NSString *lastSyncedDomainVersion; // @synthesize lastSyncedDomainVersion=_lastSyncedDomainVersion;
@property unsigned long long transactionEntityRevision; // @synthesize transactionEntityRevision=_transactionEntityRevision;
@property unsigned long long lastSyncedEntityRevision; // @synthesize lastSyncedEntityRevision=_lastSyncedEntityRevision;
@property(retain) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
