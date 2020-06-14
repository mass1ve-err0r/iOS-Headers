//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDP/NSObject-Protocol.h>

@class NSDictionary;

@protocol CDPProtectedCloudStorageProxy <NSObject>
- (_Bool)pcsRestoreLocalBackup:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)pcsSynchronizeKeysWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityMigrateToStingrayWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityMigrateToiCDPWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (struct _PCSIdentitySetData *)pcsIdentitySetupWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (struct _PCSIdentitySetData *)pcsIdentityCreateWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
@end

