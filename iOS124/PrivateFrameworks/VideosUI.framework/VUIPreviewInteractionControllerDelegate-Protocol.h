//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSIndexPath, VUIPreviewInteractionController;

@protocol VUIPreviewInteractionControllerDelegate <NSObject>
- (void)interactionController:(VUIPreviewInteractionController *)arg1 didEndForIndexPath:(NSIndexPath *)arg2;
- (void)interactionController:(VUIPreviewInteractionController *)arg1 didBeginForIndexPath:(NSIndexPath *)arg2;
- (_Bool)interactionController:(VUIPreviewInteractionController *)arg1 shouldInteractionControllerBeginForIndexPath:(NSIndexPath *)arg2;
@end

