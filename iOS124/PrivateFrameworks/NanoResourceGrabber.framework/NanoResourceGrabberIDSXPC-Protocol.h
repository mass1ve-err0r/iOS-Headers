//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoResourceGrabber/NSObject-Protocol.h>

@class NSString;

@protocol NanoResourceGrabberIDSXPC <NSObject>
- (void)xpcGetIconForBundleID:(NSString *)arg1 iconVariant:(int)arg2 withTimeout:(double)arg3 reply:(void (^)(NSData *))arg4;
@end

