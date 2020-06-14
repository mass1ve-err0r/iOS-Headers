//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL, SBFParallaxSettings, SBUIAppIconForceTouchController, SBUIForceTouchGestureRecognizer, UIView;

@protocol SBUIAppIconForceTouchControllerDataSource <NSObject>
- (struct CGRect)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 iconViewFrameForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (UIView *)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 newIconViewCopyForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;

@optional
- (struct CGPoint)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 zoomDownCenterForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (UIView *)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 zoomDownViewForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (SBFParallaxSettings *)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 parallaxSettingsForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (double)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 iconImageCornerRadiusForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (struct UIEdgeInsets)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 iconImageInsetsForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (NSArray *)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 applicationShortcutItemsForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (NSString *)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 applicationShortcutWidgetBundleIdentifierForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (NSURL *)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 applicationBundleURLForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (NSString *)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 applicationBundleIdentifierForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
@end

