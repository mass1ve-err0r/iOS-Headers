//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKShareSheetChatController.h>

@class CKChatEagerUploadController, NSMutableArray;

@interface CKModalTranscriptController : CKShareSheetChatController
{
    _Bool _mimeType;
    _Bool _alreadySetUp;
    NSMutableArray *_partsToInsert;
    NSMutableArray *_typesToInsert;
    int _entryViewInvisible;
    _Bool _cameraSelectionDisabled;
    _Bool _forceMMS;
    CKChatEagerUploadController *_eagerUploadController;
}

@property(retain, nonatomic) CKChatEagerUploadController *eagerUploadController; // @synthesize eagerUploadController=_eagerUploadController;
@property(nonatomic) _Bool forceMMS; // @synthesize forceMMS=_forceMMS;
@property(nonatomic) _Bool mimeType; // @synthesize mimeType=_mimeType;
- (void).cxx_destruct;
- (_Bool)_shouldUseExistingConversations;
- (_Bool)_shouldUseDefaultFirstResponder;
- (void)_conversationListDidFinishLoading:(id)arg1;
- (void)registerForNotifications;
- (void)_setEntryViewVisible:(_Bool)arg1;
- (_Bool)shouldDismissAfterSend;
- (void)setTextEntryContentsVisible:(_Bool)arg1;
- (_Bool)_shouldAllowCameraAttachments;
- (void)disableCameraAttachments;
- (void)setCanEditRecipients:(_Bool)arg1;
- (void)setPendingAddresses:(id)arg1;
- (_Bool)_deviceIsLocked;
- (void)_setConversationDeferredSetup;
- (void)sendComposition:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)getContainerWidth:(double *)arg1 offset:(double *)arg2;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 fullyRealizedPreview:(id)arg4 rawPreview:(id)arg5 appendedVideoURL:(id)arg6;
- (void)insertMessage:(id)arg1 appProxy:(id)arg2;
- (void)insertRichLinkWithURL:(id)arg1 data:(id)arg2;
- (_Bool)_insertMediaObject:(id)arg1;
- (void)setComposition:(id)arg1;
- (id)initWithNavigationController:(id)arg1;

@end

