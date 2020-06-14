//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKZoneModifying-Protocol.h>

@class NSMutableArray, NSMutableDictionary, SCKZoneDiff, SCKZoneSchema;

@interface SCKZoneModificationSilo : NSObject <SCKZoneModifying>
{
    SCKZoneSchema *_zoneSchema;
    NSMutableDictionary *_originalRecordsByID;
    NSMutableDictionary *_workingRecordsByID;
    NSMutableDictionary *_recordsToSaveByID;
    NSMutableArray *_deletedRecordIDs;
}

@property(retain, nonatomic) NSMutableArray *deletedRecordIDs; // @synthesize deletedRecordIDs=_deletedRecordIDs;
@property(retain, nonatomic) NSMutableDictionary *recordsToSaveByID; // @synthesize recordsToSaveByID=_recordsToSaveByID;
@property(retain, nonatomic) NSMutableDictionary *workingRecordsByID; // @synthesize workingRecordsByID=_workingRecordsByID;
@property(retain, nonatomic) NSMutableDictionary *originalRecordsByID; // @synthesize originalRecordsByID=_originalRecordsByID;
@property(retain, nonatomic) SCKZoneSchema *zoneSchema; // @synthesize zoneSchema=_zoneSchema;
- (void).cxx_destruct;
- (_Bool)_shouldAssertRecordValidity;
@property(readonly, copy, nonatomic) SCKZoneDiff *diff;
- (_Bool)recordExistsWithName:(id)arg1;
- (void)deleteRecordWithName:(id)arg1;
- (void)createOrUpdateRecordWithName:(id)arg1 recordType:(id)arg2 modifyBlock:(CDUnknownBlockType)arg3;
- (id)initWithZoneSchema:(id)arg1 contents:(id)arg2;

@end

