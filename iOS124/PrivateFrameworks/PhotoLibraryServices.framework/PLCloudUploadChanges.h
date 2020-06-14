//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface PLCloudUploadChanges : NSObject
{
    NSMutableArray *_insertedAssets;
    NSMutableArray *_updatedAssets;
    NSMutableSet *_adjustedAssetUuids;
    NSMutableSet *_propertyChangedAssetUuids;
    NSMutableSet *_faceChangedAssetUuids;
    NSMutableArray *_updatedMasters;
    NSMutableArray *_albumInserts;
    NSMutableArray *_albumChanges;
    NSMutableArray *_memoryChanges;
    NSMutableArray *_personChanges;
    NSMutableArray *_faceCropChanges;
    NSMutableArray *_suggestionChanges;
    NSMutableSet *_updatedRelationship;
    NSMutableArray *_deletedRecords;
}

@property(retain, nonatomic) NSMutableArray *deletedRecords; // @synthesize deletedRecords=_deletedRecords;
@property(retain, nonatomic) NSMutableSet *updatedRelationship; // @synthesize updatedRelationship=_updatedRelationship;
@property(retain, nonatomic) NSMutableArray *suggestionChanges; // @synthesize suggestionChanges=_suggestionChanges;
@property(retain, nonatomic) NSMutableArray *faceCropChanges; // @synthesize faceCropChanges=_faceCropChanges;
@property(retain, nonatomic) NSMutableArray *personChanges; // @synthesize personChanges=_personChanges;
@property(retain, nonatomic) NSMutableArray *memoryChanges; // @synthesize memoryChanges=_memoryChanges;
@property(retain, nonatomic) NSMutableArray *albumChanges; // @synthesize albumChanges=_albumChanges;
@property(retain, nonatomic) NSMutableArray *albumInserts; // @synthesize albumInserts=_albumInserts;
@property(retain, nonatomic) NSMutableArray *updatedMasters; // @synthesize updatedMasters=_updatedMasters;
@property(retain, nonatomic) NSMutableSet *faceChangedAssetUuids; // @synthesize faceChangedAssetUuids=_faceChangedAssetUuids;
@property(retain, nonatomic) NSMutableSet *propertyChangedAssetUuids; // @synthesize propertyChangedAssetUuids=_propertyChangedAssetUuids;
@property(retain, nonatomic) NSMutableSet *adjustedAssetUuids; // @synthesize adjustedAssetUuids=_adjustedAssetUuids;
@property(retain, nonatomic) NSMutableArray *updatedAssets; // @synthesize updatedAssets=_updatedAssets;
@property(retain, nonatomic) NSMutableArray *insertedAssets; // @synthesize insertedAssets=_insertedAssets;
- (void).cxx_destruct;
- (id)summaryDescription;
- (_Bool)isEmpty;
- (id)init;

@end

