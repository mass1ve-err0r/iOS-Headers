//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MemoryEntity.h"

@class NSArray, NSError, NSNumber;

@interface Job : MemoryEntity
{
    _Bool _isUserInitiated;
    NSNumber *_purchaseID;
    NSArray *_purchases;
    NSArray *_downloads;
}

+ (id)defaultProperties;
+ (Class)databaseEntityClass;
+ (Class)classForType:(id)arg1;
+ (id)newWithSystemAppLookupItem:(id)arg1 storeItemID:(id)arg2;
+ (id)newWithSystemAppBundleID:(id)arg1 storeItemID:(id)arg2;
+ (id)newWithDatabaseEntity:(id)arg1 properties:(id)arg2;
@property(copy, nonatomic) NSArray *downloads; // @synthesize downloads=_downloads;
@property(copy, nonatomic) NSArray *purchases; // @synthesize purchases=_purchases;
@property(copy, nonatomic) NSNumber *purchaseID; // @synthesize purchaseID=_purchaseID;
@property(nonatomic) _Bool isUserInitiated; // @synthesize isUserInitiated=_isUserInitiated;
- (void).cxx_destruct;
- (void)_setPropertyValuesWithActivity:(id)arg1;
- (id)description;
- (id)softwareDownload;
- (void)setPolicy:(id)arg1;
@property(retain, nonatomic) NSError *error;
- (id)initJobType:(long long)arg1 withActivity:(id)arg2;

@end

