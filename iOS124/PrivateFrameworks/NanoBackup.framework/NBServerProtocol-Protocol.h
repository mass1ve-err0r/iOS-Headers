//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoBackup/NSObject-Protocol.h>

@class NSUUID;

@protocol NBServerProtocol <NSObject>
- (void)deleteBackupID:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)createBackupForPairingID:(NSUUID *)arg1 completionHandler:(void (^)(NBBackup *, NSError *))arg2;
- (void)restoreFromPairingID:(NSUUID *)arg1 forPairingID:(NSUUID *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)restoreFromBackupID:(NSUUID *)arg1 forPairingID:(NSUUID *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)listBackupsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
@end

