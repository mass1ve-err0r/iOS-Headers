//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardServices/NSObject-Protocol.h>

@class BKSDisplayRenderOverlayDescriptor, BSAnimationSettings;

@protocol BKSDisplayRenderOverlayDismissAction <NSObject>
@property(readonly, nonatomic) BKSDisplayRenderOverlayDescriptor *overlayDescriptor;
- (void)dismissWithAnimation:(BSAnimationSettings *)arg1;
- (void)dismiss;
@end

