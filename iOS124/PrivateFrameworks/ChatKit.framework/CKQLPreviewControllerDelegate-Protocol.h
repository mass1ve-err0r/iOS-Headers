//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/QLPreviewControllerDelegate-Protocol.h>

@class CKInvisibleInkEffectController, CKQLPreviewController, NSArray, QLPreviewController;

@protocol CKQLPreviewControllerDelegate <QLPreviewControllerDelegate>
- (void)previewControllerDidCancelDismiss:(QLPreviewController *)arg1;
- (CKInvisibleInkEffectController *)invisibleInkEffectControllerForPreviewController:(CKQLPreviewController *)arg1;

@optional
- (NSArray *)previewActionsForPreviewController:(CKQLPreviewController *)arg1;
@end

