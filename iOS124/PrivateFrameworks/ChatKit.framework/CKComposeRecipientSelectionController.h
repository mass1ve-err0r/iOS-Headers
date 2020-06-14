//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKRecipientSelectionController.h>

#import <ChatKit/UITextFieldDelegate-Protocol.h>

@class NSArray, NSString;
@protocol CKComposeRecipientSelectionControllerDelegate;

@interface CKComposeRecipientSelectionController : CKRecipientSelectionController <UITextFieldDelegate>
{
    CDUnknownBlockType _sendBlock;
}

@property(copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)_handlesForRecipients:(id)arg1;
- (_Bool)_updateBackfillForNewRecipients;
- (_Bool)_hasExistingConversationWithAddedRecipient:(id)arg1;
- (_Bool)alwaysShowSearchResultsTable;
- (_Bool)shouldSuppressSearchResultsTable;
- (_Bool)homogenizePreferredServiceForiMessage;
- (_Bool)shouldAtomizeToConversationName;
- (void)recipientSelectionControllerDidChange;
- (void)reset;
- (void)atomizeAndSendTimeoutHandler;
- (void)atomizeAndInvokeBlock:(CDUnknownBlockType)arg1;
- (void)_legacyAddRecipient:(id)arg1;
- (void)addRecipient:(id)arg1;
@property(readonly, nonatomic) NSArray *proposedRecipients;
@property(readonly, nonatomic) NSArray *expandedRecipients;
- (void)_updatePillViewIfNeededIfIsNewConversation:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CKComposeRecipientSelectionControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

