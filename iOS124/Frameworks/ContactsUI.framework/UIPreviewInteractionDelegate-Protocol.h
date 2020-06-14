//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class UIPreviewInteraction;

@protocol UIPreviewInteractionDelegate <NSObject>
- (void)previewInteractionDidCancel:(UIPreviewInteraction *)arg1;
- (void)previewInteraction:(UIPreviewInteraction *)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;

@optional
- (void)previewInteraction:(UIPreviewInteraction *)arg1 didUpdateCommitTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)previewInteractionShouldBegin:(UIPreviewInteraction *)arg1;
@end

