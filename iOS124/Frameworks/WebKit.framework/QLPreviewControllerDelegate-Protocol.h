//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class NSURL, QLPreviewController, UIImage, UIView;
@protocol QLPreviewItem;

@protocol QLPreviewControllerDelegate <NSObject>

@optional
- (UIView *)previewController:(QLPreviewController *)arg1 transitionViewForPreviewItem:(id <QLPreviewItem>)arg2;
- (UIImage *)previewController:(QLPreviewController *)arg1 transitionImageForPreviewItem:(id <QLPreviewItem>)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewController:(QLPreviewController *)arg1 frameForPreviewItem:(id <QLPreviewItem>)arg2 inSourceView:(id *)arg3;
- (_Bool)previewController:(QLPreviewController *)arg1 shouldOpenURL:(NSURL *)arg2 forPreviewItem:(id <QLPreviewItem>)arg3;
- (void)previewControllerDidDismiss:(QLPreviewController *)arg1;
- (void)previewControllerWillDismiss:(QLPreviewController *)arg1;
@end

