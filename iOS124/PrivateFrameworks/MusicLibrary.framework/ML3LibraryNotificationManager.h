//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/MSVDistributedNotificationObserverDelegate-Protocol.h>

@class ML3MusicLibrary, NSMutableArray, NSMutableOrderedSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ML3LibraryNotificationManager : NSObject <MSVDistributedNotificationObserverDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_libraryPath;
    NSMutableArray *_notificationObservers;
    NSMutableOrderedSet *_queuedLocalNotifications;
    NSMutableOrderedSet *_queuedDistributedNotificationNames;
    ML3MusicLibrary *_library;
}

@property(readonly, nonatomic) __weak ML3MusicLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (void)_postEnqueuedDistributedNotifications;
- (void)_postEnqueuedLocalNotifications;
- (id)_observerForDistributedName:(id)arg1;
- (id)_observerForLocalName:(id)arg1;
- (_Bool)observerShouldForwardDistributedNotification:(id)arg1;
- (void)enqueueDistributedNotificationNamed:(id)arg1;
- (void)enqueueLocalNotificationNamed:(id)arg1;
- (void)enqueueLocalNotification:(id)arg1;
- (void)removeObserverWithLocalName:(id)arg1;
- (void)removeObserverWithDistributedName:(id)arg1;
- (void)addObserverForDistributedName:(id)arg1 localName:(id)arg2;
- (id)initWithLibrary:(id)arg1 distributedAndLocalNames:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

