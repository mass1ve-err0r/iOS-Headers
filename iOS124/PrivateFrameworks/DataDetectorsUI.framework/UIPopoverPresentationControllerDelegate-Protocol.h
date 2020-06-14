//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class UIPopoverPresentationController;

@protocol UIPopoverPresentationControllerDelegate <UIAdaptivePresentationControllerDelegate>

@optional
- (void)popoverPresentationController:(UIPopoverPresentationController *)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(UIPopoverPresentationController *)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(UIPopoverPresentationController *)arg1;
- (void)prepareForPopoverPresentation:(UIPopoverPresentationController *)arg1;
@end

