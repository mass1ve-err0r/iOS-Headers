//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/RWIProtocolDOMStorageDomainHandler-Protocol.h>

@class IKJSInspectorController, NSString;

@interface IKJSInspectorStorageAgent : NSObject <RWIProtocolDOMStorageDomainHandler>
{
    IKJSInspectorController *_controller;
}

@property(readonly, nonatomic) __weak IKJSInspectorController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)_storageForStorageId:(id)arg1;
- (id)_storageIdForStorage:(id)arg1;
- (void)_itemsCleared:(id)arg1;
- (void)_itemRemoved:(id)arg1;
- (void)_itemUpdated:(id)arg1;
- (void)_itemAdded:(id)arg1;
- (void)removeDOMStorageItemWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 storageId:(id)arg3 key:(id)arg4;
- (void)setDOMStorageItemWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 storageId:(id)arg3 key:(id)arg4 value:(id)arg5;
- (void)getDOMStorageItemsWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 storageId:(id)arg3;
- (void)disableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)enableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)stopListeningForStorageNotifications;
- (void)startListeningForStorageNotifications;
- (void)dealloc;
- (id)initWithInspectorController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

