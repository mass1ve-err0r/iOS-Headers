//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HelpKit/NSObject-Protocol.h>

@class UISearchController;

@protocol UISearchControllerDelegate <NSObject>

@optional
- (void)presentSearchController:(UISearchController *)arg1;
- (void)didDismissSearchController:(UISearchController *)arg1;
- (void)willDismissSearchController:(UISearchController *)arg1;
- (void)didPresentSearchController:(UISearchController *)arg1;
- (void)willPresentSearchController:(UISearchController *)arg1;
@end

