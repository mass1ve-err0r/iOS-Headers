//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedSync/PSYSyncSessionObserverInterface-Protocol.h>

@class NSString;
@protocol PSYSyncSessionObserverInterface;

@interface PSYSyncSessionObserverExportedObject : NSObject <PSYSyncSessionObserverInterface>
{
    id <PSYSyncSessionObserverInterface> _delegate;
}

@property(nonatomic) __weak id <PSYSyncSessionObserverInterface> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (oneway void)invalidateSyncSession:(id)arg1;
- (oneway void)updateSyncSession:(id)arg1;
- (oneway void)syncSessionWillStart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

