//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemBuilder.h>

@class HFMutableSetDiff, HFWallpaperEditCollectionBuilder, HMRoom, NSSet, NSString;

@interface HFRoomBuilder : HFItemBuilder
{
    NSString *_name;
    HFWallpaperEditCollectionBuilder *_wallpaperBuilder;
    HFMutableSetDiff *_accessoryUUIDs;
}

+ (Class)homeKitRepresentationClass;
@property(retain, nonatomic) HFMutableSetDiff *accessoryUUIDs; // @synthesize accessoryUUIDs=_accessoryUUIDs;
@property(retain, nonatomic) HFWallpaperEditCollectionBuilder *wallpaperBuilder; // @synthesize wallpaperBuilder=_wallpaperBuilder;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_updateAccessories;
- (id)_updateName;
- (id)_createRoom;
- (id)commitItem;
- (id)_performValidation;
- (id)description;
@property(readonly, nonatomic) NSSet *accessories;
- (void)removeAccessory:(id)arg1;
- (void)addAccessory:(id)arg1;
- (void)setRoom:(id)arg1;
@property(readonly, nonatomic) HMRoom *room;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

@end

