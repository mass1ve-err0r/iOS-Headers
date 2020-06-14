//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFilterExtensionProviderContext.h>

#import <NetworkExtension/NEFilterControlExtensionProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEFilterControlExtensionProviderProtocol-Protocol.h>

@class NSString;

@interface NEFilterControlExtensionProviderContext : NEFilterExtensionProviderContext <NEFilterControlExtensionProviderProtocol, NEFilterControlExtensionProviderHostProtocol>
{
    _Bool _observing;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property _Bool observing; // @synthesize observing=_observing;
- (void)provideURLAppendStringMap:(id)arg1;
- (void)provideRemediationMap:(id)arg1;
- (void)notifyRulesChanged;
- (void)handleReport:(id)arg1;
- (void)handleNewFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopWithReason:(int)arg1;
- (void)dealloc;
- (void)dispose;
- (void)stopObserving;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

