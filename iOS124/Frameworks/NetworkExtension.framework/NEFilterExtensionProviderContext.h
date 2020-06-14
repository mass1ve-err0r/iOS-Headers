//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEExtensionProviderContext.h>

#import <NetworkExtension/NEFilterExtensionProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEFilterExtensionProviderProtocol-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface NEFilterExtensionProviderContext : NEExtensionProviderContext <NEFilterExtensionProviderProtocol, NEFilterExtensionProviderHostProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_description;
}

- (void).cxx_destruct;
- (void)stopWithReason:(int)arg1;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateConfiguration:(id)arg1;
- (void)setExtensionIdentifier:(id)arg1 deviceIdentifier:(id)arg2;
@property(readonly, copy) NSString *description;
@property(retain) NSObject<OS_dispatch_queue> *queue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

