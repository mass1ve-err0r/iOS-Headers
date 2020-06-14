//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>

@class BRCItemID, BRCZoneRowID;

__attribute__((visibility("hidden")))
@interface BRCItemGlobalID : NSObject <NSCopying>
{
    BRCZoneRowID *_zoneRowID;
    BRCItemID *_itemID;
}

+ (id)itemGlobalIDFromLocalItem:(id)arg1;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) BRCZoneRowID *zoneRowID; // @synthesize zoneRowID=_zoneRowID;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToItemGlobalID:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithZoneRowID:(id)arg1 itemID:(id)arg2;

@end

