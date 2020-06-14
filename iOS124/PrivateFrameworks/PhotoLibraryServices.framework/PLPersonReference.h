//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, NSString, PLAdditionalAssetAttributes, PLPerson;

@interface PLPersonReference : PLManagedObject
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 personUUID:(id)arg2 personData:(id)arg3;

// Remaining properties
@property(retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes; // @dynamic assetAttributes;
@property(retain, nonatomic) PLPerson *person; // @dynamic person;
@property(retain, nonatomic) NSData *personData; // @dynamic personData;
@property(retain, nonatomic) NSString *personUUID; // @dynamic personUUID;

@end

