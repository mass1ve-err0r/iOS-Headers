//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSSet;
@protocol EAWiFiUnconfiguredAccessoryBrowserDelegate, OS_dispatch_queue;

@interface EAWiFiUnconfiguredAccessoryBrowser : NSObject
{
    _Bool __debugLog;
    id <EAWiFiUnconfiguredAccessoryBrowserDelegate> _delegate;
    NSSet *_unconfiguredAccessories;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSPredicate *_accessorySearchPredicate;
}

@property(retain) NSPredicate *accessorySearchPredicate; // @synthesize accessorySearchPredicate=_accessorySearchPredicate;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, copy) NSSet *unconfiguredAccessories; // @synthesize unconfiguredAccessories=_unconfiguredAccessories;
@property(nonatomic) __weak id <EAWiFiUnconfiguredAccessoryBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleBrowserFinishedConfiguring:(id)arg1;
- (void)_handlePurgeAccessoriesSetNotification:(id)arg1;
- (void)_handleRemovedAccessoriesNotification:(id)arg1;
- (void)_handleNewAccessoriesNotification:(id)arg1;
- (void)_handleBrowserDidUpdateState:(id)arg1;
- (void)configureAccessory:(id)arg1 withConfigurationUIOnViewController:(id)arg2;
- (void)stopSearchingForUnconfiguredAccessories;
- (void)startSearchingForUnconfiguredAccessoriesMatchingPredicate:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)init;

@end

