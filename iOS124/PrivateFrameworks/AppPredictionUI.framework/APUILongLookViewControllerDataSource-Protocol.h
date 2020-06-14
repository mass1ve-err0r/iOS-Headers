//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class APUILongLookViewController, NSArray, NSString, UIImage;

@protocol APUILongLookViewControllerDataSource
- (double)preferredContentHeightForLongLook:(APUILongLookViewController *)arg1;
- (_Bool)fetchViewControllerForContentViewInLongLook:(APUILongLookViewController *)arg1 completion:(void (^)(UIViewController *))arg2;
- (NSString *)titleForLongLookHeaderInLongLook:(APUILongLookViewController *)arg1;
- (NSString *)bundleIdentifierForAppIconInLongLook:(APUILongLookViewController *)arg1;
- (UIImage *)appIconImageForLongLook:(APUILongLookViewController *)arg1;
- (NSArray *)interfaceActionsForLongLook:(APUILongLookViewController *)arg1;
@end

