//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (SFUtilityAdditions)
- (void)sfu_logFileProtectionAtURL:(id)arg1 recursively:(_Bool)arg2;
- (void)sfup_logFileProtectionAtURL:(id)arg1 recursively:(_Bool)arg2 indent:(id)arg3;
- (_Bool)sfu_hasAtMostFileProtection:(id)arg1 atURL:(id)arg2 recursively:(_Bool)arg3;
- (_Bool)sfu_hasAtLeastFileProtection:(id)arg1 atURL:(id)arg2 recursively:(_Bool)arg3;
- (_Bool)sfup_fileProtectionAtURL:(id)arg1 recursively:(_Bool)arg2 passesTest:(CDUnknownBlockType)arg3;
- (_Bool)sfup_fileProtection:(id)arg1 isGreaterThan:(id)arg2;
- (_Bool)sfu_increaseFileProtectionAtURL:(id)arg1 toProtection:(id)arg2 recursively:(_Bool)arg3 error:(id *)arg4;
- (_Bool)sfu_changeFileProtectionAtURL:(id)arg1 toProtection:(id)arg2 recursively:(_Bool)arg3 error:(id *)arg4;
- (_Bool)sfu_changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 recursively:(_Bool)arg4 error:(id *)arg5;
- (_Bool)sfup_changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 onlyIncreaseProtection:(_Bool)arg4 recursively:(_Bool)arg5 error:(id *)arg6;
- (_Bool)sfu_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(_Bool)arg3 error:(id *)arg4;
- (_Bool)sfu_applyFileAttributesFromDocumentAtURL:(id)arg1 toDocumentAtURL:(id)arg2 error:(id *)arg3;
- (_Bool)sfup_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(_Bool)arg3 error:(id *)arg4 shouldUpdateAttributesHandler:(CDUnknownBlockType)arg5;
- (unsigned long long)sfu_pathUsage:(id)arg1;
- (unsigned long long)sfu_directoryUsage:(id)arg1;
@end

