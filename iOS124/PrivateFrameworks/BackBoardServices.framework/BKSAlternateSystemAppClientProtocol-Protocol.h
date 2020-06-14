//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardServices/NSObject-Protocol.h>

@class BKSProcessExitContext, NSError, NSString;

@protocol BKSAlternateSystemAppClientProtocol <NSObject>
- (void)alternateSystemAppWithBundleIDDidTerminate:(NSString *)arg1;
- (void)alternateSystemAppWithBundleIDDidOpen:(NSString *)arg1;
- (void)alternateSystemAppWithBundleID:(NSString *)arg1 didExitWithContext:(BKSProcessExitContext *)arg2;
- (void)alternateSystemAppWithBundleID:(NSString *)arg1 failedToOpenWithResult:(NSError *)arg2;
- (void)didUnblockSystemAppForAlternateSystemApp;
- (void)didBlockSystemAppForAlternateSystemApp;
@end

