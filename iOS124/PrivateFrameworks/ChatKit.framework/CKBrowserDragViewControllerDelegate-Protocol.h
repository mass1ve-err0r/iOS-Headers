//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBrowserDragControllerTarget, CKBrowserDragViewController;

@protocol CKBrowserDragViewControllerDelegate <NSObject>
- (void)browserDragViewController:(CKBrowserDragViewController *)arg1 dragEndedWithTarget:(CKBrowserDragControllerTarget *)arg2;
- (void)browserDragViewController:(CKBrowserDragViewController *)arg1 draggedWithTarget:(CKBrowserDragControllerTarget *)arg2;
@end
