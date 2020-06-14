//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentMessageHandler-Protocol.h>

@class NSString;
@protocol SXWebContentMessageHandler;

@interface SXWebContentWeakMessageHandler : NSObject <SXWebContentMessageHandler>
{
    id <SXWebContentMessageHandler> _messageHandler;
}

+ (id)handlerWithMessageHandler:(id)arg1;
@property(readonly, nonatomic) __weak id <SXWebContentMessageHandler> messageHandler; // @synthesize messageHandler=_messageHandler;
- (void).cxx_destruct;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

