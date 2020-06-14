//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRCoreUtilsPairingSession.h>

@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession
{
}

+ (id)globalPairingQueue;
+ (id)pairingManager;
+ (_Bool)systemPairingAvailable;
- (id)updateMediaRemotePairedDevice:(id)arg1;
- (id)pairedPeerFromPeerDevice:(void *)arg1;
- (void *)_createPeerDeviceFromPairedPeer:(id)arg1;
- (struct NSMutableDictionary *)mediaRemotePairedDevices;
- (id)pairedPeerDevices;
- (id)pairedPeerDevice;
- (id)updatePeer;
- (id)removePeer;
- (id)addPeer;
- (_Bool)shouldAutoRetryPairingExchange:(id)arg1;
- (_Bool)shouldRetry;
- (id)initializePairingSession:(struct PairingSessionPrivate *)arg1;

@end
