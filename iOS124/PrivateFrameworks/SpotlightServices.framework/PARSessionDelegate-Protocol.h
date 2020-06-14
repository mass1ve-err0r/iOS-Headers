//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightServices/NSObject-Protocol.h>

@class NSError, NSString, PARBag, PARSession;

@protocol PARSessionDelegate <NSObject>
- (void)session:(PARSession *)arg1 bag:(PARBag *)arg2 didLoadWithError:(NSError *)arg3;

@optional
- (void)session:(PARSession *)arg1 didDeleteResource:(NSString *)arg2;
- (void)session:(PARSession *)arg1 didDownloadResource:(NSString *)arg2;
@end

