//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACXIDSMessagingDeviceManager-Protocol.h"

@class ACXDevice, NSArray, NSMutableDictionary, NSString;
@protocol ACXDeviceManagerDelegate, OS_dispatch_queue;

@interface ACXDeviceManager : NSObject <ACXIDSMessagingDeviceManager>
{
    id <ACXDeviceManagerDelegate> _delegate;
    NSMutableDictionary *_devices;
    ACXDevice *_activePairedDevice;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)sharedManager;
@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain) ACXDevice *activePairedDevice; // @synthesize activePairedDevice=_activePairedDevice;
@property(readonly) NSMutableDictionary *devices; // @synthesize devices=_devices;
@property __weak id <ACXDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSimulatedDevices:(id)arg1;
@property(readonly) NSArray *allDevices;
- (id)deviceForNRDevice:(id)arg1;
- (id)deviceForPairingID:(id)arg1;
- (id)deviceForIDSIdentifier:(id)arg1;
- (id)currentActivePairedDevice;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
