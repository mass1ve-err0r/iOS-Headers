//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (BRAdditions)
+ (id)brc_errorItemChanged;
+ (id)brc_addPartialError:(id)arg1 forURL:(id)arg2 toError:(id)arg3;
+ (id)brc_errorItemInTrash;
+ (id)brc_errorFolderHasSharedSubitems;
+ (id)brc_errorItemAlreadyPartOfAShare;
+ (id)brc_errorSyncBlocked;
+ (id)brc_errorDriveDisabledOrAppLibraryDisabled;
+ (id)brc_errorAcceptAlreadyInProgressForURL:(id)arg1;
+ (id)brc_errorCompatibilityIssue;
+ (id)brc_errorOperationCancelled;
+ (id)brc_errorDocumentWithFilename:(id)arg1 size:(long long)arg2 isTooLargeToUpload:(long long)arg3;
+ (id)brc_errorAccountMismatch;
+ (id)brc_errorDocumentIsNoLongerSharedAtURL:(id)arg1;
+ (id)brc_errorDocumentIsNotSharedAtURL:(id)arg1;
+ (id)brc_errorDocumentIsNotShared;
+ (id)brc_errorDocumentAtURL:(id)arg1 isNotExternalToAppLibrary:(id)arg2;
+ (id)brc_errorNoDocumentAtURL:(id)arg1 underlyingPOSIXError:(int)arg2;
+ (id)brc_errorNoSuitableClientApp;
+ (id)brc_errorSyncDisabled:(id)arg1;
+ (id)brc_errorClientZoneNotFound:(id)arg1;
+ (id)brc_errorNoAppLibraryForBundle:(id)arg1;
+ (id)brc_errorAppLibraryNotFound:(id)arg1;
+ (id)brc_errorUnknownKey:(id)arg1;
+ (id)brc_errorItemNotFound:(id)arg1;
+ (id)brc_errorPermissionErrorAtURL:(id)arg1;
+ (id)brc_errorPermissionError:(id)arg1;
+ (id)brc_errorPathOutsideAnyCloudDocsAppLibraryAtURL:(id)arg1;
+ (id)brc_errorNotInCloud:(id)arg1;
+ (id)brc_errorNotOnDisk:(id)arg1;
+ (id)brc_errorInvalidParameter:(id)arg1 value:(id)arg2;
+ (id)brc_errorMethodNotImplemented:(SEL)arg1;
+ (id)brc_errorDaemonShouldBeLoggedOut;
+ (id)brc_errorLoggedOut;
+ (id)br_errorFromErrno;
+ (id)br_errorWithPOSIXCode:(int)arg1 description:(id)arg2;
+ (id)br_errorWithPOSIXCode:(int)arg1;
+ (id)br_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 description:(id)arg4;
+ (id)br_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
- (id)br_underlyingPOSIXError;
- (_Bool)br_isCloudDocsErrorCode:(long long)arg1;
- (_Bool)br_isCocoaErrorCode:(long long)arg1;
- (_Bool)br_isPOSIXErrorCode:(long long)arg1;
@end

