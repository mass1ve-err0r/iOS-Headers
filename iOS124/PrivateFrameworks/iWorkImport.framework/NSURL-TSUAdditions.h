//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (TSUAdditions)
+ (id)tsu_fileURLWithPath:(id)arg1;
- (id)tsu_URLExceptPrivate;
- (id)tsu_pathExceptPrivate;
- (id)tsu_contentModificationDateWithLogContext:(id)arg1;
@property(readonly, getter=tsu_isInTrash) _Bool tsu_inTrash;
- (void)tsu_removeCachedResourceValueForKeys:(id)arg1;
- (id)tsu_fileProviderBookmarkableStringAndReturnError:(id *)arg1;
- (void)tsu_fileProviderBookmarkableStringWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)tsu_isOnSameVolumeAs:(id)arg1;
- (id)tsu_reachableFileURLByDeletingUnreachablePathComponents;
- (_Bool)tsu_isOnAPFSVolume;
- (_Bool)tsu_isOnForeignVolume;
- (id)tsu_fileSystemTypeName;
- (id)tsu_fileTypeIdentifierHandlingFileCoordinationPromises;
- (_Bool)tsu_setNeedsDocumentIdentifierAndReturnError:(out id *)arg1;
- (_Bool)tsu_isDocumentUploaded:(out _Bool *)arg1 error:(id *)arg2;
- (_Bool)tsu_isDocumentUploaded;
- (_Bool)tsu_isShared:(out _Bool *)arg1 error:(id *)arg2;
- (_Bool)tsu_isShared;
- (_Bool)tsu_fileSize:(out unsigned long long *)arg1 error:(id *)arg2;
- (unsigned long long)tsu_fileSize;
- (_Bool)tsu_isFileSizeTooLargeForSharing;
- (void)tsu_performSecurityScopedResourceAccessAsynchronouslyUsingBlock:(CDUnknownBlockType)arg1;
- (void)tsu_performSecurityScopedResourceAccessUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_documentIdentifier;
@end

