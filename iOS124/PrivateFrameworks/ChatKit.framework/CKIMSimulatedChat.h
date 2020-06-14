//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMChat.h>

#import <ChatKit/CKIMSimulatedChatDelegate-Protocol.h>
#import <ChatKit/CKIMSimulatedDaemonListener-Protocol.h>

@class CKIMSimulatedAccount, IMHandle, NSArray, NSString;
@protocol CKIMSimulatedChatDelegate;

@interface CKIMSimulatedChat : IMChat <CKIMSimulatedChatDelegate, CKIMSimulatedDaemonListener>
{
    id <CKIMSimulatedChatDelegate> _delegate;
    CKIMSimulatedAccount *_simulatedAccount;
    NSString *_simulatedGUID;
    NSArray *_incomingHandles;
    IMHandle *_outgoingHandle;
    unsigned long long _currentMessageID;
    NSString *_simulatedChatIdentifier;
}

@property(copy, nonatomic) NSString *simulatedChatIdentifier; // @synthesize simulatedChatIdentifier=_simulatedChatIdentifier;
@property(readonly, nonatomic) unsigned long long currentMessageID; // @synthesize currentMessageID=_currentMessageID;
@property(readonly, nonatomic) IMHandle *outgoingHandle; // @synthesize outgoingHandle=_outgoingHandle;
@property(readonly, nonatomic) NSArray *incomingHandles; // @synthesize incomingHandles=_incomingHandles;
@property(readonly, nonatomic) NSString *simulatedGUID; // @synthesize simulatedGUID=_simulatedGUID;
@property(readonly, nonatomic) CKIMSimulatedAccount *simulatedAccount; // @synthesize simulatedAccount=_simulatedAccount;
@property(nonatomic) __weak id <CKIMSimulatedChatDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_messageWithGUID:(id)arg1;
- (void)simulatedDaemon:(id)arg1 willSendBalloonPayload:(id)arg2 attachments:(id)arg3 messageGUID:(id)arg4 bundleID:(id)arg5;
- (void)chat:(id)arg1 didSendMessage:(id)arg2 finished:(_Bool)arg3;
- (void)markAsAutoSpamReported;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(_Bool)arg3;
- (unsigned char)chatStyle;
- (id)recipient;
- (id)participants;
- (id)guid;
- (id)account;
- (id)chatIdentifier;
- (_Bool)_handleIncomingItem:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 adjustingSender:(_Bool)arg2 shouldQueue:(_Bool)arg3;
- (id)initWithIncomingIDs:(id)arg1 outgoingID:(id)arg2 messageIDOffset:(unsigned long long)arg3 service:(id)arg4;

@end

