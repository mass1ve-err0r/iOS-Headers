//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SUDescriptor, SUDownload, SUInstallPolicy, SUScanOptions;

@protocol SUManagerDelegate <NSObject>

@optional
- (void)managedInstallationRequested:(SUInstallPolicy *)arg1;
- (void)installPolicyDidChange:(SUInstallPolicy *)arg1;
- (void)installDidFinish:(SUDescriptor *)arg1;
- (void)installDidFail:(SUDescriptor *)arg1 withError:(NSError *)arg2;
- (void)installDidStart:(SUDescriptor *)arg1;
- (void)downloadWasInvalidatedForNewUpdateAvailable:(SUDescriptor *)arg1;
- (void)downloadDidFinish:(SUDownload *)arg1 withInstallPolicy:(SUInstallPolicy *)arg2;
- (void)downloadDidFinish:(SUDownload *)arg1;
- (void)downloadDidFail:(SUDownload *)arg1 withError:(NSError *)arg2;
- (void)downloadProgressDidChange:(SUDownload *)arg1;
- (void)downloadDidStart:(SUDownload *)arg1;
- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(SUDescriptor *)arg1 withError:(NSError *)arg2;
- (void)scanDidCompleteWithNewUpdateAvailable:(SUDescriptor *)arg1 error:(NSError *)arg2;
- (void)scanRequestDidFinishForOptions:(SUScanOptions *)arg1 update:(SUDescriptor *)arg2 error:(NSError *)arg3;
- (void)scanRequestDidStartForOptions:(SUScanOptions *)arg1;
@end

