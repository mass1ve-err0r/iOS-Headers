//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/QLCacheBasicVersionedFileIdentifier.h>

@interface QLCacheBasicVersionedFileIdentifier (SQLRequests)
- (id)initWithSteppedStatement:(struct sqlite3_stmt *)arg1 database:(id)arg2;
- (struct sqlite3_stmt *)statementToUpdateRecordWithCacheIdentifier:(unsigned long long)arg1 inDatabase:(id)arg2;
- (struct sqlite3_stmt *)statementToInsertIntoDatabase:(id)arg1;
@end

