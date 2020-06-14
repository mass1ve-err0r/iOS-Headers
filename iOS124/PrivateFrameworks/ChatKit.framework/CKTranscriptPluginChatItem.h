//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKMessagePartChatItem.h>

@class IMTranscriptPluginChatItem, NSString, UIView, UIViewController;
@protocol CKTranscriptBalloonPluginController, CKTranscriptPluginView;

@interface CKTranscriptPluginChatItem : CKMessagePartChatItem
{
    _Bool _isAppearing;
    _Bool _isHandwriting;
    id <CKTranscriptBalloonPluginController> _balloonController;
    IMTranscriptPluginChatItem *_imTranscriptPluginChatItem;
}

@property(readonly, nonatomic) _Bool isHandwriting; // @synthesize isHandwriting=_isHandwriting;
@property(retain, nonatomic) IMTranscriptPluginChatItem *imTranscriptPluginChatItem; // @synthesize imTranscriptPluginChatItem=_imTranscriptPluginChatItem;
@property(nonatomic) __weak id <CKTranscriptBalloonPluginController> balloonController; // @synthesize balloonController=_balloonController;
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
- (void).cxx_destruct;
- (void)performHostAppResume;
- (void)releaseBalloonControllerIfNeeded;
- (void)relinquishBalloonController;
@property(readonly, nonatomic) _Bool isSaved;
@property(readonly, nonatomic) _Bool isPlayed;
@property(readonly, nonatomic) _Bool wantsTranscriptGroupMonograms;
@property(readonly, nonatomic) _Bool wantsOutline;
@property(readonly, nonatomic) _Bool wantsBalloonGradient;
@property(readonly, nonatomic) _Bool isInteractive;
- (id)dragItemProvider;
- (struct UIEdgeInsets)contentInsets;
- (id)loadTranscriptDrawerText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (void)pluginContentViewDidDisappear;
- (void)pluginContentViewWillDisappear;
- (void)pluginContentViewWillAppear;
- (_Bool)wantsDrawerLayout;
- (BOOL)transcriptOrientation;
- (id)snapshotGUIDForPluginPayload:(id)arg1;
- (struct UIEdgeInsets)textAlignmentInsets;
- (_Bool)shouldSnapshot;
- (Class)balloonViewClass;
- (Class)cellClass;
- (id)cellIdentifier;
- (id)contact;
- (id)sender;
- (id)pasteboardItems;
- (id)pluginDisplayContainer;
- (id)message;
- (id)menuTitle;
- (_Bool)canForward;
- (_Bool)canCopy;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (_Bool)handlePresentationAction;
- (void)configureWithConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(_Bool)arg3;
@property(readonly, nonatomic) UIViewController *contentViewController;
@property(readonly, nonatomic) UIViewController *extensibleViewController;
@property(readonly, nonatomic) UIView<CKTranscriptPluginView> *extensableView;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (id)composition;

// Remaining properties
@property(readonly, nonatomic) IMTranscriptPluginChatItem *IMChatItem; // @dynamic IMChatItem;

@end

