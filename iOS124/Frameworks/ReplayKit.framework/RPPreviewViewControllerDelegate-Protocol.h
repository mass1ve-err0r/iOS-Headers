//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReplayKit/NSObject-Protocol.h>

@class NSSet, RPPreviewViewController;

@protocol RPPreviewViewControllerDelegate <NSObject>

@optional
- (void)previewController:(RPPreviewViewController *)arg1 didFinishWithActivityTypes:(NSSet *)arg2;
- (void)previewControllerDidFinish:(RPPreviewViewController *)arg1;
@end

