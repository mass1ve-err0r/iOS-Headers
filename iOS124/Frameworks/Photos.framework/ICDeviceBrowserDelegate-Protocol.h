//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class ICDevice, ICDeviceBrowser;

@protocol ICDeviceBrowserDelegate <NSObject>
- (void)deviceBrowser:(ICDeviceBrowser *)arg1 didRemoveDevice:(ICDevice *)arg2 moreGoing:(_Bool)arg3;
- (void)deviceBrowser:(ICDeviceBrowser *)arg1 didAddDevice:(ICDevice *)arg2 moreComing:(_Bool)arg3;
@end

