//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface MCMSQLiteDB : NSObject
{
    struct sqlite3 *_db;
    NSURL *_url;
}

+ (struct sqlite3 *)openDBWithURL:(id)arg1;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (id)parentIdentifierForChildIdentifier:(id)arg1 error:(id *)arg2;
- (id)childIdentifiersForParentIdentifier:(id)arg1 error:(id *)arg2;
- (id)enumerateIdentifiersAndCodeSigningInfoUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)invalidateCodeSigningForIdentifierAndAllChildren:(id)arg1 error:(id *)arg2;
- (_Bool)invalidateCodeSigningWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)codeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)deleteCodeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)addCodeSigningEntry:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;
- (id)_selectCodeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)_codeSigningEntryFromStatementRow:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (_Bool)_deleteCodeSigningWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)_insertCodeSigningData:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)_insertCodeSigningInfo:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)_performInsertOrUpdateQuery:(const char *)arg1 withCodeSigningEntry:(id)arg2 forIdentifier:(id)arg3 isUpdate:(_Bool)arg4 error:(id *)arg5;
- (_Bool)_insertChildIdentifier:(id)arg1 forParentIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)_performSingleParameterQuery:(const char *)arg1 withTextInput:(id)arg2 error:(id *)arg3;
- (_Bool)_performSingleParameterQuery:(const char *)arg1 withTextInput:(id)arg2 expectedChanges:(int)arg3 error:(id *)arg4;
- (_Bool)_performTwoParameterQuery:(const char *)arg1 withTextInputOne:(id)arg2 andTextInputTwo:(id)arg3 expectedChanges:(int)arg4 error:(id *)arg5;
- (void)closeDB;
- (_Bool)_sqliteExec:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithParentDirectoryURL:(id)arg1;

@end

