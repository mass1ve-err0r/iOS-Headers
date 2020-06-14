//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class NSSet, NSString, _IDSCompletionHandler;

@interface IDSPairedDeviceManager : NSObject <IDSDaemonListenerProtocol>
{
    _IDSCompletionHandler *_deleteCompletion;
    _IDSCompletionHandler *_localCompletion;
    _IDSCompletionHandler *_pairedCompletion;
    _IDSCompletionHandler *_deliveryStatsCompletion;
    NSSet *_allowedTrafficClassifiers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)deliveryStats:(id)arg1;
- (void)pairedDeviceInfo:(id)arg1;
- (void)localDeviceInfo:(id)arg1;
- (void)device:(id)arg1 pairingDeleted:(_Bool)arg2;
- (void)device:(id)arg1 pairingAdded:(_Bool)arg2;
- (void)getDeliveryStatsWithCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)getPairedDeviceInfoWithCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)getLocalDeviceInfoWithCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)deletePairedDevice:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)setPairedDeviceInfo:(id)arg1;
- (void)dropAllMessagesWithoutAnyAllowedClassifier;
@property(retain, nonatomic) NSSet *allowedTrafficClassifiers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

