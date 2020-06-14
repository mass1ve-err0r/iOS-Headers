//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentManager/NSObject-Protocol.h>

@class DOCConcreteLocation, DOCItem, DOCSourceViewController;

@protocol DOCSourceViewControllerDelegate <NSObject>

@optional
- (_Bool)sourceViewControllerIsCollapsed:(DOCSourceViewController *)arg1;
- (void)sourceViewController:(DOCSourceViewController *)arg1 didPickItem:(DOCItem *)arg2;
- (void)sourceViewController:(DOCSourceViewController *)arg1 didSelectLocation:(DOCConcreteLocation *)arg2;
@end

