//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKRecord.h>

#import <NotesShared/ICHasDatabaseScope-Protocol.h>

@class NSString;

@interface CKRecord (IC) <ICHasDatabaseScope>
- (_Bool)ic_isOwnedByCurrentUser;
- (long long)databaseScope;
- (id)ic_loggingDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
