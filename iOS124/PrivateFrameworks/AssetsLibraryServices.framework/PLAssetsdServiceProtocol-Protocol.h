//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/PLAssetsdServiceCreating-Protocol.h>

@class PLDaemonJob;

@protocol PLAssetsdServiceProtocol <PLAssetsdServiceCreating>
- (void)runDaemonJob:(PLDaemonJob *)arg1 serially:(_Bool)arg2 withReply:(void (^)(NSError *, PLDaemonJobReply *))arg3;
- (void)runDaemonJob:(PLDaemonJob *)arg1 serially:(_Bool)arg2;
@end

