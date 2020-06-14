//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSSet, NSString;

@interface NSError (TSPersistence)
+ (id)tsp_ensureSaveErrorWithError:(id)arg1;
+ (id)tsp_ensureReadErrorWithError:(id)arg1;
+ (id)tsp_writePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsp_readCorruptZipOfPackageErrorWithUserInfo:(id)arg1;
+ (id)tsp_saveDocumentErrorWithUserInfo:(id)arg1;
+ (id)tsp_unknownWriteErrorWithUserInfo:(id)arg1;
+ (id)tsp_unsupportedVersionErrorWithUserInfo:(id)arg1;
+ (id)tsp_readPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsp_readCorruptedDocumentErrorWithUserInfo:(id)arg1;
+ (id)tsp_unknownReadErrorWithUserInfo:(id)arg1;
+ (id)tsp_errorWithError:(id)arg1 hints:(id)arg2;
+ (id)tsp_recoverableErrorWithError:(id)arg1;
+ (id)tsp_userInfoWithUserInfo:(id)arg1 additionalUserInfo:(id)arg2;
+ (id)tsp_recoverableErrorWithCode:(long long)arg1;
+ (id)tsp_errorWithCode:(long long)arg1 userInfo:(id)arg2 isRecoverable:(_Bool)arg3;
+ (id)tsp_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsp_errorWithCode:(long long)arg1;
@property(readonly, nonatomic) _Bool tsp_isPasswordInputError;
@property(readonly, nonatomic) _Bool tsp_isCorruptZipOfPackageError;
@property(readonly, nonatomic) _Bool tsp_isUnsupportedVersionError;
@property(readonly, nonatomic) _Bool tsp_isDocumentTooNewError;
@property(readonly, nonatomic) NSString *tsp_hintsDescription;
@property(readonly, nonatomic) NSSet *tsp_hints;
@property(readonly, nonatomic) _Bool tsp_isRecoverable;
@property(readonly, nonatomic) _Bool tsp_isWriteError;
@property(readonly, nonatomic) _Bool tsp_isCorruptedError;
@property(readonly, nonatomic) _Bool tsp_isReadError;
@property(readonly, nonatomic) _Bool tsp_isTSPError;
@end

