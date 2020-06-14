//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/SFXPCClient.h>

#import <Sharing/SFAirDropTransferObserverProtocol-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol SFAirDropTransferObserverDelegate;

@interface SFAirDropTransferObserver : SFXPCClient <SFAirDropTransferObserverProtocol>
{
    id <SFAirDropTransferObserverDelegate> _delegate;
    NSMutableDictionary *_transferIdentifierToTransfer;
}

@property(retain) NSMutableDictionary *transferIdentifierToTransfer; // @synthesize transferIdentifierToTransfer=_transferIdentifierToTransfer;
@property(nonatomic) __weak id <SFAirDropTransferObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldEscapeXpcTryCatch;
- (id)remoteObjectInterface;
- (id)exportedInterface;
- (id)machServiceName;
- (void)removedTransfer:(id)arg1;
- (void)updatedTransfer:(id)arg1;
- (void)updateActionHandlersOnTransfer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserverForLocalOnlyPropertiesOnTransfer:(id)arg1;
- (void)observeForLocalOnlyPropertiesOnTransfer:(id)arg1;
- (void)invalidate;
- (void)activate;
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

